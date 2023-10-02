module ex7_ps2_keyboard(
	input clk,
	input resetn,
	input ps2_clk,
	input ps2_data
);

//parameter FILE_PATH = "ex7_rom.txt";

reg	[2:0]	ps2_clk_sync;
reg	[3:0]	count;
reg	[9:0]	buffer;

reg [7:0] ps2_ascii_rom[511:0];

initial begin
	$readmemh("vsrc/ex7_rom.txt",ps2_ascii_rom);
end

always @(posedge clk) begin
	ps2_clk_sync	<=	{ps2_clk_sync[1:0],ps2_clk};
end

wire	sampling	=	ps2_clk_sync[2] & ~ps2_clk_sync[1];

always @(posedge clk) begin
	if(!resetn) begin
		count	<=	0;
	end
	else begin
		if(sampling)	begin
			if(count	==	4'd10) begin
				if((buffer[0]	==	0) &&
					(ps2_data)					&&
					(^buffer[9:1]))	begin
					$display("receive %x , it's ASCII %x", buffer[8:1], ps2_ascii_rom[39]);
				end
				count	<= 0;
			end
			else begin
				buffer[count]	<=	ps2_data;
				count	<=	count + 3'b1;
			end
		end
	end
end

endmodule
