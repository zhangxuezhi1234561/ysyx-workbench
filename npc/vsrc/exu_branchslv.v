`include "defines.v"

module  exu_branchslv(
    input   clk,
    input   rst,

    input   cmt_i_valid,
    output  cmt_i_ready,

    input   cmt_i_bjp,
    input   cmt_i_bjp_prdt,
    input   [`PC_SIZE-1:0]  cmt_i_pc,
    input   [`XLEN-1:0]     cmt_i_imm
);

    //wire    cmt_i_is_branch = cmt_i_bjp;
    assign  cmt_i_ready     = 1'b1;//(~cmt_i_is_branch);

endmodule

