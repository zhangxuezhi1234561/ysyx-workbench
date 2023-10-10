module Mux41_double(
	input [1:0] X0,
	input [1:0] X1,
	input [1:0] X2,
	input [1:0] X3,
	input [1:0] Y,
//	input clk,
	output [1:0]	F_Wire
);
reg [1:0] F;
always @(X0 or X1 or X2 or X3 or Y) begin
	case(Y)
		0: F <= X0;
		1: F <= X1;
		2: F <= X2;
		3: F <= X3;
		default: F <= 2'b0;
	endcase
end
assign F_Wire = 2'd3;
/*
initial begin
	if($test$plusargs("trace")!=0) begin
		$display("[%0t] Tracing to logs/vlt_dump.vcd...\n",$time);
		$dumpfile("logs/vlt_dump.vcd");
		$dumpvars();
	end
	$display("[%0t] Model running...\n",$time);
end
*/
endmodule
