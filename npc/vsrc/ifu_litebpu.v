`include "defines.v"

module  ifu_litebpu(
    input   clk,
    input   rst,

    input   [`PC_SIZE-1:0]  pc,

    input   dec_jal,
    input   dec_jalr,

    input   [`XLEN-1:0]         dec_bjp_imm,
    input   [`RFIDX_WIDTH-1:0]  dec_jalr_rs1idx,

    output  bpu_wait,
    output  prdt_taken,
    output  [`PC_SIZE-1:0]      prdt_pc_add_op1,
    output  [`PC_SIZE-1:0]      prdt_pc_add_op2,

    input   dec_i_valid,

    output  bpu2rf_rs1_ena,
    input   ir_valid_clr,
    input   [`XLEN-1:0]         rf2bpu_x1,
    input   [`XLEN-1:0]         rf2bpu_rs1
);

    assign  prdt_taken      =   (dec_jal | dec_jalr);
    wire    dec_jalr_rs1x0  =   (dec_jalr_rs1idx == `RFIDX_WIDTH'd0);
    wire    dec_jalr_rs1x1  =   (dec_jalr_rs1idx == `RFIDX_WIDTH'd1);
    wire    dec_jalr_rs1xn  =   (~dec_jalr_rs1x0) & (~dec_jalr_rs1x1);

    wire    jalr_rs1x1_dep  =   dec_i_valid & dec_jalr & dec_jalr_rs1x1 & 1'b0;     //TODO
    wire    jalr_rs1xn_dep  =   dec_i_valid & dec_jalr & dec_jalr_rs1xn & 1'b0;     //TODO

    wire    jalr_rs1xn_dep_ir_clr   =   jalr_rs1xn_dep & ir_valid_clr;

    wire    rs1xn_rdrf_r;
    wire    rs1xn_rdrf_set  =   (~rs1xn_rdrf_r) & dec_i_valid & dec_jalr & dec_jalr_rs1xn & ((~jalr_rs1xn_dep) | jalr_rs1xn_dep_ir_clr);
    wire    rs1xn_rdrf_clr  =   rs1xn_rdrf_r;
    wire    rs1xn_rdrf_ena  =   rs1xn_rdrf_set | rs1xn_rdrf_clr;
    wire    rs1xn_rdrf_nxt  =   rs1xn_rdrf_set | (~rs1xn_rdrf_clr);

    sirv_gnrl_dfflr #(1) rs1xn_rdrf_dfflrs(rs1xn_rdrf_ena, rs1xn_rdrf_nxt, rs1xn_rdrf_r, clk, rst);

    assign  bpu2rf_rs1_ena  =   rs1xn_rdrf_set;
    assign  bpu_wait        =   jalr_rs1x1_dep | jalr_rs1xn_dep | rs1xn_rdrf_set;
    assign  prdt_pc_add_op1 =   dec_jal ? pc[`PC_SIZE-1:0]
                              : (dec_jalr & dec_jalr_rs1x0) ? `PC_SIZE'b0
                              : (dec_jalr & dec_jalr_rs1x1) ? rf2bpu_x1[`PC_SIZE-1:0]
                              : rf2bpu_rs1[`PC_SIZE-1:0];
    assign  prdt_pc_add_op2 =   dec_bjp_imm[`PC_SIZE-1:0];
endmodule
