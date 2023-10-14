#include<memory>
#include<nvboard.h>
#include<verilated.h>
#include<Vex6_LFSR.h>


static TOP_NAME dut;
void nvboard_bind_all_pins(Vex6_LFSR* top);

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
