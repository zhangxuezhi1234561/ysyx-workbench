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

reg [1:0] PST;
localparam A = 0, B = 1, C = 2;
reg [7:0] Receive_reg[2:0];
reg [7:0] Ascii_reg[2:0];
reg				Re_cnt;
reg	[1:0] cnt;

initial begin
	$readmemh(FILE_PATH,ps2_ascii_rom);
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
					Receive_reg[cnt] <=	buffer[8:1];
					Ascii_reg[cnt]		<=	ps2_ascii_rom[buffer[8:1]];
					Re_cnt	<=	Re_cnt + 1;
//					$display("receive %x , it's ASCII %x", buffer[8:1], ps2_ascii_rom[buffer[8:1]]);
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

reg seg_en_reg;
reg	[7:0] Re_reg_1;
reg [7:0] Ascii_reg_1;
reg	[7:0]	Num_reg;
reg	[1:0]	num;

always @(Re_cnt) begin
	case(PST)
		A : begin
					if(Receive_reg[0] != Receive_reg[1] && num != 1) begin
						seg_en_reg	<= 1'd1;
						Re_reg_1		<=	Receive_reg[0];
						Ascii_reg_1	<=	Ascii_reg[0];
						$display("receive %x, it's ASCII %x", Re_reg_1, Ascii_reg_1);
						cnt			<=	2'd1;
						PST <= B;
					end
					else begin
						cnt <= 0;
						seg_en_reg	<=	0;
						num <= 0;
						PST	<= A;
				end
			end
		B : begin
			Num_reg <=	Num_reg + 1;
			if(Receive_reg[1] == 8'hf0) begin
				cnt <= 2'd2;
				num <= 1;
				seg_en_reg	<=	0;
				PST	<=	A;
			end
			else begin
				cnt	<= 2'd2;
				seg_en_reg	<= 1'd1;
				PST	<=	C;
			end
		end
		C : begin
			if(Receive_reg[2] == Receive_reg[1])begin
				cnt <= 2'd1;
				seg_en_reg <= 1'd1;
				PST <= C;
			end
			else begin
				cnt	<= 2;
				num	<= 1;
				PST <= A;
			end
		end
	endcase
end

assign seg_en	=	seg_en_reg;
assign Receive	=	Re_reg_1;
assign Ascii		=	Ascii_reg_1;
assign Num			=	Num_reg;

endmodule
