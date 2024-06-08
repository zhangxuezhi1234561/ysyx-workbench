#include <verilated.h>
#include <stdio.h>
#include <memory>
#include "Vcore.h"
#include "host.h"
#include "macro.h"
#include "Vcore__Dpi.h"

using namespace std;

vluint64_t sim_time = 0;

void npc_stop(int a, int b) {      // using at exu_excp.v
    VL_PRINTF("!!!\n");    
    if(a)    assert(0);
    // Log("npc: %s at pc =" FMT_WORD,
    //     (b == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
    //     ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))    
    // );
    return;
}

double sc_time_stamp() {
    return sim_time;
}


void init_monitor(int, char *[]);

int main(int argc, char** argv) {

    // init_isa();
    init_monitor(argc, argv);

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
    int count = 300;
    top->clk            =   0;
    top->rst            =   !0;

    top->pc_rtvec       =   RESET_VECTOR;

    top->ifu_req_ready  =   1;

    top->ifu_rsp_valid  =   1;



    while(!contextp->gotFinish() && count--) {
    //while(count--) {
        uint32_t    pc_req;
        pc_req  = top->ifu_req_pc;

         //contextp->timeInc(5);
        if(sim_time % 5 == 0) {
            top->clk    =   !top->clk;  
            // top->ifu_rsp_valid  =   0;
            // top->ifu_req_ready  =   1;
        }
        if(sim_time % 10 == 2 && contextp->time() > 50) {
            if(top->ifu_req_valid) {
                VL_PRINTF("ifu_req_pc=0x%x\n", pc_req);
                top->ifu_rsp_instr  = pmem_read(pc_req, 4);
                // top->ifu_rsp_valid  =   1;
                // top->ifu_req_ready  =   0;
            } else {
                //top->ifu_rsp_valid  =   0;
                //top->ifu_rsp_valid  =   0;
                //top->ifu_req_ready  =   1;
            }
        }
        // top->ifu_req_ready  =   1;
        // top->ifu_rsp_valid  =   1;        

    
        if(!top->clk) {
            if(contextp->time() > 1 && contextp->time() < 50) {
                top->rst = 0;
            } else {
                top->rst = 1;
            }
        }

        //cout << "reset_flag_r: " << top->reset_flag_r << endl;

        // read outputs
        // VL_PRINTF("[%" PRId64 "] clk=%x rst=%x  
        //     ifu_req_pc=0x%x 
        //     ifu_rsp_instr=0x%x  
        //     \n",   
        //     contextp->time(), top->clk, top->rst, 
        //     top->ifu_req_pc,
        //     top->ifu_rsp_instr
        // );
        sim_time++;
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