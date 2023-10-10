module Mux41(
	input [3:0]	a,
	input	[1:0]	s,
	output reg y
);
always @(s or a) begin
		case (s)
			0: y = a[0];
			1: y = a[1];
			2: y = a[2];
			3: y = a[3];
			default: y = 1'b0;
		endcase
	end
endmodule
