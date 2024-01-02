#include <am.h>
#include <amdev.h>
#include <NDL.h>
#include <sys/time.h>
#include <SDL.h>
#include <sdl-event.h>
#include <klib-macros.h>
#include <stdlib.h>

static void __navy_timer_config(AM_TIMER_CONFIG_T *cfg) { cfg->present = true; cfg->has_rtc = true; }
static void __navy_input_config(AM_INPUT_CONFIG_T *cfg) { cfg->present = true; }
static void __navy_uart_config(AM_UART_CONFIG_T *cfg)   { cfg->present = false; }
static void __navy_net_config(AM_NET_CONFIG_T *cfg)     { cfg->present = false; }

void __navy_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}

void __navy_timer_uptime(AM_TIMER_UPTIME_T *uptime){
  static struct timeval tv;
  gettimeofday(&tv, NULL);
  uptime->us = tv.tv_usec + tv.tv_sec * 1000000 - (navy_boot_time.tv_usec + navy_boot_time.tv_sec * 1000000);
}

void __navy_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  SDL_Event *ev = (SDL_Event *)malloc(sizeof(SDL_Event));
  SDL_PollEvent(ev);
  if(ev->key.type == SDL_KEYDOWN){
    kbd->keydown = true;
  }
  else{
    kbd->keydown = false;
  }
  kbd->keycode = ev->key.keysym.sym;
  free(ev);
}

void __navy_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = navy_screen_w, .height = navy_screen_h,
    .vmemsz = (navy_screen_w * navy_screen_h ) * sizeof(uint32_t)
  };
}

void __navy_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl){
  // printf("x: %d, y: %d, w: %d, h: %d\n", ctl->x, ctl->y, ctl->w, ctl->h);
  NDL_DrawRect(ctl->pixels, ctl->x, ctl->y, ctl->w, ctl->h);
}

void __navy_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}


typedef void (*handler_t)(void *buf);
static void *lut[128] = {
  [AM_TIMER_CONFIG] = __navy_timer_config,
  [AM_TIMER_RTC   ] = __navy_timer_rtc,
  [AM_TIMER_UPTIME] = __navy_timer_uptime,
  [AM_INPUT_CONFIG] = __navy_input_config,
  [AM_INPUT_KEYBRD] = __navy_input_keybrd,
  [AM_GPU_CONFIG  ] = __navy_gpu_config,
  [AM_GPU_FBDRAW  ] = __navy_gpu_fbdraw,
  [AM_GPU_STATUS  ] = __navy_gpu_status,
  [AM_UART_CONFIG ] = __navy_uart_config,
  // [AM_AUDIO_CONFIG] = __am_audio_config,
  // [AM_AUDIO_CTRL  ] = __am_audio_ctrl,
  // [AM_AUDIO_STATUS] = __am_audio_status,
  // [AM_AUDIO_PLAY  ] = __am_audio_play,
  // [AM_DISK_CONFIG ] = __am_disk_config,
  // [AM_DISK_STATUS ] = __am_disk_status,
  // [AM_DISK_BLKIO  ] = __am_disk_blkio,
  // [AM_NET_CONFIG  ] = __navy_net_config,
};

static void fail(void *buf) { panic("access nonexist register"); }

bool ioe_init() {
  for (int i = 0; i < LENGTH(lut); i++)
    if (!lut[i]) lut[i] = fail;
  // __am_gpu_init();
  // __am_timer_init();
  // __am_audio_init();
  NDL_Init(0);

  return true;
}

void ioe_read (int reg, void *buf) { ((handler_t)lut[reg])(buf); }
void ioe_write(int reg, void *buf) { ((handler_t)lut[reg])(buf); }
