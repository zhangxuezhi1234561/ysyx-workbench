`include "defines.v"

module  exu_commit(
    input                       clk,
    input                       rst,

    output                      commit_trap,

    input                       alu_cmt_i_valid,
    output                      alu_cmt_i_ready,
    input   [`PC_SIZE-1:0]      alu_cmt_i_pc,
    input   [`INSTR_SIZE-1:0]   alu_cmt_i_instr,
    input                       alu_cmt_i_pc_vld,
    input   [`XLEN-1:0]         alu_cmt_i_imm,

    input                       alu_cmt_i_ebreak,

    output  [`XLEN-1:0]         cmt_cause
);
    wire            alu_excp_cmt_i_ready;


    exu_excp    inst_exu_excp(
        .clk            (clk),
        .rst            (rst),

        .commit_trap    (commit_trap),

        .alu_excp_i_ready   (alu_excp_cmt_i_ready),     //output
        .alu_excp_i_valid   (alu_cmt_i_valid),
        .alu_excp_i_ebreak  (alu_cmt_i_ebreak),

        .cmt_cause          (cmt_cause)
    );

    assign  alu_cmt_i_ready =   alu_excp_cmt_i_ready;

endmodule
