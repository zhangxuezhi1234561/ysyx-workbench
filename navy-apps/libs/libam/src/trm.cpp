#include <am.h>
#include <stdlib.h>
#include <stdio.h>
// #include <nemu.h>

Area heap;

void putch(char ch) {
    putchar(ch);
    // outb(SERIAL_PORT, ch);
}

void halt(int code) {
    exit(code);

    // should not reach here
    while (1);
}
