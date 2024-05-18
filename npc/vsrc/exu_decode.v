`include "defines.v"

module exu_decode(
    input   [`INSTR_SIZE-1:0]   rv32_instr, //e203 i_instr
    input   [`PC_SIZE-1:0]      i_pc,       //current instrument's pc value

    //  The decoded info-bus
    output  dec_rs1x0,
    output  dec_rs2x0,
    output  dec_rs1en,      //enable read 
    output  dec_rs2en,
    output  dec_rdwen,      //enable write
    output  [`RFIDX_WIDTH-1:0]  dec_rs1idx,
    output  [`RFIDX_WIDTH-1:0]  dec_rs2idx,
    output  [`RFIDX_WIDTH-1:0]  dec_rdidx,
    output  [`XLEN-1:0]         dec_imm,
    output  [`PC_SIZE-1:0]      dec_pc,
    output  [`DECINFO_WIDTH-1:0] dec_info

);
    // verilator lint_off UNUSEDSIGNAL
    wire    [6:0]   opcode      =   rv32_instr[6:0];
    wire    [4:0]   rv32_rd     =   rv32_instr[11:7];
    wire    [2:0]   rv32_func3  =   rv32_instr[14:12];
    wire    [4:0]   rv32_rs1    =   rv32_instr[19:15];
    wire    [4:0]   rv32_rs2    =   rv32_instr[24:20];
    wire    [6:0]   rv32_func7  =   rv32_instr[31:25];

    // opcode handle
    wire opcode_1_0_11  = (opcode[1:0] == 2'b11);       //only concern "11"

    wire opcode_4_2_000 = (opcode[4:2] == 3'b000);
    wire opcode_4_2_001 = (opcode[4:2] == 3'b001);
    wire opcode_4_2_010 = (opcode[4:2] == 3'b010);
    wire opcode_4_2_011 = (opcode[4:2] == 3'b011);
    wire opcode_4_2_100 = (opcode[4:2] == 3'b100);
    wire opcode_4_2_101 = (opcode[4:2] == 3'b101);
    wire opcode_4_2_110 = (opcode[4:2] == 3'b110);
    wire opcode_4_2_111 = (opcode[4:2] == 3'b111);

    wire opcode_6_5_00  = (opcode[6:5] == 2'b00);
    wire opcode_6_5_01  = (opcode[6:5] == 2'b01);
    wire opcode_6_5_10  = (opcode[6:5] == 2'b10);
    wire opcode_6_5_11  = (opcode[6:5] == 2'b11);

    // func3 handle
    wire rv32_func3_000 = (rv32_func3 == 3'b000);
    wire rv32_func3_001 = (rv32_func3 == 3'b001);
    wire rv32_func3_010 = (rv32_func3 == 3'b010);
    wire rv32_func3_011 = (rv32_func3 == 3'b011);
    wire rv32_func3_100 = (rv32_func3 == 3'b100);
    wire rv32_func3_101 = (rv32_func3 == 3'b101);
    wire rv32_func3_110 = (rv32_func3 == 3'b110);
    wire rv32_func3_111 = (rv32_func3 == 3'b111);

    // func7 handle
    wire rv32_func7_0000000 = (rv32_func7 == 7'b0000000);
    wire rv32_func7_0100000 = (rv32_func7 == 7'b0100000);
    wire rv32_func7_0000001 = (rv32_func7 == 7'b0000001);
    wire rv32_func7_0000101 = (rv32_func7 == 7'b0000101);
    wire rv32_func7_0001001 = (rv32_func7 == 7'b0001001);
    wire rv32_func7_0001101 = (rv32_func7 == 7'b0001101);
    wire rv32_func7_0010101 = (rv32_func7 == 7'b0010101);
    wire rv32_func7_0100001 = (rv32_func7 == 7'b0100001);
    wire rv32_func7_0010001 = (rv32_func7 == 7'b0010001);
    wire rv32_func7_0101101 = (rv32_func7 == 7'b0101101);
    wire rv32_func7_1111111 = (rv32_func7 == 7'b1111111);
    wire rv32_func7_0000100 = (rv32_func7 == 7'b0000100); 
    wire rv32_func7_0001000 = (rv32_func7 == 7'b0001000); 
    wire rv32_func7_0001100 = (rv32_func7 == 7'b0001100); 
    wire rv32_func7_0101100 = (rv32_func7 == 7'b0101100); 
    wire rv32_func7_0010000 = (rv32_func7 == 7'b0010000); 
    wire rv32_func7_0010100 = (rv32_func7 == 7'b0010100); 
    wire rv32_func7_1100000 = (rv32_func7 == 7'b1100000); 
    wire rv32_func7_1110000 = (rv32_func7 == 7'b1110000); 
    wire rv32_func7_1010000 = (rv32_func7 == 7'b1010000); 
    wire rv32_func7_1101000 = (rv32_func7 == 7'b1101000); 
    wire rv32_func7_1111000 = (rv32_func7 == 7'b1111000); 
    wire rv32_func7_1010001 = (rv32_func7 == 7'b1010001);  
    wire rv32_func7_1110001 = (rv32_func7 == 7'b1110001);  
    wire rv32_func7_1100001 = (rv32_func7 == 7'b1100001);  
    wire rv32_func7_1101001 = (rv32_func7 == 7'b1101001);  

    wire rv32_rs1_x0        = (rv32_rs1 == 5'b00000);
    wire rv32_rs2_x0        = (rv32_rs2 == 5'b00000);
    wire rv32_rd_x0         = (rv32_rd  == 5'b00000);

////////////////////////////////////////////////////////////////////////////////////////////////////////////
    wire    rv32_op_imm =   opcode_6_5_00 & opcode_4_2_100 & opcode_1_0_11;     //judge whether the imm type
    wire    rv32_op     =   opcode_6_5_01 & opcode_4_2_100 & opcode_1_0_11;
    wire    rv32_system =   opcode_6_5_11 & opcode_4_2_100 & opcode_1_0_11;
    wire    rv32_auipc  =   opcode_6_5_00 & opcode_4_2_101 & opcode_1_0_11;
////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // System Instruction
    wire    rv32_ebreak =   rv32_system & rv32_func3_000 & (rv32_instr[31:20] == 12'b0000_0000_0001);

    // ALU Instructions
    wire    rv32_addi   =   rv32_op_imm & rv32_func3_000;

    wire    rv32_nop    =   rv32_addi & rv32_rs1_x0 & rv32_rd_x0 & (~(|rv32_instr[31:20]));

    wire    ecall_ebreak    =   rv32_ebreak;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
    wire    alu_op      =   rv32_op_imm | ecall_ebreak;
    wire    need_imm;

    wire [`DECINFO_ALU_WIDTH-1:0]    alu_info_bus;
    assign  alu_info_bus[`DECINFO_GRP]          = `DECINFO_GRP_ALU;
    assign  alu_info_bus[`DECINFO_RV32]         = 1'd1;
    assign  alu_info_bus[`DECINFO_ALU_ADD]      = rv32_addi;
    assign  alu_info_bus[`DECINFO_ALU_OP2IMM]   = need_imm;
    assign  alu_info_bus[`DECINFO_ALU_EBRK]     = rv32_ebreak;  
    assign  alu_info_bus[`DECINFO_ALU_OP1PC]    = rv32_auipc;

    // instrument type judge
     

    wire    rv32_need_rs1   =   (~rv32_rs1_x0);
    wire    rv32_need_rs2   =   (~rv32_rs2_x0);
    wire    rv32_need_rd    =   (~rv32_rd_x0);

  
    // imm extract
    wire [31:0] rv32_i_imm  =   {       //the imm of I-Type
                                    {20{rv32_instr[31]}},
                                    rv32_instr[31:20]
                                };
    wire [31:0] rv32_s_imm  =   {       //the imm of S-Type
                                    {20{rv32_instr[31]}},
                                    rv32_instr[31:25],
                                    rv32_instr[11:7]
                                };
    wire [31:0] rv32_b_imm  =   {
                                    {19{rv32_instr[31]}},
                                    rv32_instr[31],
                                    rv32_instr[7],
                                    rv32_instr[30:25],
                                    rv32_instr[11:8],
                                    1'b0
                                };
    wire [31:0] rv32_u_imm  =   {rv32_instr[31:12],12'b0};
    wire [31:0] rv32_j_imm  =   {
                                    {11{rv32_instr[31]}},
                                    rv32_instr[31],
                                    rv32_instr[19:12],
                                    rv32_instr[20],
                                    rv32_instr[30:21],
                                    1'b0
                                };

    wire    rv32_imm_sel_i  =   rv32_op_imm;   
    // determine the imm value
    wire    [31:0]  rv32_imm    =   ({32{rv32_imm_sel_i}} & rv32_i_imm);

    // determine whether need RS1/RS2/RD register
    wire    rv32_need_imm   =   rv32_imm_sel_i;
    assign  need_imm    =   rv32_need_imm;    


    

    // verilator lint_on UNUSEDSIGNAL


    assign  dec_rs1idx  =   rv32_rs1[`RFIDX_WIDTH-1:0];
    assign  dec_rs2idx  =   rv32_rs2[`RFIDX_WIDTH-1:0];
    assign  dec_rdidx   =   rv32_rd[`RFIDX_WIDTH-1:0];

    assign  dec_rs1en   =   rv32_need_rs1;
    assign  dec_rs2en   =   rv32_need_rs2;
    assign  dec_rdwen   =   rv32_need_rd;

    assign  dec_imm     =   rv32_imm;
    assign  dec_pc      =   i_pc;


    
    assign  dec_info    =   ({`DECINFO_WIDTH{alu_op}}   &   {{`DECINFO_WIDTH-`DECINFO_ALU_WIDTH{1'b0}},alu_info_bus});

    assign  dec_rs1x0   =   (dec_rs1idx ==  `RFIDX_WIDTH'b0);
    assign  dec_rs2x0   =   (dec_rs2idx ==  `RFIDX_WIDTH'b0);

endmodule
