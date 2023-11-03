/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#ifndef __UTILS_H__
#define __UTILS_H__

#include <common.h>
#include <elf.h>

// ----------- state -----------

enum { NEMU_RUNNING, NEMU_STOP, NEMU_END, NEMU_ABORT, NEMU_QUIT };

typedef struct {
  int state;
  vaddr_t halt_pc;
  uint32_t halt_ret;
} NEMUState;

extern NEMUState nemu_state;

// ----------- timer -----------

uint64_t get_time();

// ----------- itrace -----------
#define ItraceLength 10

typedef struct{
  char **buffer;
  int length;
  int start;
  int end;
}RingBuffer;

extern RingBuffer *ringbuffer;

#define RingBuffer_available_data(B) (\
  (B)->end % (B)->length - (B)->start)

#define RingBuffer_ends_at(B) (\
  *((B)->buffer + (B)->end))

#define RingBuffer_commit_write(B,A) (\
  (B)->end = ((B)->end + (A)) % (B)->length)

#define RingBuffer_starts_at(B) (\
  *((B)->buffer + (B)->start))

#define RingBuffer_commit_read(B,A) (\
  (B)->start = ((B)->start + (A)) % (B)->length) 

RingBuffer *RringBuffer_creat(int length);
void RingBuffer_destroy(RingBuffer *buffer);
int RingBuffer_write(RingBuffer *buffer, char *data, int length);
int RingBuffer_read(RingBuffer *buffer, int amount);


// ----------- ftrace -------------
extern Elf32_Sym *Symbol;
extern Elf32_Shdr *shdr;
extern char *strtab;
void init_elf(const char *elf_file);
enum  {CALL=1, RET};
extern int fun_state;
char *fun_pcparse(vaddr_t pc);



// ----------- log -----------

#define ANSI_FG_BLACK   "\33[1;30m"
#define ANSI_FG_RED     "\33[1;31m"
#define ANSI_FG_GREEN   "\33[1;32m"
#define ANSI_FG_YELLOW  "\33[1;33m"
#define ANSI_FG_BLUE    "\33[1;34m"
#define ANSI_FG_MAGENTA "\33[1;35m"
#define ANSI_FG_CYAN    "\33[1;36m"
#define ANSI_FG_WHITE   "\33[1;37m"
#define ANSI_BG_BLACK   "\33[1;40m"
#define ANSI_BG_RED     "\33[1;41m"
#define ANSI_BG_GREEN   "\33[1;42m"
#define ANSI_BG_YELLOW  "\33[1;43m"
#define ANSI_BG_BLUE    "\33[1;44m"
#define ANSI_BG_MAGENTA "\33[1;35m"
#define ANSI_BG_CYAN    "\33[1;46m"
#define ANSI_BG_WHITE   "\33[1;47m"
#define ANSI_NONE       "\33[0m"

#define ANSI_FMT(str, fmt) fmt str ANSI_NONE

#define log_write(...) IFDEF(CONFIG_TARGET_NATIVE_ELF, \
  do { \
    extern FILE* log_fp; \
    extern bool log_enable(); \
    if (log_enable()) { \
      fprintf(log_fp, __VA_ARGS__); \
      fflush(log_fp); \
    } \
  } while (0) \
)

#define _Log(...) \
  do { \
    printf(__VA_ARGS__); \
    log_write(__VA_ARGS__); \
  } while (0)




#endif
