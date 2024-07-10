`include "defines.v"

module  lsu(
    output                      lsu_o_valid,
    input                       lsu_o_ready,
    output  [`XLEN-1:0]         lsu_o_wbck_wdat,
    output                      lsu_o_cmt_ld,
    output                      lsu_o_cmt_st,

    input   [`ADDR_SIZE-1:0]    agu_icb_cmd_addr,
    input                       agu_icb_cmd_read,
    input   [`XLEN-1:0]         agu_icb_cmd_wdata,
    input   [`XLEN/8-1:0]       agu_icb_cmd_wmask
);

endmodule
