module ex6_seg(
	input	[3:0]	b,
	output	[7:0] h
);

wire	[7:0]	segs	[15:0];

assign segs[0]	=	8'b1111_1100;
assign segs[1]	=	8'b0110_0000;
assign segs[2]	=	8'b1101_1010;
assign segs[3]	=	8'b1111_0010;
assign segs[4]	=	8'b0110_0110;
assign segs[5]	=	8'b1011_0110;
assign segs[6]	=	8'b1011_1110;
assign segs[7]	=	8'b1110_0000;
assign segs[8]	=	8'b1111_1110;
assign segs[9]	=	8'b1111_0110;
assign segs[10]	= 8'b1110_1111;
assign segs[11] = 8'b1111_1111;
assign segs[12] = 8'b1001_1100;
assign segs[13] = 8'b1111_1101;
assign segs[14] = 8'b1001_1111;
assign segs[15] = 8'b1000_1111;

assign h = ~segs[b + 4'd0];

endmodule
