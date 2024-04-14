#include <am.h>
#include <nemu.h>
#include <klib.h>
#include <arch/riscv.h>

static AddrSpace kas = {};
static void* (*pgalloc_usr)(int) = NULL;
static void (*pgfree_usr)(void*) = NULL;
static int vme_enable = 0;

static Area segments[] = {      // Kernel memory mappings
  NEMU_PADDR_SPACE
};

#define USER_SPACE RANGE(0x40000000, 0x80000000)

static inline void set_satp(void *pdir) {
  uintptr_t mode = 1ul << (__riscv_xlen - 1);
  asm volatile("csrw satp, %0" : : "r"(mode | ((uintptr_t)pdir >> 12)));
}

static inline uintptr_t get_satp() {
  uintptr_t satp;
  asm volatile("csrr %0, satp" : "=r"(satp));
  return satp << 12;
}

bool vme_init(void* (*pgalloc_f)(int), void (*pgfree_f)(void*)) {
  pgalloc_usr = pgalloc_f;
  pgfree_usr = pgfree_f;

  kas.ptr = pgalloc_f(PGSIZE);

  int i;
  for (i = 0; i < LENGTH(segments); i ++) {
    void *va = segments[i].start;
    printf("segments[%d]: start at %x, end at %x\n", i, segments[i].start, segments[i].end);
    for (; va < segments[i].end; va += PGSIZE) {
      map(&kas, va, va, 0);
    }
  }
  set_satp(kas.ptr);
  vme_enable = 1;

  return true;
}

void protect(AddrSpace *as) {
  PTE *updir = (PTE*)(pgalloc_usr(PGSIZE));
  as->ptr = updir;
  as->area = USER_SPACE;
  as->pgsize = PGSIZE;
  // map kernel space
  memcpy(updir, kas.ptr, PGSIZE);
}

void unprotect(AddrSpace *as) {
}

void __am_get_cur_as(Context *c) {
  c->pdir = (vme_enable ? (void *)get_satp() : NULL);
}

void __am_switch(Context *c) {
  if (vme_enable && c->pdir != NULL) {
    set_satp(c->pdir);
  }
}

static inline PTE check_pageing(PTE *entry, PTE vpn) {
  if(entry[vpn] & _PAGE_PRESENT) {
    return get_pfn(entry[vpn]) << NORMAL_PAGE_SHIFT;
  }
  else {
    PTE base = (PTE)(pgalloc_usr(PGSIZE));
    set_pfn(&entry[vpn], base >> NORMAL_PAGE_SHIFT);  // right shift 12, left shift 10
    set_attribute(&entry[vpn], _PAGE_PRESENT);
    return base;
  }
}

/*
    00    00 0000 000    0 0000 0000     0000 0000 0000
---|p0|--|    p1     |--|     p2    |---|      o       |
*/

void map(AddrSpace *as, void *va, void *pa, int prot) {
  PTE vpn[] = {
    ((PTE)va >> 12) & ((1 << 9) - 1),
    ((PTE)va >> 21) & ((1 << 9) - 1),
    ((PTE)va >> 30) & ((1 << 9) - 1)
  };
  PTE *first_page  = as->ptr;
  PTE *second_page = (PTE*)check_pageing(first_page, vpn[2]);
  PTE *third_page  = (PTE*)check_pageing(second_page, vpn[1]);
  
  set_pfn(&third_page[vpn[0]], (PTE)pa >> NORMAL_PAGE_SHIFT);
  set_attribute(&third_page[vpn[0]], _PAGE_PRESENT);
}

Context *ucontext(AddrSpace *as, Area kstack, void *entry) {
  Context *ctx = (Context*)((uint8_t*)kstack.end - sizeof(Context));
  memset((void*)ctx, 0, sizeof(Context));
  ctx->mstatus = 0x1800 | 0x00000080;
  ctx->mepc = (uintptr_t)entry;
  ctx->mscratch = 0;
  ctx->gpr[SP_REG] = (uintptr_t)ctx;
  ctx->pdir = as->ptr;

  // Log("ucontext: 0x%lx\n", (uintptr_t)ctx);

  return ctx; 
  // return NULL;
}
