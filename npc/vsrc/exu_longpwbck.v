`include "defines.v"

module exu_longpwbck(
    input                       lsu_wbck_i_valid,
    output                      lsu_wbck_i_ready,
    input   [`XLEN-1:0]         lsu_wbck_i_wdat,
    input                       lsu_cmt_i_ld,
    input                       lsu_cmt_i_st,

    output                      longp_wbck_o_valid,
    input                       longp_wbck_o_ready,
    output  [`FLEN-1:0]         longp_wbck_o_wdat,
    output  [`RFIDX_WIDTH-1:0]  longp_wbck_o_rdidx,

    output                      longp_excp_o_valid,
    input                       longp_excp_o_ready,
    output                      longp_excp_o_ld,
    output                      longp_excp_o_st,
    output  [`PC_SIZE-1:0]      longp_excp_o_pc,

    output                      oitf_ret_ena,
    input                       oitf_ret_rdwen,
    input   [`RFIDX_WIDTH-1:0]  oitf_ret_rdidx

);

wire    wbck_ready4lsu  =   1'b1;
wire    wbck_sel_lsu    =   lsu_wbck_i_valid & wbck_ready4lsu;

assign  {
         longp_excp_o_ld,
         longp_excp_o_st    }   =
            ({2{wbck_sel_lsu}} & 
             {
                lsu_cmt_i_ld,
                lsu_cmt_i_st
             })
             ;

wire    wbck_i_ready;
wire    wbck_i_valid;
wire    [`FLEN-1:0]         wbck_i_wdat;
wire    [`RFIDX_WIDTH-1:0]  wbck_i_rdidx;
wire                        wbck_i_rdwen;

assign  lsu_wbck_i_ready    =   wbck_ready4lsu & wbck_i_ready;

assign  wbck_i_valid        =   ({1{wbck_sel_lsu}} & lsu_wbck_i_valid);

wire    [`FLEN-1:0] lsu_wbck_i_wdat_exd =   {{`FLEN-`XLEN{1'b0}},lsu_wbck_i_wdat};

assign  wbck_i_wdat =   ({`FLEN{wbck_sel_lsu}} & lsu_wbck_i_wdat_exd);

assign  wbck_i_rdidx    =   oitf_ret_rdidx;
assign  wbck_i_rdwen    =   oitf_ret_rdwen;

wire    need_wbck       =   wbck_i_rdwen;

assign  wbck_i_ready    =   
    (need_wbck ? longp_wbck_o_ready : 1'b1);

assign  longp_wbck_o_valid = need_wbck & wbck_i_valid;

assign  longp_wbck_o_wdat   =   wbck_i_wdat;

assign  longp_wbck_o_rdidx  =   wbck_i_rdidx;

assign  oitf_ret_ena        =   wbck_i_valid & wbck_i_ready;

endmodule
