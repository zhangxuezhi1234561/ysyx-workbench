#ifndef __COMMON_H__
#define __COMMON_H__

/* Uncomment these macros to enable corresponding functionality. */
#define HAS_CTE
//#define HAS_VME
//#define MULTIPROGRAM
//#define TIME_SHARING

#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <debug.h>

extern uint8_t ramdisk_start;
extern uint8_t ramdisk_end;

size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);
void do_syscall(Context *c);
int mm_brk(uintptr_t brk);
size_t serial_write(const void *buf, size_t offset, size_t len);
size_t events_read(void *buf, size_t offset, size_t len);
size_t dispinfo_read(void *buf, size_t offset, size_t len);
size_t fb_write(const void *buf, size_t offset, size_t len);

#endif
