#include<nvboard.h>
#include<verilated.h>
#include"Vex2_top.h"

static TOP_NAME dut;
void nvboard_bind_all_pins(Vex2_top* top);

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
