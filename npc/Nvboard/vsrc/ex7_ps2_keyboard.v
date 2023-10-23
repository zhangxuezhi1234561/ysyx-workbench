module ex7_ps2_keyboard(
	input clk,
	input resetn,
	input ps2_clk,
	input ps2_data,
	output	[7:0] Receive,
	output	[7:0]	Ascii,
	output	[7:0]	Num

);

parameter FILE_PATH = "resource/ex7_rom.txt";

reg	[2:0]	ps2_clk_sync;
reg	[3:0]	count;
reg	[9:0]	buffer;

reg [7:0] ps2_ascii_rom[255:0];
reg	[7:0]	Receive_reg;
reg	[7:0]	Ascii_reg;
reg	[7:0]	Num_reg;

reg [2:0] PST;
localparam cts = 0, no_cts = 1;

initial begin
	$readmemh(FILE_PATH,ps2_ascii_rom);
end

always @(posedge clk) begin
	ps2_clk_sync	<=	{ps2_clk_sync[1:0],ps2_clk};
end

wire	sampling	=	ps2_clk_sync[2] & ~ps2_clk_sync[1];
reg	[7:0] Re_his_reg;

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
					if(buffer[8:1] != Re_his_reg) begin
						PST <= no_cts;
						Receive_reg	<=	buffer[8:1];
						Ascii_reg		<=	ps2_ascii_rom[buffer[8:1]];
					end
					else begin
						PST <= cts;
					end
//					$display("receive %x , it's ASCII %x", buffer[8:1], ps2_ascii_rom[buffer[8:1]]);
				end
				Re_his_reg <= Receive_reg;
				count	<= 0;
			end
			else begin
				buffer[count]	<=	ps2_data;
				count	<=	count + 3'b1;
			end
		end
	end
end

assign Receive = Receive_reg;
assign Ascii	 = Ascii_reg;

always @(resetn) begin
	if(!resetn) begin
		Num_reg <= 0;
	end
	else begin
		case(PST)
			cts : begin Num_reg <= Num_reg + 1; end
			no_cts : begin Num_reg <= Num_reg; end
		endcase
	end
end

assign	Num = Num_reg;



endmodule
