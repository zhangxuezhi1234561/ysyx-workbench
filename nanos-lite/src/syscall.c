#include <common.h>
#include "syscall.h"
#include <sys/time.h>
#include <proc.h>
#include <fs.h>


//#define STRACE

intptr_t sys_yield(){
  yield();
  return 0;
}

void sys_halt(uintptr_t t){
  halt(t);
}
extern uint64_t boot_time;
intptr_t sys_gettimeofday(struct timeval *tv, struct timezone *tz){
  tv->tv_usec = io_read(AM_TIMER_UPTIME).us % 1000000;
 // printf("!!!!!!!!%d\n", tv->tv_usec);
  tv->tv_sec = boot_time + io_read(AM_TIMER_UPTIME).us / 1000000;
  //printf("***********tv_us: %d, tv_s: %d\n", tv->tv_usec, tv->tv_sec);
  return 0;
}

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;  //GPRx == GPR2
  a[2] = c->GPR3;
  a[3] = c->GPR4;

  switch (a[0]) {
    case SYS_yield:  
      c->GPR2 = sys_yield();
      #ifdef STRACE
        printf("syscall is SYS_yield, ID = %d, return value is 0x%x\n", a[0],  c->GPR2);
      #endif
      break;
    case SYS_exit:      
      #ifdef STRACE
        printf("syscall is SYS_exit, ID = %d, return value is 0x%x\n", a[0], c->GPR2);
      #endif    
      sys_halt(a[1]);
      // exit();            
      break;
    case SYS_write: 
      c->GPR2 = fs_write(a[1], (const void *)a[2], a[3]);      //call the fs.c fs_write function.
      #ifdef STRACE
        printf("syscall is SYS_write, ID = %d, write file_name: %s, return value is 0x%x\n", a[0], get_file_name(a[1]), c->GPR2);
      #endif
      break;
    case SYS_brk:  
      c->GPR2 = mm_brk(a[1]);
      #ifdef STRACE
        printf("syscall is SYS_brk, ID = %d, return value is 0x%x\n", a[0], c->GPR2);
      #endif 
      break;
    case SYS_lseek:
      c->GPR2 = fs_lseek(a[1], a[2], a[3]);
      #ifdef STRACE
        printf("syscall is SYS_lseek, ID = %d, lseek file_name: %s, return value is 0x%x\n", a[0], get_file_name(a[1]), c->GPR2);
      #endif 
      break;
    case SYS_read:  
      c->GPR2 = fs_read(a[1], (void *)a[2], a[3]);
      #ifdef STRACE
        printf("syscall is SYS_read, ID = %d, read file_name: %s, return value is 0x%x\n", a[0], get_file_name(a[1]), c->GPR2);
      #endif      
      break;
    case SYS_open:  
      c->GPR2 = fs_open((const char *)a[1], a[2], a[3]);
      #ifdef STRACE
        printf("syscall is SYS_open, ID = %d, return value is 0x%x, file name is %s\n", a[0], a[1], (const char*)a[1]);
      #endif   
      break;
    case SYS_close:
      c->GPR2 = fs_close(a[1]);
      #ifdef STRACE
        printf("syscall is SYS_close, ID = %d, close file_name: %s, return value is 0x%x\n", a[0], get_file_name(a[1]), c->GPR2);
      #endif       
      break;
    case SYS_gettimeofday:  
      c->GPR2 = sys_gettimeofday((struct timeval *)a[1], (struct timezone *)a[2]);
      #ifdef STRACE
        printf("syscall is SYS_gettimeofday, ID = %d, return value is 0x%x\n", a[0], c->GPR2);
      #endif        
      break;
    case SYS_execve:
      if(fs_open((const char *)a[1], 0, 0) == -1){
        c->GPR2 = (uintptr_t)-2;
        break;
      }
      // naive_uload(NULL, (char*)a[1]);
      context_uload(current, (char *)a[1], (char **)a[2], (char **)a[3]);
      // printf("++++current1: 0x%lx\n", current);
      switch_boot_pcb();
      // printf("++++current2: 0x%lx\n", current);
      yield();
      c->GPR2 = 0;
      #ifdef STRACE
        printf("syscall is SYS_execve, ID = %d, return value is 0x%x\n", a[0], c->GPR2);
      #endif 
      break; 
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}


