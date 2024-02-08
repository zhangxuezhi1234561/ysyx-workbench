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
#include <memory/vaddr.h>
#include <memory/paddr.h>

int isa_mmu_check(vaddr_t vaddr, int len, int type) {
  if(cpu.satp & ((uintptr_t)1 << 31)) {
    return MMU_TRANSLATE;
  }
    return MMU_DIRECT;
}

static inline uintptr_t get_pa(paddr_t pte) {
  return (pte >> PAGE_PFN_SHIFT) << NORMAL_PAGE_SHIFT;
}

paddr_t isa_mmu_translate(vaddr_t vaddr, int len, int type) {

  paddr_t vpn[] = {
    ((paddr_t)vaddr >> 12) & ((1 << 9) - 1),
    ((paddr_t)vaddr >> 21) & ((1 << 9) - 1),
    ((paddr_t)vaddr >> 30) & ((1 << 9) - 1)
  };
  uintptr_t temp = (cpu.satp << 12);
  paddr_t* ptr = (paddr_t*)temp;

  paddr_t *first_page = ptr;
  // printf("satp: 0x%lx\n", (uintptr_t)ptr);
  // assert(0);
  paddr_t entry = paddr_read((uintptr_t)first_page + (vpn[2] << 2), 4);
  paddr_t *second_page = (paddr_t*)get_pa(entry);
  entry = paddr_read((uintptr_t)second_page + (vpn[1] << 2), 4);
  paddr_t *third_page = (paddr_t*)get_pa(entry);
  entry = paddr_read((uintptr_t)third_page + (vpn[0] << 2), 4);
  assert(entry & (uintptr_t)1);
  paddr_t ret = get_pa(entry) | (vaddr & (((paddr_t)1 << 12) - 1));
  // printf("satp: 0x%lx\n", (uintptr_t)ret);
  return ret;
  // return MEM_RET_FAIL;
}
