#include <am.h>
#include <nemu.h>
#include <stdio.h>


#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
  /*
  int i;
  int w = 400;
  int h = 300;
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for(i = 0; i < w * h; i++) fb[i] = i;
  outl(SYNC_ADDR, 1);*/
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = inl(VGACTL_ADDR) >> 16, .height = (uint32_t)inw(VGACTL_ADDR) ,
    .vmemsz = (inl(VGACTL_ADDR) >> 16) * (inw(VGACTL_ADDR)) * sizeof(uint32_t)
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  int i, j;
  int W = io_read(AM_GPU_CONFIG).width, H = io_read(AM_GPU_CONFIG).height;
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  int len = (ctl->w + ctl->x >= W) ? W - ctl->x : ctl->w;
  for(i = 0; i < ctl->h; i++){
    if(ctl->y + i < H){
      for(j = 0; j < len; j++){
        int offset = i * ctl->w + j;
        int fb_offset = (i + ctl->y) * W + j + ctl->x;
        fb[fb_offset] = *(uint32_t *)((uint32_t *)ctl->pixels + offset);
      }
    }
  }
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
