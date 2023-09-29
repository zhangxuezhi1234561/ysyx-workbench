#include<memory>
#include<verilated.h>
#include"Vtop.h"

const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
const std::unique_ptr<Vtop> top{new Vtop{contextp.get(),"TOP"}};
//const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};


double sc_time_stamp() {	return 0;	}

void single_cycle()
{
	top->clk	=	0;	top->eval();
	contextp->timeInc(1);	
	top->clk	=	1;	top->eval();
}

void reset(int n)
{
	top->rst	=	1;
	while	(n-- > 0)
		single_cycle();
	top->rst	=	0;
}

int main(int argc, char** argv)
{
	if(false && argc && argv)
	{}
	
	Verilated::mkdir("logs");

//	const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

	contextp->debug(0);
	contextp->randReset(2);
	contextp->traceEverOn(true);
	contextp->commandArgs(argc, argv);

//	const std::unique_ptr<Vtop> top
//	{
//		new Vtop{contextp.get(),"TOP"}
//	};
	
	//Set Vtop's input signals
	top->rst	= !0;
	top->clk	=	0;

//	reset(10);
	top->rst	=	!0;
	//Simulate until $finish
	while(!contextp->gotFinish())	
	{
		contextp->timeInc(1);

		top->clk	=	!top->clk;

		//single_cycle();
		/*
		if(!top->clk)
		{
			if(contextp->time() > 1 && contextp->time() < 10)
			{
				top->rst	=	!1;
			}
			else
			{
				top->rst	=	!0;
			}
		}
		*/

		top->eval();

		VL_PRINTF("[%" PRId64 "] clk=%x rst=%x \n",contextp->time(),top->clk,top->rst);
	}

	//Final model cleanup
	top->final();

#if VM_COVERAGE
	Verilated::mkdir("logs");
	contextp->coveragep()->write("logs/coverage.dat");
#endif

	return 0;	
}
