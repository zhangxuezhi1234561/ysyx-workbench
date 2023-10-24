module ex7_bcd7seg(
	input	[3:0]	b,
	input				seg_en,
	output	[7:0]	h
);
wire [7:0]	segs	[16:0];
wire [4:0]	sel;
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
assign segs[10] = 8'b1110_1111;//A
assign segs[11] = 8'b1111_1111;
assign segs[12] = 8'b1001_1101;
assign segs[13] = 8'b1111_1101;
assign segs[14] = 8'b1001_1111;
assign segs[15] = 8'b1000_1111;

assign segs[16] = 8'b0000_0000;
assign sel = seg_en ? {1'd0,b[3:0]} : 5'd16;
assign h	=	~segs[sel + 5'd0];

endmodule
