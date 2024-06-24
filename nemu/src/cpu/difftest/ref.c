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
#include <difftest-def.h>
#include <memory/paddr.h>

__EXPORT void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  if(direction == DIFFTEST_TO_REF) {
    uint8_t *buf_temp = (uint8_t *) buf;
    for(int i = 0; i < n; i++) {
      paddr_write(addr, 1, *(buf_temp + i));
      addr++;
    }
  } else {
    assert(0);
  }  
}

__EXPORT void difftest_regcpy(void *dut, bool direction) {    //include pc copy
  uint32_t *dut_temp = (uint32_t *)dut;
  if(direction == DIFFTEST_TO_REF) {
    for(int i = 0; i < 32; i++) {
      cpu.gpr[i] = *(dut_temp + i);
    }
    cpu.pc = *(dut_temp + 32);
  } else {
    // assert(0);
    for(int i = 0; i < 32; i++) {
      *(dut_temp + i) = cpu.gpr[i];
    }
    *(dut_temp + 32) = cpu.pc;
  }
}

__EXPORT void difftest_exec(uint64_t n) {
  cpu_exec(n);
  // assert(0);
}

__EXPORT void difftest_raise_intr(word_t NO) {
  assert(0);
}

__EXPORT void difftest_init(int port) {
  void init_mem();
  init_mem();
  /* Perform ISA dependent initialization. */
  init_isa();
}
