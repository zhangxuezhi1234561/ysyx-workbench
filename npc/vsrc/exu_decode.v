`include "defines.v"

module exu_decode(
    input   [`INSTR_SIZE-1:0]   rv32_instr, //e203 i_instr
    input   [`PC_SIZE-1:0]      i_pc,       //current instrument's pc value
    input                       i_prdt_taken,

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
    output  [`DECINFO_WIDTH-1:0] dec_info,

    output  dec_bjp,
    output  dec_jal,
    output  dec_jalr,
    output  dec_bxx,

    output  [`RFIDX_WIDTH-1:0]  dec_jalr_rs1idx,
    output  [`XLEN-1:0]         dec_bjp_imm

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
    wire    rv32_load   =   opcode_6_5_00 & opcode_4_2_000 & opcode_1_0_11;
    wire    rv32_store  =   opcode_6_5_01 & opcode_4_2_000 & opcode_1_0_11;
    wire    rv32_branch =   opcode_6_5_11 & opcode_4_2_000 & opcode_1_0_11;

    wire    rv32_jalr   =   opcode_6_5_11 & opcode_4_2_001 & opcode_1_0_11;
    wire    rv32_jal    =   opcode_6_5_11 & opcode_4_2_011 & opcode_1_0_11;
    
    wire    rv32_op_imm =   opcode_6_5_00 & opcode_4_2_100 & opcode_1_0_11;     //judge whether the imm type
    wire    rv32_op     =   opcode_6_5_01 & opcode_4_2_100 & opcode_1_0_11;
    wire    rv32_system =   opcode_6_5_11 & opcode_4_2_100 & opcode_1_0_11;
    wire    rv32_auipc  =   opcode_6_5_00 & opcode_4_2_101 & opcode_1_0_11;
    wire    rv32_lui    =   opcode_6_5_00 & opcode_4_2_101 & opcode_1_0_11;

////////////////////////////////////////////////////////////////////////////////////////////////////////////
    wire    rv32_beq    =   rv32_branch & rv32_func3_000;
    wire    rv32_bne    =   rv32_branch & rv32_func3_001;
