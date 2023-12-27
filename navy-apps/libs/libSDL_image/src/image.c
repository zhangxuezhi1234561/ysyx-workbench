#define SDL_malloc  malloc
#define SDL_free    free
#define SDL_realloc realloc

#define SDL_STBIMAGE_IMPLEMENTATION
#include "SDL_stbimage.h"
#include <assert.h>

SDL_Surface* IMG_Load_RW(SDL_RWops *src, int freesrc) {
  assert(src->type == RW_TYPE_MEM);
  assert(freesrc == 0);
  return NULL;
}

SDL_Surface* IMG_Load(const char *filename) {
  SDL_Surface *res;
  FILE *fp;
  fp = fopen(filename, "r");
  assert(fp != NULL);
  fseek(fp, 0, SEEK_END);

  int size = ftell(fp);
  fseek(fp, 0, SEEK_SET);

  char *buf = (char*)malloc(size);
  // buf = fp;
  fread(buf, sizeof(char), size, fp);
  res = STBIMG_LoadFromMemory(buf, size);
  fclose(fp);
  free(buf);
  return res;
  //return NULL;
}

int IMG_isPNG(SDL_RWops *src) {
  return 0;
}

SDL_Surface* IMG_LoadJPG_RW(SDL_RWops *src) {
  return IMG_Load_RW(src, 0);
}

char *IMG_GetError() {
  return "Navy does not support IMG_GetError()";
}
