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
#include <time.h>
#include <regex.h>
/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */


enum {
  TK_NOTYPE = 256, TK_EQ,BRACKET_LEFT,BRACKET_RIGHT,INTEGER,HEX,DOLLAR,

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
	{"\\*", '*'},					// times
	{"-",'-'},						// subtractS
	{"\\/",'/'},					// divide
  {"\\+", '+'},         // plus
	{"\\(",BRACKET_LEFT},// bracket
	{"\\)",BRACKET_RIGHT},
	{"[0-9]+",INTEGER},
  {"==", TK_EQ},        // equal
	{"0x[a-f0-9]+",HEX},	//HEX
	{"\\$[0-9\\w]+",DOLLAR}, //DOLLAR
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
					case TK_NOTYPE: tokens[nr_token].type = TK_NOTYPE ; memcpy(tokens[nr_token].str,substr_start,substr_len); nr_token++; break;
					case '+'			: tokens[nr_token].type = '+'				; memcpy(tokens[nr_token].str,substr_start,substr_len); nr_token++; break;
					case '-'			: tokens[nr_token].type = '-'				; memcpy(tokens[nr_token].str,substr_start,substr_len); nr_token++; break;
					case '*'			: tokens[nr_token].type = '*'				; memcpy(tokens[nr_token].str,substr_start,substr_len); nr_token++; break;
					case '/'			: tokens[nr_token].type = '/'				; memcpy(tokens[nr_token].str,substr_start,substr_len); nr_token++; break;
					case BRACKET_RIGHT	: tokens[nr_token].type = BRACKET_RIGHT		; memcpy(tokens[nr_token].str,substr_start,substr_len); nr_token++; break;
					case BRACKET_LEFT		: tokens[nr_token].type = BRACKET_LEFT		; memcpy(tokens[nr_token].str,substr_start,substr_len); nr_token++; break;
					case INTEGER				: tokens[nr_token].type = INTEGER					; memcpy(tokens[nr_token].str,substr_start,substr_len); nr_token++; break;
					case HEX						:	tokens[nr_token].type = HEX							;	memcpy(tokens[nr_token].str,substr_start,substr_len); nr_token++; break;
					case DOLLAR					:	tokens[nr_token].type = DOLLAR					;	memcpy(tokens[nr_token].str,substr_start,substr_len); nr_token++; break;
					case TK_EQ					:	tokens[nr_token].type = TK_EQ						;	memcpy(tokens[nr_token].str,substr_start,substr_len); nr_token++; break;


          default: TODO(); break;
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

//Define The check_parentheses Function
//Note: e NOT Define!!!!!!!
bool check_parentheses(int p, int q)//Needed First and End Test
{
//	make_token();//Needed?
	int i = 0;
  int nr_bracket = 0;
	bool bracket_matched = false;
	for(i = 0; i < q; i++)
	{
		if(tokens[i].type == BRACKET_RIGHT)
		{
			nr_bracket++;
		}
		else if(tokens[i].type == BRACKET_LEFT)
		{
			nr_bracket--;
		}
		if(nr_bracket < 0)
		{
			return false;
		}
		else
		{
			continue;
		}
	}
	if(nr_bracket != 0)
	{
		bracket_matched = false;
//		return false;
	}
	else
		bracket_matched = true;
	if(bracket_matched == true && tokens[0].type == BRACKET_LEFT && tokens[q].type == BRACKET_RIGHT)
	{
		return true;
	}
	else
		return false;
	//	return true;

/*
	if(e+p == BRACKET_LEFT && e+q == BRACKET_RIGHT)
	{
		return true;
	}
	else
	{
		return false;
	}
*/
}

int eval(int p, int q)
{
	int num = 0;
	bool *success = NULL;
	word_t reg_value = 0;
	//Indicate Position p,q  eval(p,q)
	if(p > q)
	{
		/* Bad expression */
		return 0;
	}
	else if(p == q)
	{
		switch(tokens[p].type)
		{
			case INTEGER: sscanf(tokens[p].str,"%d",&num);break;
			case HEX		: sscanf(tokens[p].str,"%x",&num);break;
			case DOLLAR	: 
				reg_value = isa_reg_str2val(tokens[p].str+1, success);
				num = reg_value;
				break;										
		}
		sscanf(tokens[p].str,"%d",&num);
		return num;
		/* Return the single number */
	}
	else if(check_parentheses(p,q) == true)
	{
		
		return eval(p+1, q-1);
	}
	else
	{
		int i = 0;
		int op = 0;
//		int temp_op = 0;
		int main_token = 0;
		int temp_token = 0;
		int token_map = 0;
		int token_map_last = 0;
		bool flag_test = true;

		int val1;
		int val2;
		for(i = p; i <= q; i++)
		{
			//temp_token_last = temp_token;
			token_map_last = token_map;
			switch(tokens[i].type)
			{
				case '+': temp_token = '+'; token_map = 2;break;
				case '-': temp_token = '-'; token_map = 2;break;
				case '*': temp_token = '*'; token_map = 1;break;
				case '/': temp_token = '/'; token_map = 1;break;
				case BRACKET_LEFT: flag_test = false; break;
				case BRACKET_RIGHT:	flag_test = true;	break;
				default: token_map = 0; break;
			}
			if(token_map >=  token_map_last && flag_test == true)//忽略了两边都有括号的情况？
			{
				main_token = temp_token;
				op				 = i;
			}
			else
			{
				continue;
				//main_token = temp_token_last;
				
			}
		}
		val1 = eval(p, op-1);
		val2 = eval(op+1, q);

		switch(main_token)
		{
			case '+': return val1 + val2; break;
			case '-': return val1 - val2; break;
			case '*': return val1 * val2; break;
			case '/': return val1 / val2; break;
			default : assert(0);
		}
	}

}



word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
//	int len = strlen(e);
	word_t value;
	value = eval(0,nr_token-1);


  /* TODO: Insert codes to evaluate the expression. */
  TODO();
	
	//Indicate Position p,q  eval(p,q)


	

  return value;
}

