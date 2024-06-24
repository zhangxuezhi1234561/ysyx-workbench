#include <verilated.h>
#include <stdio.h>
#include <memory>
#include "Vcore.h"
#include "macro.h"
#include "Vcore__Dpi.h"
#include "verilated_dpi.h"

#include "host.h"
#include "dut.h"


using namespace std;

vluint64_t sim_time = 0;

uint32_t    halt_pc;

void npc_stop(int a, int b) {      // using at exu_excp.v 
    isa_reg_display();
    Log("npc: %s at pc =" FMT_WORD,
        (b == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
        ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))   ,
        halt_pc
    );
    if(a)    assert(0);
    return;
}


// cpu_state *cpu = (cpu_state*)malloc(50 * sizeof(uint32_t));
cpu_state cpu;

extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
    cpu.gpr_pc = (uint32_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6","pc"
};

void isa_reg_display() {
    printf("**************registers*************\n");
    for(int i = 0; i <= 32; i++) {
        printf("    No:%d %s: 0x%08x\n", i, regs[i], *(cpu.gpr_pc + i));
    }
}

double sc_time_stamp() {
    return sim_time;
}


void init_monitor(int, char *[]);


int main(int argc, char** argv) {
    cpu.gpr_pc = (uint32_t*)malloc(40 * sizeof(uint32_t));

    // Create logs/ directory in case we have traces to put under it
    Verilated::mkdir("logs");   

    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

    contextp->debug(0);             // Set debug level
    contextp->randReset(2);         // Randomization reset policy
    contextp->traceEverOn(true);    // Verilator must compute traced signals
    contextp->commandArgs(argc, argv);   // Pass arguments

    const std::unique_ptr<Vcore> top{new Vcore{contextp.get(), "TOP"}};
    //const std::unique_ptr<Vcore_ifu_ifetch> submodule{new Vcore_ifu_ifetch{contextp.get(), "SubModule"}};

    // Set Vtop's input signals
    // init_isa();
    init_monitor(argc, argv);    
    *(cpu.gpr_pc + 32)  =   RESET_VECTOR;    
    // isa_reg_display();
    // ref_reg_display(cpu.gpr_pc);
    int count = 300;
    top->clk            =   0;
    top->rst            =   !0;

    top->pc_rtvec       =   RESET_VECTOR;

    //********************************//
 
    //********************************//

    top->ifu_req_ready  =   1;

    top->ifu_rsp_valid  =   1;

    bool instr_flag = false;
    uint32_t rsp_instr;

    bool difftest_init_flag = false;

    while(!contextp->gotFinish() && count--) {
        if(sim_time % 5 == 0) {
            top->clk    =   !top->clk;  
        }
        if((sim_time % 10 == 2 || sim_time % 10 == 3) && contextp->time() > 56) {
            printf("___________________\n"); 
            if(!difftest_init_flag) {
                init_difftest(diff_so_file, img_size, difftest_port);   
                difftest_init_flag = true;
            }
            if(top->ifu_req_valid && instr_flag && sim_time % 10 == 2) {
                top->ifu_rsp_instr  = rsp_instr;
                top->ifu_rsp_valid  =   1;
                top->ifu_req_ready  =   1;

                // ref_difftest_regcpy(ref_r, DIFFTEST_TO_DUT);
                // ref_difftest_exec(1);
                // checkregs(ref_r, top->inspect_pc);
            }
            if(top->ifu_req_valid && sim_time % 10 == 3 && contextp->time() > 56) {
                VL_PRINTF("ifu_req_pc=0x%x\n", top->ifu_req_pc);
                rsp_instr = pmem_read(top->ifu_req_pc, 4);
                top->ifu_req_ready  =   1;
                instr_flag = true;
            }
            printf("___________________\n");       
        }
        if(!top->clk) {
            if(contextp->time() > 1 && contextp->time() < 50) {
                top->rst = 0;
            } else {
                top->rst = 1;
            }
        }

        halt_pc     = top->inspect_pc;
        sim_time++;
        top->eval();
    }
    // Final model cleanup
    top->final();

#if VM_COVERAGE
    Verilated::mkdir("logs");
    contextp->coveragep()->write("logs/coverage.dat");
#endif
    return 0;
}