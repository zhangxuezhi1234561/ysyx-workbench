#include<memory>
#include<nvboard.h>
#include<verilated.h>
#include"Vex3_ALU.h"

static TOP_NAME dut;
void nvboard_bind_all_pins(Vex3_ALU* top);

int main(int argc, char** argv)
{
	nvboard_bind_all_pins(&dut);
	nvboard_init();
	while(1)
	{
		nvboard_update();
		dut.eval();
	}
	return 0;
}
