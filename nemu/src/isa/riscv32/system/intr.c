/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRA NTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  // printf("raise intr is 0x%x\n", NO);
  cpu.mepc = epc;
  cpu.mcause = NO;
  // cpu.mstatus |= MSTATUS_MPP_BITS;
  cpu.mstatus |= (cpu.mstatus & MSTATUS_MIE_BITS) << 4;
  cpu.mstatus &= ~MSTATUS_MIE_BITS;
  return cpu.mtvec;
}

word_t isa_ret_intr() {
  // cpu.mstatus &= ~MSTATUS_MPP_BITS;
  cpu.mstatus |= (cpu.mstatus & MSTATUS_MPIE_BITS) >> 4;
  cpu.mstatus |= MSTATUS_MPIE_BITS;
  return cpu.mepc;
}

word_t isa_query_intr() {
  if(cpu.INTR && (cpu.mstatus & MSTATUS_MIE_BITS)) {
    cpu.INTR = false;
    return IRQ_TIMER;
  }
  return INTR_EMPTY;
}
