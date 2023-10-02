module ex7_top(
	input clk,
	input rst,

	input ps2_clk,
	input ps2_data
);

ex7_ps2_keyboard my_keyboard(
	.clk (clk),
	.resetn (rst),
	.ps2_clk (ps2_clk),
	.ps2_data (ps2_data)
);

endmodule
