module top(
	input clk,
	input rst,
	output wire [15:0] led
);
  reg [31:0] count;
	reg [15:0] ledr;
	always @(posedge clk) begin
		if(rst) begin
			ledr <= 1; count <= 0;
		end
		else begin
			if(count == 0) begin
				ledr <= {ledr[14:0], ledr[15]};
			end
			count <= (count >= 5000000 ? 32'b0 : count+1);
//			assign led = ledr;
//			if(count == 30) begin
//				$write("*-* All Finished *-*\n");
//				$finish;
//			end
		end

	end

	assign led = ledr;
/*
	initial begin
		if($test$plusargs("trace") != 0) begin
			$display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
			$dumpfile("logs/vlt_dump.vcd");
			$dumpvars();
		end
		$display("[%0t] Model running...\n", $time);
	end
*/
	endmodule
