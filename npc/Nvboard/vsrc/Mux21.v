module Mux21(
	input a,b,s,
	output y
);

assign y = (~s&a)|(s&b);

initial begin
	if($test$plusargs("trace")!=0) begin
		$display("[%0t] Tracing to logs/vlt_dump.vcd...\n",$time);
		$dumpfile("logs/vlt_dump.vcd");
		$dumpvars();
	end
	$display("[%0t] Model running...\n", $time);
end

endmodule
