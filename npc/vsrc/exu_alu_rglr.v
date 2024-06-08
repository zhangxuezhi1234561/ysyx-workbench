`include "defines.v"

module  exu_alu_rglr(
    input   alu_i_valid,
    output  alu_i_ready,

    input   [`XLEN-1:0] alu_req_alu_res,

    input   [`XLEN-1:0] alu_i_rs1,
    input   [`XLEN-1:0] alu_i_rs2,
    input   [`XLEN-1:0] alu_i_imm,
    input   [`XLEN-1:0] alu_i_pc,
    input   [`DECINFO_ALU_WIDTH-1:0]    alu_i_info,
//----------------------------------------------------//
    output  alu_o_valid,
    input   alu_o_ready,
    output  [`XLEN-1:0] alu_o_wbck_wdat,

    output              alu_o_cmt_ebreak,
//----------------------------------------------------//
    // The operands and info to ALU
    output  alu_req_alu_add,
    output  alu_req_alu_lui,

    output  [`XLEN-1:0] alu_req_alu_op1,
    output  [`XLEN-1:0] alu_req_alu_op2
);

    wire    op2imm  =   alu_i_info[`DECINFO_ALU_OP2IMM];
    wire    op1pc   =   alu_i_info[`DECINFO_ALU_OP1PC];

    assign  alu_req_alu_op1 =   op1pc   ? alu_i_pc  :   alu_i_rs1;
    assign  alu_req_alu_op2 =   op2imm  ? alu_i_imm :   alu_i_rs2;

    wire    nop     =   alu_i_info[`DECINFO_ALU_NOP];
    wire    ebreak  =   alu_i_info[`DECINFO_ALU_EBRK];

    // initial begin
    //     $display("ALU_OP1PC_LSB=%d, ALU_OP1PC_MSB\n", `DECINFO_ALU_OP1PC_LSB, `DECINFO_ALU_OP1PC_MSB);
    // end



    assign  alu_req_alu_add =   alu_i_info[`DECINFO_ALU_ADD] & (~nop);
    assign  alu_req_alu_lui =   alu_i_info[`DECINFO_ALU_LUI];

    assign  alu_o_valid     =   alu_i_valid;
    assign  alu_i_ready     =   alu_o_ready;
    assign  alu_o_wbck_wdat =   alu_req_alu_res;

    assign  alu_o_cmt_ebreak    =   ebreak;

endmodule
