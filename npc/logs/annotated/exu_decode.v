//      // verilator_coverage annotation
        `include "defines.v"
        
        module exu_decode(
 000060     input   clk,
%000003     input   rst,
        
%000001     input   [`INSTR_SIZE-1:0]   rv32_instr, //e203 i_instr
%000001     input   [`PC_SIZE-1:0]      i_pc,       //current instrument's pc value
%000008     input                       i_prdt_taken,
        
            //  The decoded info-bus
 000010     output  dec_rs1x0,
 000018     output  dec_rs2x0,
%000009     output  dec_rs1en,      //enable read 
%000007     output  dec_rs2en,
%000009     output  dec_rdwen,      //enable write
%000002     output  [`RFIDX_WIDTH-1:0]  dec_rs1idx,
%000002     output  [`RFIDX_WIDTH-1:0]  dec_rs2idx,
%000001     output  [`RFIDX_WIDTH-1:0]  dec_rdidx,
%000001     output  [`XLEN-1:0]         dec_imm,
%000001     output  [`PC_SIZE-1:0]      dec_pc,
%000002     output  [`DECINFO_WIDTH-1:0] dec_info,
        
 000015     output  dec_bjp,
 000010     output  dec_jal,
%000005     output  dec_jalr,
        
%000002     output  [`RFIDX_WIDTH-1:0]  dec_jalr_rs1idx,
%000005     output  [`XLEN-1:0]         dec_bjp_imm
        
        );
            // verilator lint_off UNUSEDSIGNAL
%000002     wire    [6:0]   opcode      =   rv32_instr[6:0];
%000001     wire    [4:0]   rv32_rd     =   rv32_instr[11:7];
%000005     wire    [2:0]   rv32_func3  =   rv32_instr[14:12];
%000002     wire    [4:0]   rv32_rs1    =   rv32_instr[19:15];
%000002     wire    [4:0]   rv32_rs2    =   rv32_instr[24:20];
%000007     wire    [6:0]   rv32_func7  =   rv32_instr[31:25];
        
            // opcode handle
%000003     wire opcode_1_0_11  = (opcode[1:0] == 2'b11);       //only concern "11"
        
%000007     wire opcode_4_2_000 = (opcode[4:2] == 3'b000);
%000005     wire opcode_4_2_001 = (opcode[4:2] == 3'b001);
%000001     wire opcode_4_2_010 = (opcode[4:2] == 3'b010);
 000010     wire opcode_4_2_011 = (opcode[4:2] == 3'b011);
 000024     wire opcode_4_2_100 = (opcode[4:2] == 3'b100);
%000008     wire opcode_4_2_101 = (opcode[4:2] == 3'b101);
%000003     wire opcode_4_2_110 = (opcode[4:2] == 3'b110);
%000002     wire opcode_4_2_111 = (opcode[4:2] == 3'b111);
        
 000019     wire opcode_6_5_00  = (opcode[6:5] == 2'b00);
%000005     wire opcode_6_5_01  = (opcode[6:5] == 2'b01);
%000004     wire opcode_6_5_10  = (opcode[6:5] == 2'b10);
 000017     wire opcode_6_5_11  = (opcode[6:5] == 2'b11);
        
            // func3 handle
 000012     wire rv32_func3_000 = (rv32_func3 == 3'b000);
%000005     wire rv32_func3_001 = (rv32_func3 == 3'b001);
%000005     wire rv32_func3_010 = (rv32_func3 == 3'b010);
%000002     wire rv32_func3_011 = (rv32_func3 == 3'b011);
%000000     wire rv32_func3_100 = (rv32_func3 == 3'b100);
%000002     wire rv32_func3_101 = (rv32_func3 == 3'b101);
%000000     wire rv32_func3_110 = (rv32_func3 == 3'b110);
 000010     wire rv32_func3_111 = (rv32_func3 == 3'b111);
        
            // func7 handle
 000018     wire rv32_func7_0000000 = (rv32_func7 == 7'b0000000);
%000001     wire rv32_func7_0100000 = (rv32_func7 == 7'b0100000);
%000000     wire rv32_func7_0000001 = (rv32_func7 == 7'b0000001);
%000001     wire rv32_func7_0000101 = (rv32_func7 == 7'b0000101);
%000001     wire rv32_func7_0001001 = (rv32_func7 == 7'b0001001);
%000002     wire rv32_func7_0001101 = (rv32_func7 == 7'b0001101);
%000000     wire rv32_func7_0010101 = (rv32_func7 == 7'b0010101);
%000002     wire rv32_func7_0100001 = (rv32_func7 == 7'b0100001);
%000002     wire rv32_func7_0010001 = (rv32_func7 == 7'b0010001);
%000001     wire rv32_func7_0101101 = (rv32_func7 == 7'b0101101);
 000012     wire rv32_func7_1111111 = (rv32_func7 == 7'b1111111);
%000001     wire rv32_func7_0000100 = (rv32_func7 == 7'b0000100); 
%000000     wire rv32_func7_0001000 = (rv32_func7 == 7'b0001000); 
%000000     wire rv32_func7_0001100 = (rv32_func7 == 7'b0001100); 
%000002     wire rv32_func7_0101100 = (rv32_func7 == 7'b0101100); 
%000001     wire rv32_func7_0010000 = (rv32_func7 == 7'b0010000); 
%000001     wire rv32_func7_0010100 = (rv32_func7 == 7'b0010100); 
%000001     wire rv32_func7_1100000 = (rv32_func7 == 7'b1100000); 
%000001     wire rv32_func7_1110000 = (rv32_func7 == 7'b1110000); 
%000001     wire rv32_func7_1010000 = (rv32_func7 == 7'b1010000); 
%000000     wire rv32_func7_1101000 = (rv32_func7 == 7'b1101000); 
%000000     wire rv32_func7_1111000 = (rv32_func7 == 7'b1111000); 
%000000     wire rv32_func7_1010001 = (rv32_func7 == 7'b1010001);  
%000001     wire rv32_func7_1110001 = (rv32_func7 == 7'b1110001);  
%000001     wire rv32_func7_1100001 = (rv32_func7 == 7'b1100001);  
%000002     wire rv32_func7_1101001 = (rv32_func7 == 7'b1101001);  
        
 000010     wire rv32_rs1_x0        = (rv32_rs1 == 5'b00000);
 000018     wire rv32_rs2_x0        = (rv32_rs2 == 5'b00000);
%000008     wire rv32_rd_x0         = (rv32_rd  == 5'b00000);
        
        ////////////////////////////////////////////////////////////////////////////////////////////////////////////    
%000005     wire    rv32_jalr   =   opcode_6_5_11 & opcode_4_2_001 & opcode_1_0_11;
 000010     wire    rv32_jal    =   opcode_6_5_11 & opcode_4_2_011 & opcode_1_0_11;
            
 000024     wire    rv32_op_imm =   opcode_6_5_00 & opcode_4_2_100 & opcode_1_0_11;     //judge whether the imm type
%000000     wire    rv32_op     =   opcode_6_5_01 & opcode_4_2_100 & opcode_1_0_11;
%000005     wire    rv32_system =   opcode_6_5_11 & opcode_4_2_100 & opcode_1_0_11;
 000010     wire    rv32_auipc  =   opcode_6_5_00 & opcode_4_2_101 & opcode_1_0_11;
 000010     wire    rv32_lui    =   opcode_6_5_00 & opcode_4_2_101 & opcode_1_0_11;
        ////////////////////////////////////////////////////////////////////////////////////////////////////////////
        
            // System Instruction
%000005     wire    rv32_ebreak =   rv32_system & rv32_func3_000 & (rv32_instr[31:20] == 12'b0000_0000_0001);
        
            // ALU Instructions
 000024     wire    rv32_addi   =   rv32_op_imm & rv32_func3_000;
        
%000001     wire    rv32_nop    =   rv32_addi & rv32_rs1_x0 & rv32_rd_x0 & (~(|rv32_instr[31:20]));
        
%000005     wire    ecall_ebreak    =   rv32_ebreak;
        
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
 000018     wire    alu_op      =   rv32_op_imm
                                  | rv32_auipc
                                  | rv32_lui
                                  | ecall_ebreak;
 000011     wire    need_imm;
        
%000001     wire [`DECINFO_ALU_WIDTH-1:0]    alu_info_bus;
            assign  alu_info_bus[`DECINFO_GRP]          = `DECINFO_GRP_ALU;
            assign  alu_info_bus[`DECINFO_RV32]         = 1'd1;
            assign  alu_info_bus[`DECINFO_ALU_ADD]      = rv32_addi | rv32_auipc;
            assign  alu_info_bus[`DECINFO_ALU_LUI]      = rv32_lui;
            assign  alu_info_bus[`DECINFO_ALU_OP2IMM]   = need_imm;
            assign  alu_info_bus[`DECINFO_ALU_NOP]      = rv32_nop;
            assign  alu_info_bus[`DECINFO_ALU_OP1PC]    = rv32_auipc;
            assign  alu_info_bus[`DECINFO_ALU_EBRK]     = rv32_ebreak;  
            // instrument type judge
             
        
%000009     wire    rv32_need_rs1   =   (~rv32_rs1_x0)
                                      & (~rv32_jal)
                                      & (~rv32_lui)
                                      & (~rv32_auipc) 
                                        ;
%000007     wire    rv32_need_rs2   =   (~rv32_rs2_x0)
                                      | (rv32_op) 
                                        ;
%000009     wire    rv32_need_rd    =   (~rv32_rd_x0);
        
          
            // imm extract
%000002     wire [31:0] rv32_i_imm  =   {       //the imm of I-Type
                                            {20{rv32_instr[31]}},
                                            rv32_instr[31:20]
                                        };
%000001     wire [31:0] rv32_s_imm  =   {       //the imm of S-Type
                                            {20{rv32_instr[31]}},
                                            rv32_instr[31:25],
                                            rv32_instr[11:7]
                                        };
%000001     wire [31:0] rv32_b_imm  =   {
                                            {19{rv32_instr[31]}},
                                            rv32_instr[31],
                                            rv32_instr[7],
                                            rv32_instr[30:25],
                                            rv32_instr[11:8],
                                            1'b0
                                        };
%000001     wire [31:0] rv32_u_imm  =   {rv32_instr[31:12],12'b0};
%000001     wire [31:0] rv32_j_imm  =   {
                                            {11{rv32_instr[31]}},
                                            rv32_instr[31],
                                            rv32_instr[19:12],
                                            rv32_instr[20],
                                            rv32_instr[30:21],
                                            1'b0
                                        };
        
 000020     wire    rv32_imm_sel_i  =   rv32_op_imm | rv32_jalr;
%000005     wire    rv32_imm_sel_jalr   =   rv32_jalr;   
%000002     wire    [31:0]  rv32_jalr_imm   =   rv32_i_imm;
 000010     wire    rv32_imm_sel_u  =   rv32_auipc | rv32_lui;
 000010     wire    rv32_imm_sel_j  =   rv32_jal;    
 000010     wire    rv32_imm_sel_jal        =   rv32_jal;
%000001     wire    [31:0]  rv32_jal_imm    =   rv32_j_imm;
            // determine the imm value
%000001     wire    [31:0]  rv32_imm    =   
                                            ({32{rv32_imm_sel_i}} & rv32_i_imm)
                                          | ({32{rv32_imm_sel_u}} & rv32_u_imm) 
                                          | ({32{rv32_imm_sel_j}} & rv32_j_imm)
                                            ;
        
            // determine whether need RS1/RS2/RD register
 000011     wire    rv32_need_imm   =   rv32_imm_sel_i
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
            assign  dec_bjp     =   dec_jal | dec_jalr;
        
 000015     wire    bjp_op      =   dec_bjp;
        
%000002     wire    [`DECINFO_BJP_WIDTH-1:0]    bjp_info_bus;
            assign  bjp_info_bus[`DECINFO_GRP]  =   `DECINFO_GRP_BJP;
            assign  bjp_info_bus[`DECINFO_BJP_JUMP]     =   dec_jal | dec_jalr;
            assign  bjp_info_bus[`DECINFO_BJP_BPRDT]    =   i_prdt_taken;
        
        
            
            assign  dec_info    =   ({`DECINFO_WIDTH{alu_op}}   &   {{`DECINFO_WIDTH-`DECINFO_ALU_WIDTH{1'b0}},alu_info_bus})
                                  | ({`DECINFO_WIDTH{bjp_op}}   &   {{`DECINFO_WIDTH-`DECINFO_BJP_WIDTH{1'b0}},bjp_info_bus}) 
                                    ;
         
            assign  dec_bjp_imm =   ({32{rv32_jal}}  & rv32_jal_imm)
                                  | ({32{rv32_jalr}} & rv32_jalr_imm)
                                  ; 
        
            assign  dec_jalr_rs1idx     =   rv32_rs1[`RFIDX_WIDTH-1:0];
        
 000025     wire dec_bjp_test;
            sirv_gnrl_dfflr #(1)        decode_dec_bjp_test_dfflr (1, rv32_addi, dec_bjp_test, clk, rst);
        
        endmodule
        
