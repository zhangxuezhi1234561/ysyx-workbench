module ex6_LFSR(
	input butn,
	output [15:0] out
);

//reg [7:0] cnt;
reg	[7:0]	out_reg = 8'b0000_0001;
reg				MSB_reg;

always @(posedge butn)  begin
//	cnt <=	cnt + 1'd1;
	MSB_reg	<=	out_reg[4]^out_reg[3]^out_reg[2]^out_reg[0];
	out_reg	<=	{MSB_reg,out_reg[7:1]};



end

ex6_seg seg1(
	.b (out_reg[3:0]),
	.h (out[7:0])
);

ex6_seg seg2(
	.b (out_reg[7:4]),
	.h (out[15:8])
);


endmodule
