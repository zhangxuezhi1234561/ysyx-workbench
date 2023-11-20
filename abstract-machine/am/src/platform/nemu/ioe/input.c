#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  int temp = inl(KBD_ADDR);
  kbd->keycode = temp & 0xff;
  //printf("%d\n", kbd->keycode);
  kbd->keydown = (temp & KEYDOWN_MASK) != KEYDOWN_MASK ? false : true;
}
