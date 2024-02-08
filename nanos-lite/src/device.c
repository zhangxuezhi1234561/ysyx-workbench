#include <common.h>
#include <stdio.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  yield();
  char* write_buf = (char*)buf;
  for(int i = 0; i < len; i++){
    putch(write_buf[i]);
  }
  return len;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  yield();
  AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);    //bool keydown; int keycode;
  size_t ret = 0;
  memset(buf, 0, len);
 // printf("---------------\n");
 if(ev.keycode == AM_KEY_NONE){
  return 0;
 }
  if(ev.keydown){
    ret = snprintf((char*)buf, len, "kd %s", keyname[ev.keycode]);
    //s
    
  }
  else{
    ret = snprintf((char*)buf, len, "ku %s", keyname[ev.keycode]);
  }
  //printf("****%d, len is %d, buf is %s\n", sizeof(buf), len, (char *)buf);
  
  return ret;
  return 0;
}

static int display_w;
static int display_h;

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  AM_GPU_CONFIG_T cfg = io_read(AM_GPU_CONFIG);
  size_t ret = 0;
  memset(buf, 0, len);
  display_w = cfg.width;
  display_h = cfg.height;
  ret = snprintf((char*)buf, len, "WIDTH : %d\n", display_w);
  ret = snprintf((char*)buf + ret, len, "HEIGHT: %d\n", display_h);
  return ret;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  yield();
  int x = (offset ) % (display_w);
  int y = (offset ) / (display_w) ;
  if(offset + len > display_w * display_h){
    len = display_w * display_h - offset;
  }
  int actual_w = (len - 1) % display_w + 1;
  int actual_h = (len - 1) / display_w + 1;
  void *write_buf = (void*)buf;
  // printf("x: %d, y:%d, w:%d, h:%d, offset:%d\n", x, y, actual_w, actual_h, offset);
  //printf("pix is %s\n", (char*)buf);
  io_write(AM_GPU_FBDRAW, x, y, write_buf, actual_w, actual_h, true);
  return len;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
