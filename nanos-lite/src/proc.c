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
    Log("Hello World from Nanos-lite with arg '%d' for the %dth time!", *((int*)arg), j);
    j ++;
    yield();
  }
}

void init_proc() {
  switch_boot_pcb();
  // char *argv[] = {"--skip", "swef", NULL};
  // char *argv[] = {"/bin/exec-test", "1", "2", NULL};

  // char *argv[] = {"/usr/bin/wc", "/share/games/bird/atlas.txt", NULL};
  Log("Initializing processes...");
  // naive_uload(NULL, "/bin/hello");
  // naive_uload(NULL, "/bin/file-test");
  //naive_uload(NULL, "/bin/timer-test");
  //naive_uload(NULL, "/bin/event-test");
  // naive_uload(NULL, "/bin/bmp-test");
  //naive_uload(NULL, "/bin/nslider");
  // naive_uload(NULL, "/bin/menu");
  // naive_uload(NULL, "/bin/nterm");
    // naive_uload(NULL, "/bin/bird");
  // naive_uload(NULL, "/bin/pal");
  // naive_uload(NULL, "/bin/typing-game");
  // naive_uload(NULL, "/bin/coremark");
  // naive_uload(NULL, "/bin/dhrystone");
  // naive_uload(NULL, "/bin/fceux");

  int *arg1 = malloc(sizeof(int));
  *arg1 = 1;
  // int *arg2 = malloc(sizeof(int));
  // *arg2 = 2;
  context_kload(&pcb[0], hello_fun, arg1);

  // context_kload(&pcb[1], hello_fun, arg2);
  // context_uload(&pcb[0], "/bin/exec-test", argv, NULL);
  // context_uload(&pcb[0], "/bin/menu", argv, NULL);
  // context_uload(&pcb[1], "/bin/nterm", NULL, NULL);
  context_uload(&pcb[1], "/bin/pal", NULL, NULL);

  // context_uload(&pcb[1], "/bin/dummy", NULL, NULL);
  // context_uload(&pcb[0], "/bin/hello", NULL, NULL);
  // context_uload(&pcb[1], "/bin/busybox", argv, NULL);

  // naive_uload(NULL, "/bin/nterm");
  

  // load program here

}

void exit(){
 // naive_uload(NULL, "/bin/nterm");
  return;
}

int times = 0;
Context* schedule(Context *prev) {
  current->cp = prev;
  // printf("------current1->cp: 0x%lx\n", current->cp);
  current = (times++ % 1000 != 0 ? &pcb[1] : &pcb[0]);
  // current = &pcb[0];
  // printf("------current2: 0x%lx\n", current);
  // printf("------current2->cp: 0x%lx\n", current->cp);

  return current->cp;
  // return NULL;
}
