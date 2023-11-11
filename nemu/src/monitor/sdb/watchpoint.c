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

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);

	wp_pool[i].state = 0;
  }

	head = (WP*)calloc(1, sizeof(WP));
  	free_ = wp_pool;
	free_->first = &free_[0];
	free_->last	 = &free_[NR_WP-1];
}

/* TODO: Implement the functionality of watchpoint */
#pragma GCC push_options
#pragma GCC optimize(0)
WP* new_wp(char* args)
{
//	int j = 0;
	bool *success = (bool *)malloc(sizeof(bool));
	free_->first->state = 1;
	WP* cur = calloc(1, sizeof(WP));
	//WP* cur = free_->first;
	cur->NO = free_->first->NO;

	free_->first = free_->first->next;	

	strcpy(cur->what, args);
	cur->value = expr(cur->what, success);
	if(head->first == NULL){head->first = cur; head->last = cur;}
	else{
		head->last->next = cur;
		head->last = cur;
	}
	free(success);
	return cur;
}

void free_wp(int num)//WP *wp
{
	LIST_FOREACH(head, first, next, cur){
		if(cur->NO == num){
			head->first = cur->next;
			cur->next = NULL;
			
			free_->last->next = cur;
			free_->last		  = cur;
			break;
		}
		else if(cur->next->NO == num){
			if(cur->next->next == NULL){head->last = cur;}
			free_->last->next = cur->next;
			free_->last		  = cur->next;

			cur->next = cur->next->next;
			break;
		}
	}
	return;
}

void info_wp()
{
	Log("Num       Type          Disp     Enb      Address    What            Value       		HexValue");
	LIST_FOREACH(head, first, next, cur){
		Log("%2d        watchpoint    keep                         %-9s       %-4d			0x%-4x",cur->NO,(cur->what),cur->value,cur->value);
	}
}
void wp_destroy()
{
	free(head);
}
void wp_scan()
{
	bool *success = (bool *)malloc(sizeof(bool));
	LIST_FOREACH(head, first, next, cur){
		if(expr(cur->what, success) != cur->value){
			cur->value = expr(cur->what, success);
			nemu_state.state = NEMU_STOP;
			break;
		}		
	}
	free(success);
}

#pragma GCC pop_options
