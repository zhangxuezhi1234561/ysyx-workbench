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
static WP *head = NULL, *free_ = NULL;

static int head_num = 0;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);

		//------------------//
		wp_pool[i].state = 0;
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

WP* new_wp()
{
	int i = 0;
	int j = 0;
//	WP *node = calloc(1, sizeof(WP));
	for(i = NR_WP-1;i >= 0;i--)
	{
		if(free_[i].state == 0)
		{
			free_[i-1].next = NULL;
			free_[i].state = 1;
//			node->NO = free_[i].No;
//			node->state = free_[i].state;
			while(head[j].next != NULL)
			{
				j++;
			}
		//	head[j].next = &free_[i];
			//head[j].state = 1;
			//head[j].NO = free_[i].NO;
			head[head_num].NO = free_[i].NO;
			head[head_num].state = 1;
			head[head_num].next = &free_[i];
			head_num++;
		}
	}
	return &free_[i];
}

void free_wp(WP *wp)
{
	int i = 0;
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
	}
	if(head_num == 1)
	{
		head = NULL;
	}
}
