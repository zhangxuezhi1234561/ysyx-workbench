`include "defines.v"

module  lsu(
    output                      lsu_o_valid,
    input                       lsu_o_ready,
    output  [`XLEN-1:0]         lsu_o_wbck_wdat,
    output                      lsu_o_cmt_ld,
    output                      lsu_o_cmt_st,

    input                       agu_icb_cmd_valid,      // Handshake valid
    output                      agu_icb_cmd_ready,      // Handshake ready
    input   [`ADDR_SIZE-1:0]    agu_icb_cmd_addr,
    input                       agu_icb_cmd_read,
    input   [`XLEN-1:0]         agu_icb_cmd_wdata,
    input   [`XLEN/8-1:0]       agu_icb_cmd_wmask,

    output  reg [`XLEN-1:0]         agu_icb_rsp_rdata
);

import "DPI-C" function int pmem_read(input int raddr, input int len);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);

always @(*) begin
    agu_icb_rsp_rdata = 0;
    if(agu_icb_cmd_valid) begin
        agu_icb_rsp_rdata = pmem_read(agu_icb_cmd_addr, 4);
        if(agu_icb_cmd_read == 1'b0) begin
            pmem_write(agu_icb_cmd_addr, agu_icb_cmd_wdata, agu_icb_cmd_wmask);
        end
    end

end

assign  agu_icb_cmd_ready = agu_icb_cmd_valid;

assign  lsu_o_valid       = 1'b1;

endmodule
