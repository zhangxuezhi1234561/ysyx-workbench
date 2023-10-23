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

#include "sdb.h"

#define NR_WP 32

static WP wp_pool[NR_WP] = {};
static WP *free_ = NULL;
WP *head = NULL;

static int head_num = 0;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);

		//------------------//
		wp_pool[i].state = 0;
  }

	head = (WP*)malloc(sizeof(WP) * NR_WP);
  free_ = wp_pool;
	head[0].next = NULL;
}

/* TODO: Implement the functionality of watchpoint */
#pragma GCC push_options
#pragma GCC optimize(0)
WP* new_wp(char* args)
{
	int i = 0;
	int j = 0;
	head_num++;
	bool *success = (bool *)malloc(sizeof(bool));
//	WP *node = calloc(1, sizeof(WP));
	for(i = NR_WP-1;i >= 0;i--)
	{
		if(free_[i].state == 0)
		{
			free_[i-1].next = NULL;
			free_[i].state = 1;
//			node->NO = free_[i].No;
//			node->state = free_[i].state;
/*
			while(head[j].next != NULL)
			{
				j++;
			}*/
		//	head[j].next = &free_[i];
			//head[j].state = 1;
			//head[j].NO = free_[i].NO;
			head[head_num-1].NO = free_[i].NO;
			head[head_num-1].state = 1;
			head[head_num-1].next = &free_[i];
			for(j = 0;j < strlen(args);j++)
			{
				head[head_num-1].what[j] = args[j];
			}
			head[head_num-1].what[j] = '\0';
			head[head_num-1].value = expr(head[head_num-1].what,success);
			head[head_num].next = NULL;
			free(success);
		//	head_num++;
			break;
		}
	}
	return &free_[i];
}

void free_wp(WP *wp)
{
	int i = 0;
	head_num--;
	for(i = NR_WP-1;i >= 0;i--)
	{
		if(free_[i-1].state == 0)
		{
			free_[i-1].next = &free_[i];
			free_[i].state = 0;
		}
	}
	if(head_num > 1)
	{
		head[head_num-2].next = NULL;
		head[head_num-1].state = 0;
	}
	if(head_num == 1)
	{
		head = NULL;
	}
}

void info_wp()
{
	int i = 0;
	Log("Num       Type          Disp     Enb      Address    What            Value");
	while(head[i].next != NULL)
	{
		Log("%2d        watchpoint    keep                         %-8s       %-6d",head[i].NO,(head[i].what),head[i].value);
		i++;
	}
}
void wp_destroy()
{
	free(head);
}
void wp_scan()
{
	int i = 0;
	bool *success = (bool *)malloc(sizeof(bool));
//	Log("Now in watchpoint.c wp_scan function\n");
//	Log("The value is %d\n",expr(head[0].what,success));
	while(head[i].next != NULL)
	{
		if(expr(head[i].what,success) != head[i].value)
		{
			head[i].value = expr(head[i].what,success);
			nemu_state.state = NEMU_STOP;
		}
		i++;
	}
	free(success);
}

#pragma GCC pop_options