////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // System Instruction
    wire    rv32_ebreak =   rv32_system & rv32_func3_000 & (rv32_instr[31:20] == 12'b0000_0000_0001);

    // ALU Instructions
    wire    rv32_addi   =   rv32_op_imm & rv32_func3_000;
    wire    rv32_sltiu  =   rv32_op_imm & rv32_func3_011;

    wire    rv32_add    =   rv32_op     & rv32_func3_000 & rv32_func7_0000000;
    wire    rv32_sltu   =   rv32_op     & rv32_func3_011 & rv32_func7_0000000;
    wire    rv32_xor    =   rv32_op     & rv32_func3_100 & rv32_func7_0000000;
    wire    rv32_or     =   rv32_op     & rv32_func3_110 & rv32_func7_0000000;

    wire    rv32_nop    =   rv32_addi & rv32_rs1_x0 & rv32_rd_x0 & (~(|rv32_instr[31:20]));

    wire    ecall_ebreak    =   rv32_ebreak;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
    wire    rv32_lw     =   rv32_load   & rv32_func3_010;       // through last two bits judge lb,lh,lw

    wire    rv32_sw     =   rv32_store  & rv32_func3_010;
///////////////////////////////////////////////////////////////////////////////////////////////////////////   
    wire    alu_op      =   rv32_op_imm
                          | rv32_op & (~rv32_func7_0000001)     //Exclude the MULDIV
                          | rv32_auipc
                          | rv32_lui
                          | ecall_ebreak;
    wire    need_imm;

    wire [`DECINFO_ALU_WIDTH-1:0]    alu_info_bus;
    assign  alu_info_bus[`DECINFO_GRP]          = `DECINFO_GRP_ALU;
    assign  alu_info_bus[`DECINFO_RV32]         = 1'd1;
    assign  alu_info_bus[`DECINFO_ALU_ADD]      = rv32_addi | rv32_auipc | rv32_add;
    assign  alu_info_bus[`DECINFO_ALU_SLTU]     = rv32_sltu | rv32_sltiu;
    assign  alu_info_bus[`DECINFO_ALU_XOR]      = rv32_xor;
    assign  alu_info_bus[`DECINFO_ALU_OR]       = rv32_or;
    assign  alu_info_bus[`DECINFO_ALU_LUI]      = rv32_lui;
    assign  alu_info_bus[`DECINFO_ALU_OP2IMM]   = need_imm;
    assign  alu_info_bus[`DECINFO_ALU_NOP]      = rv32_nop;
    assign  alu_info_bus[`DECINFO_ALU_OP1PC]    = rv32_auipc;
    assign  alu_info_bus[`DECINFO_ALU_EBRK]     = rv32_ebreak;  
    
    wire    amoldst_op                          = rv32_load | rv32_store;
    wire    [1:0] lsu_info_size                 = rv32_func3[1:0];
    wire          lsu_info_usign                = rv32_func3[2];

    wire    [`DECINFO_AGU_WIDTH-1:0]    agu_info_bus;
    assign  agu_info_bus[`DECINFO_GRP]          = `DECINFO_GRP_AGU;
    assign  agu_info_bus[`DECINFO_RV32]         = 1'd1;
    assign  agu_info_bus[`DECINFO_AGU_LOAD]     = rv32_load;
    assign  agu_info_bus[`DECINFO_AGU_STORE]    = rv32_store;
    assign  agu_info_bus[`DECINFO_AGU_SIZE]     = lsu_info_size;
    assign  agu_info_bus[`DECINFO_AGU_USIGN]    = lsu_info_usign;
    assign  agu_info_bus[`DECINFO_AGU_OP2IMM]   = need_imm;
    
    // instrument type judge     

    wire    rv32_need_rs1   =   (~rv32_rs1_x0)
                              & (~rv32_jal)
                              & (~rv32_lui)
                              & (~rv32_auipc) 
                                ;
    wire    rv32_need_rs2   =   (~rv32_rs2_x0) & (
                                (rv32_branch)
                              | (rv32_store)
                              | (rv32_op)  
                                );

    wire    rv32_need_rd    =   (~rv32_rd_x0) & {
                                (~rv32_branch) & (~rv32_store)
                                };

  
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

    wire    rv32_imm_sel_i  =   rv32_op_imm | rv32_jalr | rv32_load;
    wire    rv32_imm_sel_jalr   =   rv32_jalr;   
    wire    [31:0]  rv32_jalr_imm   =   rv32_i_imm;
    wire    rv32_imm_sel_u  =   rv32_auipc | rv32_lui;
    wire    rv32_imm_sel_j  =   rv32_jal;    
    wire    rv32_imm_sel_jal        =   rv32_jal;           //not used
    wire    [31:0]  rv32_jal_imm    =   rv32_j_imm;

    wire    rv32_imm_sel_b          =   rv32_branch;
    wire    rv32_imm_sel_bxx        =   rv32_branch;        //not used
    wire    [31:0] rv32_bxx_imm     =   rv32_b_imm;

    wire    rv32_imm_sel_s          =   rv32_store;
    // determine the imm value
    wire    [31:0]  rv32_imm    =   
                                    ({32{rv32_imm_sel_i}} & rv32_i_imm)
                                  | ({32{rv32_imm_sel_s}} & rv32_s_imm)  
                                  | ({32{rv32_imm_sel_b}} & rv32_b_imm)
                                  | ({32{rv32_imm_sel_u}} & rv32_u_imm) 
                                  | ({32{rv32_imm_sel_j}} & rv32_j_imm)
                                    ;

    // determine whether need RS1/RS2/RD register
    wire    rv32_need_imm   =   rv32_imm_sel_i
                              | rv32_imm_sel_s
                              | rv32_imm_sel_b
                              | rv32_imm_sel_u 
                              | rv32_imm_sel_j
                                ;
    assign  need_imm    =   rv32_need_imm;    


    

    // verilator lint_on UNUSEDSIGNAL
    assign  dec_imm     =   rv32_imm;
    assign  dec_pc      =   i_pc;

    assign  dec_rs1idx  =   rv32_rs1[`RFIDX_WIDTH-1:0];
    assign  dec_rs2idx  =   rv32_rs2[`RFIDX_WIDTH-1:0];
    assign  dec_rdidx   =   rv32_rd[`RFIDX_WIDTH-1:0];

    assign  dec_rs1en   =   rv32_need_rs1;
    assign  dec_rs2en   =   rv32_need_rs2;
    assign  dec_rdwen   =   rv32_need_rd;

    assign  dec_rs1x0   =   (dec_rs1idx ==  `RFIDX_WIDTH'b0);
    assign  dec_rs2x0   =   (dec_rs2idx ==  `RFIDX_WIDTH'b0);    
///////////////////////////////////////////////////////////////////
    assign  dec_jal     =   rv32_jal;
    assign  dec_jalr    =   rv32_jalr;
    assign  dec_bxx     =   rv32_branch;
    assign  dec_bjp     =   dec_jal | dec_jalr | dec_bxx;

    wire    bjp_op      =   dec_bjp;

    wire    [`DECINFO_BJP_WIDTH-1:0]    bjp_info_bus;
    assign  bjp_info_bus[`DECINFO_GRP]  =   `DECINFO_GRP_BJP;
    assign  bjp_info_bus[`DECINFO_BJP_JUMP]     =   dec_jal | dec_jalr;
    assign  bjp_info_bus[`DECINFO_BJP_BPRDT]    =   i_prdt_taken;
    assign  bjp_info_bus[`DECINFO_BJP_BEQ]      =   rv32_beq;
    assign  bjp_info_bus[`DECINFO_BJP_BNE]      =   rv32_bne;
    assign  bjp_info_bus[`DECINFO_BJP_BXX]      =   dec_bxx;


    
    assign  dec_info    =   ({`DECINFO_WIDTH{alu_op}}   &   {{`DECINFO_WIDTH-`DECINFO_ALU_WIDTH{1'b0}},alu_info_bus})
                          | ({`DECINFO_WIDTH{amoldst_op}} & {{`DECINFO_WIDTH-`DECINFO_AGU_WIDTH{1'b0}},agu_info_bus})  
                          | ({`DECINFO_WIDTH{bjp_op}}   &   {{`DECINFO_WIDTH-`DECINFO_BJP_WIDTH{1'b0}},bjp_info_bus}) 
                            ;
 
    assign  dec_bjp_imm =   ({32{rv32_jal}}  & rv32_jal_imm)
                          | ({32{rv32_jalr}} & rv32_jalr_imm)
                          | ({32{rv32_branch}} & rv32_bxx_imm)
                          ; 

    assign  dec_jalr_rs1idx     =   rv32_rs1[`RFIDX_WIDTH-1:0];

endmodule
