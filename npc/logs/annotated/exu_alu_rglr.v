//      // verilator_coverage annotation
        `include "defines.v"
        
        module  exu_alu_rglr(
 000010     input   alu_i_valid,
%000007     output  alu_i_ready,
        
%000001     input   [`XLEN-1:0] alu_req_alu_res,
        
%000004     input   [`XLEN-1:0] alu_i_rs1,
%000001     input   [`XLEN-1:0] alu_i_rs2,
%000006     input   [`XLEN-1:0] alu_i_imm,
%000000     input   [`XLEN-1:0] alu_i_pc,
%000000     input   [`DECINFO_ALU_WIDTH-1:0]    alu_i_info,
        //----------------------------------------------------//
 000010     output  alu_o_valid,
%000007     input   alu_o_ready,
%000001     output  [`XLEN-1:0] alu_o_wbck_wdat,
        
%000000     output              alu_o_cmt_ebreak,
        //----------------------------------------------------//
            // The operands and info to ALU
%000008     output  alu_req_alu_add,
%000001     output  alu_req_alu_xor,
%000001     output  alu_req_alu_or,
%000001     output  alu_req_alu_sltu,
%000008     output  alu_req_alu_lui,
        
%000001     output  [`XLEN-1:0] alu_req_alu_op1,
%000001     output  [`XLEN-1:0] alu_req_alu_op2
        );
        
%000009     wire    op2imm  =   alu_i_info[`DECINFO_ALU_OP2IMM];
%000008     wire    op1pc   =   alu_i_info[`DECINFO_ALU_OP1PC];
        
            assign  alu_req_alu_op1 =   op1pc   ? alu_i_pc  :   alu_i_rs1;
            assign  alu_req_alu_op2 =   op2imm  ? alu_i_imm :   alu_i_rs2;
        
%000001     wire    nop     =   alu_i_info[`DECINFO_ALU_NOP];
%000000     wire    ebreak  =   alu_i_info[`DECINFO_ALU_EBRK];
        
            // initial begin
            //     $display("ALU_OP1PC_LSB=%d, ALU_OP1PC_MSB\n", `DECINFO_ALU_OP1PC_LSB, `DECINFO_ALU_OP1PC_MSB);
            // end
        
        
        
            assign  alu_req_alu_add =   alu_i_info[`DECINFO_ALU_ADD] & (~nop);
            assign  alu_req_alu_xor =   alu_i_info[`DECINFO_ALU_XOR];
            assign  alu_req_alu_or  =   alu_i_info[`DECINFO_ALU_OR];
            assign  alu_req_alu_sltu =  alu_i_info[`DECINFO_ALU_SLTU];
            assign  alu_req_alu_lui =   alu_i_info[`DECINFO_ALU_LUI];
        
            assign  alu_o_valid     =   alu_i_valid;
            assign  alu_i_ready     =   alu_o_ready;
            assign  alu_o_wbck_wdat =   alu_req_alu_res;
        
            assign  alu_o_cmt_ebreak    =   ebreak;
        
        endmodule
        
