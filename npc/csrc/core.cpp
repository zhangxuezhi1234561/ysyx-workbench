#include <verilated.h>
#include <memory>
#include "Vcore.h"
#include "Vcore_core.h"
#include "host.h"
#include "macro.h"
#include "Vcore__Dpi.h"

using namespace std;

#define CONFIG_MSIZE    0x2000000       // 128M
#define CONFIG_MBASE    0x80000000
#define RESET_VECTOR    0x80000000

static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};

static const uint32_t img[] = {
    0x108093,       // 00000 00000 01 -- 00001 -- 000 -- 00001 -- 0010011
    0x208093,
    0x308093,
    0x100073
};

uint8_t* guest_to_host(uint32_t paddr) { return pmem + paddr - CONFIG_MBASE; }

static uint32_t pmem_read(uint32_t addr, int len) {
    uint32_t ret = host_read(guest_to_host(addr), len);
    return ret;
}

void init_isa() {
    memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));
    return;
}

void npc_stop(int a) {
    VL_PRINTF("!!!\n");    
    if(a)    assert(0);
    return;
}

int main(int argc, char** argv) {

    init_isa();

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
    int count = 30;
    top->clk            =   0;
    top->rst            =   !0;

    top->pc_rtvec       =   RESET_VECTOR;

    top->ifu_req_ready  =   1;

    top->ifu_rsp_valid  =   1;
    while(!contextp->gotFinish() && count--) {
    //while(count--) {


        contextp->timeInc(1);
        top->clk    =   !top->clk;
        if(top->clk) {
            if(top->ifu_req_valid) {
                VL_PRINTF("ifu_req_pc=0x%x\n", top->ifu_req_pc);
                top->ifu_rsp_instr  = pmem_read(top->ifu_req_pc, 4);
                //top->ifu_rsp_valid  =   1;
                //top->ifu_req_ready  =   0;
            } else {
                //top->ifu_rsp_valid  =   0;
                //top->ifu_rsp_valid  =   0;
                //top->ifu_req_ready  =   1;
            }
        }
        top->ifu_req_ready  =   1;
        top->ifu_rsp_valid  =   1;        

        
        if(!top->clk) {
            if(contextp->time() > 1 && contextp->time() < 10) {
                top->rst = 0;
            } else {
                top->rst = 1;
            }
        }

        //cout << "reset_flag_r: " << top->reset_flag_r << endl;

        // read outputs
        VL_PRINTF("[%" PRId64 "] clk=%x rst=%x  \
            ifu_req_pc=0x%x \
            ifu_rsp_instr=0x%x  \
            \n",   
            contextp->time(), top->clk, top->rst, 
            top->ifu_req_pc,
            top->ifu_rsp_instr
        );

        top->eval();
    }
    // Final model cleanup
    top->final();

#if VM_COVERAGE
    Verilated::mkdir("logs");
    contextp->coveragep()->write("logs/coverage.dat");
#endif

    // Final simulation summary
//    contextp->statsPrintSummary();

    // Return good completion status
    return 0;
}