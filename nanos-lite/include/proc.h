#ifndef __PROC_H__
#define __PROC_H__

#include <common.h>
#include <memory.h>

#define STACK_SIZE (8 * PGSIZE)

typedef union {
  uint8_t stack[STACK_SIZE] PG_ALIGN;
  struct {
    Context *cp;
    AddrSpace as;
    // we do not free memory, so use `max_brk' to determine when to call _map()
    uintptr_t max_brk;
  };
} PCB;

void naive_uload(PCB *pcb, const char *filename);
void context_kload(PCB *pcb, void *entry, void *arg);
void context_uload(PCB *pcb, char *filename, char *const argv[], char *const envp[]);
void exit();
Context* schedule(Context *prev);
void switch_boot_pcb();
void* new_page(size_t nr_page);

extern PCB *current;

// prot
#define _PAGE_PRESENT (uintptr_t)1 << 0
#define _PAGE_WRITE   (uintptr_t)1 << 1

#endif
