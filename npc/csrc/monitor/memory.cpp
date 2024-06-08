#include "host.h"
#include "common.h"
#include <stdint.h>

static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};

static const uint32_t img[] = {
    0x108093,       // 00000 00000 01 -- 00001 -- 000 -- 00001 -- 0010011
    0x208093,
    0x308093,
    0x100073
};

uint8_t* guest_to_host(uint32_t paddr) { return pmem + paddr - CONFIG_MBASE; }

uint32_t pmem_read(uint32_t addr, int len) {
    uint32_t ret = host_read(guest_to_host(addr), len);
    return ret;
}

void init_isa() {
    memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));
    return;
}