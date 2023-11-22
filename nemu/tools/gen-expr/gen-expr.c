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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>


#pragma GCC push_options
#pragma GCC optimize(0)
// this should be enough
static char buf[65536] = {};
static int k = 0;
//static char op[] = "+-*/";
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"#include <signal.h>\n"
"#include <setjmp.h>\n"
"#pragma GCC diagnostic push\n"
"#pragma GCC diagnostic ignored \"-Wdiv-by-zero\"\n"

"int flag;"
"void my_handler(int param){"
"   signal(SIGFPE,my_handler);"
"	flag = -1;"
"  	printf(\"%%d\", flag);"

"}"
"int main() { "
"  signal(SIGFPE,my_handler); "
"  unsigned result = %s; "
"  if(flag != -1){"
"     printf(\"%%u\", result); "
"  }"

"  return 0; "
"}\n"
"#pragma GCC diagnostic pop";


static int k;
int choose(int num)
{
//	srand(time(NULL));
	return rand()%num;
}

void gen_num() {
	buf[k++] = rand()%9 + 1 + '0';
	return;
}

void gen(char c) {
	buf[k++] = c;
	return;
}

void gen_rand_op() {
	int i = 0;
	char a[]="+-*/"; 	
// //	srand(time(NULL));
	i = rand()%4;
	buf[k++] = a[i];
	return;
}

int gen_num(char *str)
{
//	srand(time(NULL));
	int j = 0;
	int zero_judge = 0;
	j = strlen(str);
	if(str[strlen(str)-1] == '/')
		zero_judge = 1;
	while(str[j-1] == '(')//有问题！
	{
		if(str[j-1] == '/')
		{
			zero_judge = 1;
			break;
		}
		j--;
	}
	int i = 0;
	i = rand()%10;
	if(i == 0 && strlen(str) != 0 && zero_judge)
		return gen_num(str);
	else
		return rand()%10;
}


char gen_rand_op()
{
	int i = 0;
	char a[]="+-*/";
	
//	srand(time(NULL));
	i = rand()%4;
	return a[i];
}

int choose(int num)
{
//	srand(time(NULL));
	return rand()%num;
}
char gen(char c, char *str)
{
	if(strlen(str) == 0 || (c == '(' && (str[strlen(str)-1] == '+' || str[strlen(str)-1] == '-' || str[strlen(str)-1] == '*' || str[strlen(str)-1] == '/' || str[strlen(str)-1] == '(')))
	{
		return c;
	}
	else if(c == '(')
	{
		return gen_rand_op();
	}
	else
	{
		return c;
	}
}

static void gen_rand_expr() {
	case 0: gen_num(); break;
	case 1: gen('('); gen_rand_expr(); gen(')'); break;
	default: 
			gen_rand_expr(); 
			gen_rand_op(); 
			gen_rand_expr(); 	
		break;
  }
  return;
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    gen_rand_expr();
	buf[k] = '\0';
    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    ret = fscanf(fp, "%d", &result);
    pclose(fp);
	if(result == -1)
	{
		//printf("!!!!!!\n");
	}
	else {
		printf("%u %s\n", result, buf);
	} 
	buf[0] = '\0';
	k = 0;
  }
  return 0;
}
