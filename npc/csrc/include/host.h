#ifndef __MEMORY_HOST_H__
#define __MEMORY_HOST_H__

#include <assert.h>
#include "npc_common.h"

typedef MUXDEF(CONFIG_ISA64, uint64_t, uint32_t) word_t;
typedef MUXDEF(CONFIG_ISA64, uint64_t, uint32_t) paddr_t;

#define CONFIG_MSIZE    0x2000000       // 128M
#define CONFIG_MBASE    0x80000000
#define RESET_VECTOR    0x80000000  

static inline uint32_t host_read(void *addr, int len) {
    switch(len) {
        case 1: return *(uint8_t *) addr;
        case 2: return *(uint16_t*) addr;
        case 4: return *(uint32_t*) addr;
        default: assert(0);
    }
}

uint8_t* guest_to_host(uint32_t paddr);

void paddr_write(paddr_t addr, int wmask, word_t data);
void pmem_write(int waddr, int wdata, char wmask);
int pmem_read(int addr, int len);

void init_isa();


typedef struct {
    uint32_t *gpr_pc;
} cpu_state;

void isa_reg_display();
void npc_stop(int a, int b);

#endif