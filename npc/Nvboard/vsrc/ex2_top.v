module ex2_top(
	input	[7:0] X,//For SW7-0
	input				en,//For SW8
	output	reg	[2:0]	led,//LED2-0
	output	reg		led_sig,//LED4
	
	output	[7:0]	h	
);
always @(X) begin
	if(!en) begin
		led	<=	'd0;
	end
	else begin
		casex(X)
			8'b0000_0000: led <= 'd0;		led_sig <=	'd0;
			8'b0000_001x:	led <=	'd1;	led_sig	<=	'd1;
			8'b0000_01xx:	led	<=	'd2;	led_sig <=	'd1;
			8'b0000_1xxx: led <=	'd3;	led_sig <=	'd1;
			8'b0001_xxxx:	led	<=	'd4;	led_sig <=	'd1;
			8'b001x_xxxx:	led	<=	'd5;	led_sig	<=	'd1;
			8'b01xx_xxxx:	led <=	'd6;	led_sig	<=	'd1;
			8'b1xxx_xxxx:	led	<=	'd7;	led_sig	<=	'd1;
			default			:	led	<=	'd0;	led_sig	<=	'd1;
		endcase
	end
end


ex2_bcd7seg seg1(
	.b(led),
	.h(h)
);

endmodule
