//      // verilator_coverage annotation
        `include "defines.v"
        
        module exu_longpwbck(
%000000     input                       lsu_wbck_i_valid,
%000000     output                      lsu_wbck_i_ready,
%000001     input   [`XLEN-1:0]         lsu_wbck_i_wdat,
%000000     input                       lsu_cmt_i_ld,
%000001     input                       lsu_cmt_i_st,
        
%000005     output                      longp_wbck_o_valid,
%000000     input                       longp_wbck_o_ready,
%000001     output  [`FLEN-1:0]         longp_wbck_o_wdat,
%000001     output  [`RFIDX_WIDTH-1:0]  longp_wbck_o_rdidx,
        
%000001     output                      longp_excp_o_valid,
%000000     input                       longp_excp_o_ready,
%000000     output                      longp_excp_o_ld,
%000001     output                      longp_excp_o_st,
%000001     output  [`PC_SIZE-1:0]      longp_excp_o_pc,
        
%000000     output                      oitf_ret_ena,
%000005     input                       oitf_ret_rdwen,
%000001     input   [`RFIDX_WIDTH-1:0]  oitf_ret_rdidx
        
        );
        
%000000 wire    wbck_ready4lsu  =   1'b1;
%000000 wire    wbck_sel_lsu    =   lsu_wbck_i_valid & wbck_ready4lsu;
        
        assign  {
                 longp_excp_o_ld,
                 longp_excp_o_st    }   =
                    ({2{wbck_sel_lsu}} & 
                     {
                        lsu_cmt_i_ld,
                        lsu_cmt_i_st
                     })
                     ;
        
%000000 wire    wbck_i_ready;
%000000 wire    wbck_i_valid;
%000001 wire    [`FLEN-1:0]         wbck_i_wdat;
%000001 wire    [`RFIDX_WIDTH-1:0]  wbck_i_rdidx;
%000005 wire                        wbck_i_rdwen;
        
        assign  lsu_wbck_i_ready    =   wbck_ready4lsu & wbck_i_ready;
        
        assign  wbck_i_valid        =   ({1{wbck_sel_lsu}} & lsu_wbck_i_valid);
        
%000001 wire    [`FLEN-1:0] lsu_wbck_i_wdat_exd =   {{`FLEN-`XLEN{1'b0}},lsu_wbck_i_wdat};
        
        assign  wbck_i_wdat =   ({`FLEN{wbck_sel_lsu}} & lsu_wbck_i_wdat_exd);
        
        assign  wbck_i_rdidx    =   oitf_ret_rdidx;
        assign  wbck_i_rdwen    =   oitf_ret_rdwen;
        
%000005 wire    need_wbck       =   wbck_i_rdwen;
        
        assign  wbck_i_ready    =   
            (need_wbck ? longp_wbck_o_ready : 1'b1);
        
        assign  longp_wbck_o_valid = need_wbck & wbck_i_valid;
        
        assign  longp_wbck_o_wdat   =   wbck_i_wdat;
        
        assign  longp_wbck_o_rdidx  =   wbck_i_rdidx;
        
        assign  oitf_ret_ena        =   wbck_i_valid & wbck_i_ready;
        
        endmodule
        
