module ex3_ALU(
	input	[3:0]	a,
	input	[3:0]	b,
	input				cin,
	input	[2:0]	alu_sel,

	output [3:0]	alu_out,
	output			overflow,
	output			zero,
	output			alu_cout
);
reg	[3:0]	result;
reg				carry_temp;
reg				overflow_temp;
reg	[3:0] t_cin;

always @(a or b or cin or alu_sel) begin
	case(alu_sel)
		3'b000:	begin {carry_temp,result} <=	a	+	b + {3'b000,cin};																overflow_temp = (a[3]==b[3])&&(result[3]!=a[3]); end					//add
		// verilator lint_off WIDTHCONCAT
		3'b001:	begin t_cin <= ({4{1}}^b) + 1; {carry_temp,result} <=	a	+	(t_cin) - {3'b000,cin}; overflow_temp = (a[3]==t_cin[3])&&(result[3]!=a[3]); end							//sub
		// verilator lint_on WIDTHCONCAT
		3'b010: begin	result	<=	~a;	end								//Not  取了相反数	有问题
		3'b011:	begin result	<=	a & b; end							//and
		3'b100:	begin result	<=	a | b; end							//or
		3'b101:	begin result	<=	a ^	b; end							//Xor
		3'b110:	begin result	<=	(a<b)?4'd1:4'd0; end							//Comp
		3'b111:	begin result	<=	(a==b)?4'd1:4'd0; end							//Equl
		default: begin {carry_temp,result}	<=	5'b0_0000; end
	endcase
end

assign	alu_out	=	result;
//assign	carry_temp	=	{1'b0,a}	+	{1'b0,b};
assign	alu_cout		=	carry_temp;
assign	zero	=	~(|result);

endmodule
