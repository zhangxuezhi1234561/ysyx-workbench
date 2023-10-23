module ex7_top(
	input clk,
	input rst,

	input ps2_clk,
	input ps2_data,
	
	output	[7:0] seg_0,
	output	[7:0]	seg_1,
	output	[7:0]	seg_2,
	output	[7:0]	seg_3,
	output	[7:0]	seg_6,
	output	[7:0]	seg_7
);
wire [7:0] Receive;
wire [7:0] Ascii;
wire [7:0] Num;
wire			 seg_en;

ex7_ps2_keyboard my_keyboard(
	.clk (clk),
	.resetn (~rst),
	.ps2_clk (ps2_clk),
	.ps2_data (ps2_data),
	.Receive	(Receive),
	.Ascii		(Ascii),
	.Num			(Num),
	.seg_en		(seg_en)
);

ex7_bcd7seg seg0(
	.b	(Receive[3:0]),
	.seg_en (seg_en),
	.h	(seg_0)
);

ex7_bcd7seg seg1(
	.b	(Receive[7:4]),
	.seg_en (seg_en),
	.h	(seg_1)
);

ex7_bcd7seg seg2(
	.b	(Receive[3:0]),
	.seg_en (seg_en),
	.h	(seg_2)
);

ex7_bcd7seg seg3(
	.b	(Receive[7:4]),
	.seg_en (seg_en),
	.h	(seg_3)
);

ex7_bcd7seg seg6(
	.b	(Num[3:0]),
	.seg_en (1'b1),
	.h	(seg_6)
);

ex7_bcd7seg seg7(
	.b	(Num[7:4]),
	.seg_en (1'b1),
	.h	(seg_7)
);

endmodule
