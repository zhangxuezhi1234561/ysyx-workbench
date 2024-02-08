#include <memory.h>
#include <proc.h>

static void *pf = NULL;

void* new_page(size_t nr_page) {
  void *old = pf;
  memset(old, 0, nr_page * PGSIZE);
  pf += nr_page * PGSIZE;
  return old;
}

#ifdef HAS_VME
static void* pg_alloc(int n) {
  return new_page(n / PGSIZE);
  // return NULL;
}
#endif

void free_page(void *p) {
  panic("not implement yet");
}

/* The brk() system call handler. */
int mm_brk(uintptr_t brk) {
  if(brk > current->max_brk) {
    uintptr_t vaddr_start = current->max_brk;
    uintptr_t vaddr_end = brk;
    uintptr_t pgnum = (vaddr_end - vaddr_start + PGSIZE - 1) >> 12;
    void *base = new_page(pgnum);
    for(int i = 0; i < pgnum; i++) {
      map(&current->as, (void*)vaddr_start + i * PGSIZE, (void*)base + i * PGSIZE, _PAGE_PRESENT | _PAGE_WRITE);
    }
    current->max_brk += pgnum * PGSIZE;
  }
  return 0;
}

void init_mm() {
  pf = (void *)ROUNDUP(heap.start, PGSIZE);
  Log("free physical pages starting from %p", pf);

#ifdef HAS_VME
  vme_init(pg_alloc, free_page);
#endif
}
