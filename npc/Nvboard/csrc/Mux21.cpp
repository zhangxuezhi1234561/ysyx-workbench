#include<verilated.h>
#include<memory>
#include<verilated_vcd_c.h>
#include"../obj_dir/VMux21.h"

//const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
//VerilatedContext* contextp = NULL;
//VerilatedVcdC* tfp = NULL;
//const std::unique_ptr<VerilatedVcdC>	tfp{new VerilatedVcdC};
//const std::unique_ptr<VMux21> top{new VMux21{contextp.get(),"TOP"}};
//static VMux21* top;

double sc_time_stamp() { return 0; }
/*
void step_and_dump_wave(){
	top->eval();
	contextp->timeInc(1);
	tfp->dump(contextp->time());
}

void sim_init(){
	contextp = new VerilatedContext;
	tfp = new VerilatedVcdC;
	top = new VMux21;
	contextp->traceEverOn(true);
//	contextp->commandArgs(argc,argv);
	top->trace(tfp,0);
	tfp->open("vlt_dump.vcd");
}

void sim_exit()
{
	step_and_dump_wave();
	tfp->close();
}
*/
int main(int argc, char** argv)
{
	/**/
	Verilated::mkdir("../logs");
	const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
	contextp->debug(0);
	contextp->randReset(2);
	contextp->traceEverOn(true);
	contextp->commandArgs(argc,argv);
	const std::unique_ptr<VMux21> top{new VMux21{contextp.get(),"TOP"}};
//	std::unique_ptr<VerilatedVcdC> tfp{new VerilatedVcdC};
	
//	sim_init();

//	contextp->commandArgs(argc,argv);
	top->s=0; top->a=0; top->b=0; top->eval();	contextp->timeInc(1);
											top->b=1;	top->eval();	contextp->timeInc(1);
						top->a=1;	top->b=0; top->eval();	contextp->timeInc(1);
											top->b=1;	top->eval();	contextp->timeInc(1);

	top->s=1; top->a=0; top->b=0; top->eval();	contextp->timeInc(1);
											top->b=1;	top->eval();	contextp->timeInc(1);
						top->a=1;	top->b=0; top->eval();	contextp->timeInc(1);
											top->b=1;	top->eval();	contextp->timeInc(1);
//	sim_exit();
	top->final(); 

#if VM_COVERAGE
	Verilated::mkdir("logs");
	contextp->coveragep()->write("logs/coverage.dat");
#endif
	return 0;
}
