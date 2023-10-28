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
#include "monitor/sdb/sdb.h"
#include <stdio.h>

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();

int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif
/*
  char filename[] = "/home/pro/ysyx/ysyx-workbench/nemu/tools/gen-expr/input";
  FILE *fp;
  char *temp_p;
  char StrLine[1024];
  char ff[1024];
  int i = 0;
  bool *success = (bool *)malloc(sizeof(bool));
  if((fp = fopen(filename, "r")) == NULL)
  {
    return -1;
  }
  while(!feof(fp))
  {
    temp_p = fgets(StrLine,1024,fp);
    if(temp_p == NULL){}
    char *str_e = StrLine + strlen(StrLine);
    char *ss = strtok(StrLine, " ");
    if(ss == NULL) {continue;}
    char *ags = ss + strlen(ss) + 1;
    if(ags >= str_e){ags = NULL;}
    for(i = 0;i < strlen(ags)-1;i++){
      ff[i] = ags[i];
    }
    ff[i] = '\0';
    printf("%d\n",expr(ff,success));
  }
*/
  
  /* Start engine. */
 engine_start();
 return is_exit_status_bad();
}
