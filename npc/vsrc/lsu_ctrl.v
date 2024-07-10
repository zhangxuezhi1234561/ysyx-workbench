`include "defines.v"

module  lsu_ctrl(
    output  lsu_o_valid,
    input   lsu_o_ready,
    output  [`XLEN-1:0] lsu_o_wbck_wdat,
    output  lsu_o_cmt_ld,
    output  lsu_o_cmt_st,

    input   [`ADDR_SIZE-1:0]    agu_icb
    output                  agu_icb_cmd_read,

);

endmodule
