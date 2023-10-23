module ex7_ps2_keyboard(
	input clk,
	input resetn,
	input ps2_clk,
	input ps2_data,
	output	[7:0] Receive,
	output	[7:0]	Ascii,
	output	[7:0]	Num,
	output				seg_en
);

parameter FILE_PATH = "resource/ex7_rom.txt";

reg	[2:0]	ps2_clk_sync;
reg	[3:0]	count;
reg	[9:0]	buffer;

reg [7:0] ps2_ascii_rom[255:0];
reg	[7:0]	Receive_reg_0;
reg	[7:0]	Ascii_reg_0;
reg	[7:0]	Num_reg;

reg	[7:0]	Receive_reg_1;
reg	[7:0]	Ascii_reg_1;

reg [2:0] PST;
localparam cts = 0, no_cts = 1, push = 2, pop = 3;

initial begin
	$readmemh(FILE_PATH,ps2_ascii_rom);
end

always @(posedge clk) begin
	ps2_clk_sync	<=	{ps2_clk_sync[1:0],ps2_clk};
end

wire	sampling	=	ps2_clk_sync[2] & ~ps2_clk_sync[1];
reg	[7:0] Re_his_reg;
reg				seg_en_reg;
reg				cts_sel;

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
					if(buffer[8:1] != Re_his_reg && cts_sel == 0) begin
						if(buffer[8:1] == 8'hf0) begin
							cts_sel		 <= 0;
							seg_en_reg <= 0;
						end
						else begin
							seg_en_reg <= 1;
							Receive_reg_0	<=	buffer[8:1];
							Ascii_reg_0		<=	ps2_ascii_rom[buffer[8:1]];
							PST <= no_cts;
						end
					end
					else begin
						cts_sel <= 1;
						PST <= cts;
					end
//					$display("receive %x , it's ASCII %x", buffer[8:1], ps2_ascii_rom[buffer[8:1]]);
				end
				Re_his_reg <= Receive_reg_0;
				count	<= 0;
			end
			else begin
				buffer[count]	<=	ps2_data;
				count	<=	count + 3'b1;
			end
		end
	end
end

assign seg_en	 = seg_en_reg;
assign Receive = Receive_reg_1;
assign Ascii	 = Ascii_reg_1;

always @(PST) begin
	if(!resetn) begin
		Num_reg <= 0;
	end
	else begin
		case(PST)
			cts : begin Num_reg <= Num_reg + 1;end
			no_cts : begin Num_reg <= Num_reg; Receive_reg_1 <= Receive_reg_0; Ascii_reg_1 <= Ascii_reg_0; end
		endcase
		$display("PST is %d", PST);
	end
end

assign	Num = Num_reg;



endmodule
