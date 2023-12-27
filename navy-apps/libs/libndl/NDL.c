#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>
#include <fcntl.h>
#include <assert.h>

static int evtdev = -1;
static int fbdev = -1;
int navy_screen_w = 0, navy_screen_h = 0;
static int canvas_w = 0, canvas_h = 0;

struct timeval navy_boot_time;
static struct timeval tv;

uint32_t NDL_GetTicks() {//return ms
  uint32_t ret = 0;
  if(!gettimeofday(&tv, NULL)){
    
    ret = (tv.tv_sec - navy_boot_time.tv_sec) * 1000 + (tv.tv_usec - navy_boot_time.tv_usec) / 1000;
    // printf("-------ms: %d\n", ret);
  }
  return ret;
}

int NDL_PollEvent(char *buf, int len) {
  int fd = open("/dev/events", 0, 0);
  int ret = read(fd, buf, len);
  //printf("****%s\n", buf);
  return ret;
}

void NDL_OpenCanvas(int *w, int *h) {
  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    navy_screen_w = *w; navy_screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", navy_screen_w, navy_screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
  else{
    if(*w == 0 && *h == 0){
      *w = navy_screen_w;
      *h = navy_screen_h;
      canvas_w = navy_screen_w;
      canvas_h = navy_screen_h;
    }
    if(*w <= navy_screen_w && *h <= navy_screen_h){
      canvas_w = *w;
      canvas_h = *h;
    }
    else{
      assert(0);
    }
    //navy_screen_w = *w; navy_screen_h = *h;
    //printf("Open w: %d, h: %d\n", navy_screen_w, navy_screen_h);
  }
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  int fd = open("/dev/fb", 0, 0);
  for(int i = 0; i < h; i++)
  {
    lseek(fd, x + navy_screen_w * (i + y), SEEK_SET);
    write(fd, pixels + w * i, w);
  }
  //io_write(AM_GPU_FBDRAW, x, y, pixels, w, h);
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  gettimeofday(&tv, NULL);
  navy_boot_time.tv_sec  = tv.tv_sec;
  navy_boot_time.tv_usec = tv.tv_usec;

  int fd = open("/proc/dispinfo", 0, 0);
  char buf[64] = {0}; 
  read(fd, buf, sizeof(buf));
  sscanf(buf, "WIDTH : %d\nHEIGHT: %d\n", &navy_screen_w, &navy_screen_h);
  //printf("Init w: %d, h: %d\n", navy_screen_w, navy_screen_h);
  return 0;
}

void NDL_Quit() {
}
