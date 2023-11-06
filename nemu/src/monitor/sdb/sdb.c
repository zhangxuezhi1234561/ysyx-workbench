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

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <stdio.h>
#include <memory/paddr.h>

static int is_batch_mode = false;
static word_t old_value;
static char* old_args;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
	wp_destroy();
	nemu_state.state = NEMU_QUIT;
  return -1;
}

static int cmd_w(char *args) {
//	Log("Now in cmd_w() function\n");
	/*
	*/
	bool *success =(bool *)malloc(sizeof(bool));
	*success = false;
	old_args = args;
	new_wp(args);
//	info_wp();
	old_value = expr(args,success);
	free(success);
	return 0;
}

static int cmd_p(char *args) {	
	bool *success =(bool *)malloc(sizeof(bool));
	*success = false;
//	Log("%d\n",expr(args,success));
	printf("%d    0x%x\n",expr(args,success),expr(args,success));
	free(success);
	return 0;
}

static int cmd_si(char *args) {
	int n = 0;
	if(args == NULL)
	{
		n = 1;
	}
	else
		sscanf(args,"%d",&n);
	cpu_exec(n);
	return 0;
}

static int cmd_info(char *args) {
	if(strcmp(args,"r") == 0)
	{
		isa_reg_display();
	}
	else if(strcmp(args,"wp") == 0)
	{
		info_wp();
	}
	else {
		printf("Unknow command %s\n",args);
	}
	return 0;
}

static int cmd_x(char *args) {
	int num = 0;
	int address = 0;
	char *num_char = NULL;
	char *address_char = NULL;
	num_char = strtok(NULL," ");
	address_char = strtok(NULL," ");
	sscanf(num_char,"%d",&num);
	sscanf(address_char,"%x",&address);
	for(int i = 0;i < num;i++)
	{
		printf("0x%x:%x\n",address+i*4,paddr_read(address+i*4, 4));
	}
	return 0;
}

static int cmd_d(char *args) {
  int num = 0;
  sscanf(args, "%d", &num);
  free_wp(num);
  return 0;
}
static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },

  /* TODO: Add more commands */
	{"w","Set Watchpoint", cmd_w},
	{"si","Step Execute",cmd_si},
	{"info","Print Information",cmd_info},
	{"x","Scan Memory",cmd_x},
	{"p","Print Expression Value",cmd_p},
  {"d","Delete Watchpoint",cmd_d},
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
