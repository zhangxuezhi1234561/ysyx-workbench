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

#ifndef __SDB_H__
#define __SDB_H__

#include <common.h>

typedef struct watchpoint {
	int NO;
	struct watchpoint *next;
	
	/* TODO: Add more members if necessary */
	struct watchpoint *first;
	struct watchpoint *last;
	int state;//0-Unused;1-Used
	char what[20];
	int value;
} WP;
word_t expr(char *e, bool *success);
void free_wp(int num);
WP* new_wp();
void wp_scan();
void info_wp();
void wp_destroy();
#define LIST_FOREACH(L,S,M,V) WP *_node = NULL; \
	WP *V = NULL; \
	for(V = _node = L->S; _node != NULL; V = _node = _node->M)

#endif
