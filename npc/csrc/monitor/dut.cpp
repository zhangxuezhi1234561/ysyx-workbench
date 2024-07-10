#include "host.h"
#include "common.h"
#include "dut.h"
#include "dlfcn.h"

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;

extern cpu_state cpu;
static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;
uint32_t    ref_r[33];

void ref_reg_display(uint32_t *ref) {
    for(int i = 0; i < 33; i++) {
        printf("------NO[%d]: 0x%x\n", i, *(ref + i));
    }
}


void difftest_skip_ref() {
    is_skip_ref = true;
    skip_dut_nr_inst = 0;
}

void difftest_skip_dut(int nr_ref, int nr_dut) {
    printf("difftest_skip_dut\n");
    skip_dut_nr_inst += nr_dut;
    while(nr_ref-- > 0) {
        ref_difftest_exec(1);
    }
}

void init_difftest(char *ref_so_file, long img_size, int port) {
    assert(ref_so_file != NULL);
    void *handle;
    handle = dlopen(ref_so_file, RTLD_LAZY);
    assert(handle);

    ref_difftest_memcpy = (void (*)(paddr_t, void*, size_t, bool)) dlsym(handle, "difftest_memcpy");
    assert(ref_difftest_memcpy);

    ref_difftest_regcpy = (void (*)(void*, bool))dlsym(handle, "difftest_regcpy");
    assert(ref_difftest_regcpy);

    ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
    assert(ref_difftest_exec);

    void (*ref_difftest_init)(int) = (void (*)(int))dlsym(handle, "difftest_init");
    assert(ref_difftest_init);

    Log("Difftest: %s", "ON");//ASNI_FMT("ON", ANSI_FG_GREEN));

    ref_difftest_init(port);
    ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR),img_size, DIFFTEST_TO_REF);

    *(cpu.gpr_pc + 32) = RESET_VECTOR;
    // ref_reg_display(cpu.gpr_pc);
    ref_difftest_regcpy(cpu.gpr_pc, DIFFTEST_TO_REF);
    
}


bool isa_difftest_checkregs(uint32_t *ref_r, vaddr_t pc) {
    for(int i = 0; i < 33; i++) {
        if(*(ref_r + i) != *(cpu.gpr_pc + i)) {
            if(i == 32) {
                printf("pc is wrong\nright:0x%x\nwrong:0x%x", *(ref_r + i), *(cpu.gpr_pc + i));
            }
            else {
                printf("NO[%d]:gpr is wrong\nright:0x%x\nwrong:0x%x\n", i, *(ref_r + i), *(cpu.gpr_pc + i));
            }
            // ref_reg_display(ref_r);
            return false;
        }  
    }
    return true;
}

void checkregs(uint32_t *ref, vaddr_t pc) {
    if(!isa_difftest_checkregs(ref, pc)) {
        isa_reg_display();
        printf("--------ref regs-------\n");
        ref_reg_display(ref);
        assert(0);
    }
}