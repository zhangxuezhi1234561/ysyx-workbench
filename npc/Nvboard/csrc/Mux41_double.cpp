#include<memory> 
#include<nvboard.h>
#include<verilated.h>
#include"VMux41_double.h"

double sc_time_stamp() {return 0;}

//---------------Related Nvboard---------------//
static TOP_NAME dut;
void nvboard_bind_all_pins(VMux41_double* top);




int main(int argc, char** argv)
{
#if 0

	//--------------------About Wave Watching--------------------//
	if(false && argc && argv) {}

	Verilated::mkdir("logs");  //Is this a needed?
	const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
	contextp->debug(0);
	contextp->randReset(2);
	contextp->traceEverOn(true);
	contextp->commandArgs(argc,argv);

	const std::unique_ptr<VMux41_double> top{new VMux41_double{contextp.get(),"TOP"}};

	top->Y = 0b00;	top->X3 = 0b00;	top->X2 = 0b00; top->X1 = 0b00; top->X0 = 0b00; top->eval(); contextp->timeInc(1);	
									top->X3 = 0b00;	top->X2 = 0b00; top->X1 = 0b00; top->X0 = 0b01; top->eval(); contextp->timeInc(1);
									top->X3 = 0b00;	top->X2 = 0b00; top->X1 = 0b00; top->X0 = 0b10; top->eval(); contextp->timeInc(1); 
									top->X3 = 0b00;	top->X2 = 0b00; top->X1 = 0b00; top->X0 = 0b11; top->eval(); contextp->timeInc(1);
	top->final();

	#if VM_COVERAGE
		Verilated::mkdir("logs");
		contextp->coveragep()->write("logs/coverage.dat");
	#endif
#endif

#if 1
	nvboard_bind_all_pins(&dut);
	nvboard_init();
	while(1)
	{
		nvboard_update();
		dut.eval();
	}
#endif	
	return 0;
}
