#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>
#include <stdio.h>

static Context* (*user_handler)(Event, Context*) = NULL;

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

extern void __am_get_cur_as(Context *c);
extern void __am_switch(Context *c);
Context* __am_irq_handle(Context *c) {
  __am_get_cur_as(c);
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case ECALL:
        if(c->GPR1 == -1){ev.event = EVENT_YIELD; c->mepc += 4;}
        else{ev.event = EVENT_SYSCALL; c->mepc += 4;}
      //  else assert(0);
        break;
      default: ev.event = EVENT_ERROR; assert(0); break;
    }
/*
    for(int i = 0; i < 32; i++){
      printf("%s: %x\n", regs[i], c->gpr[i]);
    }
    printf("[Context CSR Value] mcause: %x; mstatus: %x; mepc: %x\n", c->mcause, c->mstatus, c->mepc); */

    c = user_handler(ev, c);
    assert(c != NULL);
  }
  __am_switch(c);
  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  Context *ctx = (Context*)((uint8_t*)kstack.end - sizeof(Context));
  memset((void*)ctx, 0, sizeof(Context));
  ctx->mstatus = 0x1800;
  ctx->mepc = (uintptr_t)entry;
  
  ctx->mscratch = 0;

  //  printf("kcontext: 0x%lx\n", (uintptr_t)ctx);

  ctx->pdir = NULL;

  //ctx->gpr[RA_REG] = (uintptr_t)__am_asm_trap;

  ctx->GPR2 = (uintptr_t)arg;   //a0
  ctx->gpr[SP_REG] = (uintptr_t)ctx;
  // printf("arg is 0x%lx\n", ctx->GPR2);

  
  return ctx;
}

void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, -1; ecall");
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
