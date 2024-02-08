#include <nterm.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>
#include <string.h>

char handle_key(SDL_Event *ev);

static void sh_printf(const char *format, ...) {
  static char buf[256] = {};
  va_list ap;
  va_start(ap, format);
  int len = vsnprintf(buf, 256, format, ap);
  va_end(ap);
  term->write(buf, len);
}

static void sh_banner() {
  sh_printf("Built-in Shell in NTerm (NJU Terminal)\n\n");
}

static void sh_prompt() {
  sh_printf("sh> ");
}

static void sh_handle_cmd(const char *cmd) {
  // printf("-------cmd: %s\n", cmd);
  if(cmd[0] == '\n'){
    return;
  }
  char *cmd_cpy = (char*)malloc(40 * sizeof(char));
  // printf("-------cmd: %s\n",cmd);
  strcpy(cmd_cpy, cmd);
  // printf("-------cmd: %s\n",cmd_cpy);
  
  char *argv;
  cmd_cpy = strtok(cmd_cpy, "\n");
  argv = strtok(cmd_cpy, " ");

  char *args[5] = {NULL};
  int cnt = 0;
  args[cnt++] = strtok(NULL, " ");
  while(args[cnt - 1]) {
    args[cnt++] = strtok(NULL, " ");
  }
  // printf("-------cmd: %s\n",argv);
  // execve(argv, NULL, NULL);
  printf("args: %s\n", args[0]);
  printf("args[1]: %s\n", args[1]);
  execvp(argv, args);

}

void builtin_sh_run() {
  sh_banner();
  sh_prompt();
  setenv("PATH", "/bin:/usr/bin", 0);


  while (1) {
    SDL_Event ev;
    if (SDL_PollEvent(&ev)) {
      if (ev.type == SDL_KEYUP || ev.type == SDL_KEYDOWN) {
        const char *res = term->keypress(handle_key(&ev));
        if (res) {
          sh_handle_cmd(res);
          sh_prompt();
        }
      }
    }
    refresh_terminal();
  }
}
