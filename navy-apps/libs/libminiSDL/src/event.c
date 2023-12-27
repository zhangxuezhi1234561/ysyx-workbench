#include <NDL.h>
#include <SDL.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
//#include <common.h>

#define keyname(key) #key,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

#define Key_Num sizeof(keyname) / sizeof(keyname[0])

#define key_size sizeof(keyname)/sizeof(keyname[0])
int find_key(char *buf){
  int ret = -1;
  for(int i = 0; i < key_size; i++){
    if(strcmp(buf, keyname[i]) == 0){
      ret = i;
      break;
    }
  }
  return ret;
}

int SDL_PushEvent(SDL_Event *ev) {
  assert(0);
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  char buf[64];
  char c;
  memset(buf, 0, sizeof(buf));
  NDL_PollEvent(buf, sizeof(buf));
  //sscanf(buf, "k%c %s", &c, key);
  char *write_buf = (char*)buf;
  if(write_buf[0] == 'k'){
    if(write_buf[1] == 'd'){
      ev->type = SDL_KEYDOWN;
      ev->key.type = SDL_KEYDOWN;
    }
    else if(write_buf[1] == 'u'){
      ev->type = SDL_KEYUP;
      ev->key.type = SDL_KEYUP;
    }
    ev->key.keysym.sym = find_key(write_buf + 3);
    if(ev->key.keysym.sym != -1){
      return 1;
    }
  }
  else{
    ev->key.keysym.sym = SDLK_NONE;
  }
  
  return 0;
}

int SDL_WaitEvent(SDL_Event *event) {
  event->key.keysym.sym = SDLK_NONE;
  while(event->key.keysym.sym == SDLK_NONE || event->key.keysym.sym == -1){
    SDL_PollEvent(event);
  }
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

static uint8_t keystate[Key_Num] = {0};
uint8_t* SDL_GetKeyState(int *numkeys) {
  // SDL_Event *ev;
  SDL_Event *ev = (SDL_Event*)malloc(sizeof(SDL_Event));
  SDL_PollEvent(ev);
  if(ev->key.type == SDL_KEYDOWN){
    keystate[ev->key.keysym.sym] = 1;
  }
  else if(ev->key.type == SDL_KEYUP){
    keystate[ev->key.keysym.sym] = 0;
  }
  if(numkeys){
    *numkeys = 0;
  }
  for(int i = 0; i < Key_Num; i++){
    if(keystate[i] == 1){
      if(numkeys){
        *numkeys += 1;
      }
    }
  }
  //printf("*********numkeys: %p\n", numkeys);
  //assert(0);
  return keystate;
}
