#include <proc.h>

#define MAX_NR_PROC 4

static PCB pcb[MAX_NR_PROC] __attribute__((used)) = {};
static PCB pcb_boot = {};
PCB *current = NULL;

void switch_boot_pcb() {
  current = &pcb_boot;
}

void hello_fun(void *arg) {
  int j = 1;
  while (1) {
    Log("Hello World from Nanos-lite with arg '%p' for the %dth time!", (uintptr_t)arg, j);
    j ++;
    yield();
  }
}

void init_proc() {
  switch_boot_pcb();

  Log("Initializing processes...");
  //naive_uload(NULL, "/bin/hello");
  // naive_uload(NULL, "/bin/file-test");
  //naive_uload(NULL, "/bin/timer-test");
  //naive_uload(NULL, "/bin/event-test");
  //naive_uload(NULL, "/bin/bmp-test");
  //naive_uload(NULL, "/bin/nslider");
  //naive_uload(NULL, "/bin/menu");
  // naive_uload(NULL, "/bin/nterm");
    // naive_uload(NULL, "/bin/bird");
  // naive_uload(NULL, "/bin/pal");
  // naive_uload(NULL, "/bin/typing-game");
  // naive_uload(NULL, "/bin/coremark");
  naive_uload(NULL, "/bin/dhrystone");


  

  // load program here

}

Context* schedule(Context *prev) {
  return NULL;
}
