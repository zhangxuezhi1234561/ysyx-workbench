#ifndef __MEMORY_HOST_H__
#define __MEMORY_HOST_H__

#include <assert.h>

static inline uint32_t host_read(void *addr, int len) {
    switch(len) {
        case 1: return *(uint8_t *) addr;
        case 2: return *(uint16_t*) addr;
        case 4: return *(uint32_t*) addr;
        default: assert(0);
    }
}

#endif