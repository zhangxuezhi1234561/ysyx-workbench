#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

int main(int argc, char *argv[], char *envp[]);
extern char **environ;
void call_main(uintptr_t *args) {
  // printf("----------\n");
  char *empty[] =  {NULL };
  environ = empty;
  int argc = 0;
  char **argv = NULL;

  if(args) {
    argc = *(uintptr_t*)args;
    args++;
    argv = (char**)args;
    args = args + argc + 1;
  }
  
  char **envp = (char**)args;
  // printf("----argv[0]: %s, argv[1]: %s\n", argv[0], argv[1]);
  // if(envp){
  //   printf("---envp[0]: %s\n", envp[0]);
  // }

  exit(main(argc, argv, envp));
  assert(0);
}
