#include <am.h>
#include <nemu.h>

uint64_t boot_time = 0;
uint32_t boot_time_hi;
uint32_t boot_time_lo;

void __am_timer_init() {
  uint32_t boot_time_hi = inl(RTC_ADDR + 4);
  uint32_t boot_time_lo = inl(RTC_ADDR);
  boot_time = (uint64_t)boot_time_hi << 32 | boot_time_lo;
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {  //sub the boot_time
  uint32_t hi = inl(RTC_ADDR + 4) - boot_time_hi;
  uint32_t lo = inl(RTC_ADDR) - boot_time_lo;
  int time_now = (uint64_t)hi << 32 | lo;
  uptime->us = time_now; 
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
