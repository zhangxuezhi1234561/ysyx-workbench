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
#include "local-include/reg.h"
#include "stdio.h"
#include "string.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
	for(int i = 0;i < NR_GPR;i++)
	{
		printf("%-3s:0x%8x    %d\n",regs[i],gpr(i),gpr(i));
	}
	printf("mcause: 0x%x, mstatus: 0x%x, mepc: 0x%x, mtvec: 0x%x, msratch: 0x%x, satp: 0x%x\n", 
	cpu.mcause, cpu.mstatus, cpu.mepc, cpu.mtvec, cpu.mscratch, cpu.satp);
}

word_t isa_reg_str2val(const char *s, bool *success) {
	int reg_id = 0;
	for(int i = 0;i < NR_GPR;i++)
	{
		if(strcmp(s, regs[i]) == 0)
		{
			reg_id = i;
			break;
		}
	}
	return gpr(reg_id);
}

word_t *csr(int src){
	word_t* ret = NULL;
	switch(src){
		case MCAUSE:	ret = &cpu.mcause; break;
		case MSTATUS:	ret = &cpu.mstatus; break;
		case MEPC:		ret = &cpu.mepc;		break;
		case MTVEC:		ret = &cpu.mtvec;	break;
		case MSCRATCH:  ret = &cpu.mscratch; break;
		case SATP:		ret = &cpu.satp; break;
		default: assert(0);
	}
	return ret;
}

void save_regs(FILE *fp) {
	if(fwrite(&cpu, sizeof(cpu), 1, fp) == 0) {
		panic("Reg fail write");
	}
	return;
}

void load_regs(FILE *fp) {
	if(fread(&cpu, sizeof(cpu), 1, fp) == 0){
		panic("Reg fail load");
	}
	return;
}