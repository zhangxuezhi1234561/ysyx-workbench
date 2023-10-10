module ex2_top(
	input	[7:0] X,//For SW7-0
	input				en,//For SW8
	output	[2:0]	led,//LED2-0
	output	led_sig,//LED4
	
	output	[7:0]	h	
);
reg [2:0]	led_reg;
reg				led_sig_reg;
always @(X or en) begin
	if(!en) begin
		led_reg	<=	'd0;
	end
	else begin
		casex(X)
			8'b0000_0000: begin led_reg <= 'd0;		led_sig_reg <=	'd0;end
			8'b0000_001x:	begin led_reg <=	'd1;	led_sig_reg	<=	'd1;end
			8'b0000_01xx:	begin led_reg	<=	'd2;	led_sig_reg <=	'd1;end
			8'b0000_1xxx: begin led_reg <=	'd3;	led_sig_reg <=	'd1;end
			8'b0001_xxxx:	begin led_reg	<=	'd4;	led_sig_reg <=	'd1;end
			8'b001x_xxxx:	begin led_reg	<=	'd5;	led_sig_reg	<=	'd1;end
			8'b01xx_xxxx:	begin led_reg <=	'd6;	led_sig_reg	<=	'd1;end
			8'b1xxx_xxxx:	begin led_reg	<=	'd7;	led_sig_reg	<=	'd1;end
			default			:	begin led_reg	<=	'd0;	led_sig_reg	<=	'd1;end
		endcase
	end
end
assign	led_sig = led_sig_reg;
assign	led			=	led_reg;

ex2_bcd7seg seg1(
	.b (led),
	.h (h)
);
endmodule
