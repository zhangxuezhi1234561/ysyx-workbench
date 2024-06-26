//      // verilator_coverage annotation
        `include "defines.v"
        
        module  exu_wbck(
            // from ALU module
%000005     input   alu_wbck_i_valid,
%000000     output  alu_wbck_i_ready,
%000001     input   [`XLEN-1:0] alu_wbck_i_wdat,
%000001     input   [`RFIDX_WIDTH-1:0]  alu_wbck_i_rdidx,
        
%000005     output  rf_wbck_o_ena,
%000001     output  [`XLEN-1:0] rf_wbck_o_wdat,     // similar to input wdat
%000001     output  [`RFIDX_WIDTH-1:0]  rf_wbck_o_rdidx     // similar to input
        );
        
%000005     wire    wbck_sel_alu = alu_wbck_i_valid;
        
%000000     wire    rf_wbck_o_ready = 1'b1;     // Regfile is always ready to be write
        
%000000     wire    wbck_i_ready;
%000005     wire    wbck_i_valid;
%000001     wire    [`FLEN-1:0] wbck_i_wdat;
%000001     wire    [`RFIDX_WIDTH-1:0] wbck_i_rdidx;
        
            assign  alu_wbck_i_ready    =   wbck_i_ready;
            assign  wbck_i_valid    =   alu_wbck_i_valid;
        
            assign  wbck_i_wdat     =   alu_wbck_i_wdat;
            assign  wbck_i_rdidx    =   alu_wbck_i_rdidx;
        
            assign  wbck_i_ready = rf_wbck_o_ready;
%000005     wire    rf_wbck_o_valid = wbck_i_valid;
        
%000005     wire    wbck_o_ena  =   rf_wbck_o_valid & rf_wbck_o_ready;
        
            assign  rf_wbck_o_ena   =   wbck_o_ena;
            assign  rf_wbck_o_wdat  =   wbck_i_wdat[`XLEN-1:0];
            assign  rf_wbck_o_rdidx =   wbck_i_rdidx;
        
        endmodule
        
