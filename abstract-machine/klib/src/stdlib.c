#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <unistd.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static unsigned long int next = 1;


int rand(void) {
  // RAND_MAX assumed to be 32767
  next = next * 1103515245 + 12345;
  return (unsigned int)(next/65536) % 32768;
}

void srand(unsigned int seed) {
  next = seed;
}

int abs(int x) {
  return (x < 0 ? -x : x);
}

int atoi(const char* nptr) {
  int x = 0;
  while (*nptr == ' ') { nptr ++; }
  while (*nptr >= '0' && *nptr <= '9') {
    x = x * 10 + *nptr - '0';
    nptr ++;
  }
  return x;
}

void *malloc(size_t size) {
  // On native, malloc() will be called during initializaion of C runtime.
  // Therefore do not call panic() here, else it will yield a dead recursion:
  //   panic() -> putchar() -> (glibc) -> malloc() -> panic()
// #if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))
  //static bool malloc_init = false;
  static char *addr;
  static bool isfirst = true;
  //assert(0);
  //if(hbrk == NULL) {hbrk = (void *)ROUNDUP(heap.start, 8);}
  if(isfirst) {
    isfirst = false;
    addr = heap.start;//(void *)ROUNDUP(heap.start, 8);
  }

  void *old = (void *)addr;
  addr += size;
  addr = (char *)ROUNDUP(addr, 8);
  //if(addr >= (char *)heap.end) assert(0);
  
  
  //size_t *header = sbrk(blk_size);

 // panic("Not implemented");
  return old;
// #endif
//   return NULL;
  //return (char *)header + SIZE_T_SIZE;
}

void free(void *ptr) {
}

#endif
