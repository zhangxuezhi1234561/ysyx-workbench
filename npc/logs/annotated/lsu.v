//      // verilator_coverage annotation
        `include "defines.v"
        
        module  lsu(
%000000     output                      lsu_o_valid,
%000000     input                       lsu_o_ready,
%000001     output  [`XLEN-1:0]         lsu_o_wbck_wdat,
%000000     output                      lsu_o_cmt_ld,
%000001     output                      lsu_o_cmt_st,
        
%000006     input                       agu_icb_cmd_valid,      // Handshake valid
%000006     output                      agu_icb_cmd_ready,      // Handshake ready
%000001     input   [`ADDR_SIZE-1:0]    agu_icb_cmd_addr,
%000001     input                       agu_icb_cmd_read,
%000002     input   [`XLEN-1:0]         agu_icb_cmd_wdata,
%000005     input   [`XLEN/8-1:0]       agu_icb_cmd_wmask,
        
%000001     output  reg [`XLEN-1:0]         agu_icb_rsp_rdata
        );
        
        import "DPI-C" function int pmem_read(input int raddr, input int len);
        import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);
        
%000001 always @(*) begin
%000001     agu_icb_rsp_rdata = 0;
%000009     if(agu_icb_cmd_valid) begin
%000009         agu_icb_rsp_rdata = pmem_read(agu_icb_cmd_addr, 4);
%000002         if(agu_icb_cmd_read == 1'b0) begin
%000007             pmem_write(agu_icb_cmd_addr, agu_icb_cmd_wdata, agu_icb_cmd_wmask);
                end
            end
        
        end
        
        assign  agu_icb_cmd_ready = agu_icb_cmd_valid;
        
        assign  lsu_o_valid       = 1'b1;
        
        endmodule
        
