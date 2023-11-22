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

#include <common.h>
#include <utils.h>
#include <stdlib.h>
#include <string.h>
#include <cpu/cpu.h>
#include <cpu/decode.h>



extern uint64_t g_nr_guest_inst;
FILE *log_fp = NULL;

RingBuffer *ringbuffer;

// ---------- ftrace -----------
#ifdef CONFIG_FTRACE
Elf32_Sym *Symbol = NULL;
Elf32_Shdr *shdr = NULL;
char *strtab = NULL;
int fun_state = 0;
int Sym_num = 0;
static int space_num = 0;
static int ret_space_num = 0;
#endif
vaddr_t ftrace_pc;

void init_log(const char *log_file) {
  log_fp = stdout;
  ringbuffer = RringBuffer_creat(ItraceLength);
  if (log_file != NULL) {
    FILE *fp = fopen(log_file, "w");
    Assert(fp, "Can not open '%s'", log_file);
    log_fp = fp;
  }
  Log("Log is written to %s", log_file ? log_file : "stdout");
}

bool log_enable() {
  return MUXDEF(CONFIG_TRACE, (g_nr_guest_inst >= CONFIG_TRACE_START) &&
         (g_nr_guest_inst <= CONFIG_TRACE_END), false);
}

RingBuffer *RringBuffer_creat(int length){
  RingBuffer *buffer = calloc(1, sizeof(RingBuffer));
  buffer->length = length;
  buffer->start  = 0;
  buffer->end    = 0;
  buffer->buffer = calloc((buffer->length), sizeof(char*));
  for(int i = 0;i < length; i++){
    buffer->buffer[i] = calloc(128, sizeof(char));
  }

  return buffer;
}

void RingBuffer_destroy(RingBuffer *buffer){
  if(buffer){
    for(int i = 0;i < ItraceLength; i++){
      free(buffer->buffer[i]);
    }
    free(buffer->buffer);
    free(buffer);
  }
  return;
}

int RingBuffer_write(RingBuffer *buffer, char *data, int length){
  if(RingBuffer_available_data(buffer) == 0) {
    buffer->start = buffer->end = 0;
  }
  memcpy(RingBuffer_ends_at(buffer), data, length);
  RingBuffer_commit_write(buffer, 1);//one by one

  return length;
}

int RingBuffer_read(RingBuffer *buffer, int amount){
  //char *target = malloc(sizeof(char*));
  //int len = 0;
 // char *s = "dataghjg";
  printf("\n");
  while(amount--){
    char *s = RingBuffer_starts_at(buffer);
    //while(*s++ != '\0'){len++;}
    //memcpy(target, s, len-1);
    RingBuffer_commit_read(buffer, 1);
    if(ringbuffer->start == ringbuffer->end) { printf("--> %s\n", s);}
    else printf("    %s\n", s);

  //  if(buffer->end == buffer->start) { buffer->start = buffer->end = 0;}
  }
  /*
  memcpy(target, RingBuffer_starts_at(buffer), amount);
  RingBuffer_commit_read(buffer, amount);
  */
  //free(target);
  return amount;
}

// -----------------ftrace -----------------

#ifdef CONFIG_FTRACE

int is_elf(Elf32_Ehdr elf_ehdr){
  if((strncmp((char *)elf_ehdr.e_ident, ELFMAG, SELFMAG)) != 0)
    return 0;
  else 
    return 1;
}

void init_elf(const char *elf_file){
  int shnum;
  int temp;
  FILE *fp = fopen(elf_file, "r");
  if(fp == NULL) assert(0);

  Elf32_Ehdr elf_header;

  int readfile = fread(&elf_header, sizeof(Elf32_Ehdr), 1, fp);
  if(readfile == 0) assert(0);

  if(!is_elf(elf_header)) assert(0);

  // ---------

  shdr = (Elf32_Shdr*)malloc(sizeof(Elf32_Shdr) * elf_header.e_shnum);
  fseek(fp, elf_header.e_shoff, SEEK_SET);
  temp = fread(shdr, sizeof(Elf32_Shdr) * elf_header.e_shnum, 1, fp);
  if(temp == 0) assert(0);
  rewind(fp);

  fseek(fp, shdr[elf_header.e_shstrndx].sh_offset, SEEK_SET);    //strtab
  char shstrtab[shdr[elf_header.e_shstrndx].sh_size];
  temp = fread(shstrtab, shdr[elf_header.e_shstrndx].sh_size, 1, fp);
  if(temp == 0) assert(0);
  rewind(fp);


  

  for(shnum = 1; shnum < elf_header.e_shnum; shnum++) {
    if(!strcmp(shstrtab + shdr[shnum].sh_name, ".strtab"))
    {
      strtab = (char *)malloc(sizeof(char) * shdr[shnum].sh_size);
      if(strtab == NULL) assert(0);
      fseek(fp, shdr[shnum].sh_offset, SEEK_SET);
      temp = fread(strtab, shdr[shnum].sh_size, 1, fp);
      if(temp == 0) assert(0);
      rewind(fp);
    }

    if(shdr[shnum].sh_type == 2){
      Sym_num = shdr[shnum].sh_size / sizeof(Elf32_Sym);
      Symbol = (Elf32_Sym*)malloc(sizeof(char) * shdr[shnum].sh_size);
      
      fseek(fp, shdr[shnum].sh_offset, SEEK_SET);
      temp = fread(Symbol, shdr[shnum].sh_size, 1, fp);
      if(temp == 0) assert(0);
      rewind(fp);
    }
  }

  return;

}

char *fun_pcparse(vaddr_t pc){
  char *funstr = NULL;
  for(int i = 1;i < Sym_num; i++){
    if(pc >= Symbol[i].st_value && pc < Symbol[i].st_value + Symbol[i].st_size ){
      funstr = strtab + Symbol[i].st_name;
    }
  }
  assert(funstr != NULL);
  return funstr;
}

#endif

void ftrace_display(){

  #ifdef CONFIG_FTRACE

  if(fun_state != 0){
    log_write("0x%x:", ftrace_pc);
    if(fun_state == CALL) {
      space_num = space_num >= 0 ? space_num : 0;
      int temp_num = space_num;
      while(temp_num > 0){log_write("\t"); temp_num--;}
      space_num++;
      ret_space_num = space_num - 1;
      log_write("call [%s@0x%x]\n", fun_pcparse(cpu.pc),cpu.pc);
    }    
    if(fun_state == RET) {
      ret_space_num = ret_space_num >= 0 ? ret_space_num : 0;
      int ret_temp_num = ret_space_num;
      while(ret_temp_num > 0){log_write("\t"); ret_temp_num--;}
      ret_space_num--;
      space_num = ret_space_num + 1;
      log_write("ret [%s]\n", fun_pcparse(cpu.pc));
    }
    fun_state = 0;
  }
  #endif
}
