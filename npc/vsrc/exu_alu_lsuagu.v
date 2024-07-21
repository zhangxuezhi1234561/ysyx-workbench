`include "defines.v"

module exu_alu_lsuagu(
    input   agu_i_valid,
    output  agu_i_ready,

    input   [`XLEN-1:0] agu_i_rs1,
    input   [`XLEN-1:0] agu_i_rs2,
    input   [`XLEN-1:0] agu_i_imm,
    input   [`DECINFO_AGU_WIDTH-1:0]    agu_i_info,

    output              agu_i_longpipe,

    // The AGU write-back/commit Interface
    output  agu_o_valid,
    input   agu_o_ready,
    output  [`XLEN-1:0] agu_o_wbck_wdat,
    output  agu_o_cmt_ld,
    output  agu_o_cmt_stamo,

    // The operands and info to ALU
    output  [`XLEN-1:0] agu_req_alu_op1,
    output  [`XLEN-1:0] agu_req_alu_op2,
    output  agu_req_alu_add,
    input   [`XLEN-1:0] agu_req_alu_res,

    // The ICB Interface to LSU

    output                      agu_icb_cmd_valid,
    input                       agu_icb_cmd_ready,
    output  [`ADDR_SIZE-1:0]    agu_icb_cmd_addr,
    output                      agu_icb_cmd_read,
    output  [`XLEN-1:0]         agu_icb_cmd_wdata,
    output  [`XLEN/8-1:0]       agu_icb_cmd_wmask,

    input   [`XLEN-1:0]         agu_icb_rsp_rdata
);
    wire    agu_i_load      =   agu_i_info[`DECINFO_AGU_LOAD];
    wire    agu_i_store     =   agu_i_info[`DECINFO_AGU_STORE];

    wire    [1:0] agu_i_size    =   agu_i_info[`DECINFO_AGU_SIZE];
    wire          agu_i_usign   =   agu_i_info[`DECINFO_AGU_USIGN];


    wire    agu_icb_cmd_hsked   =   agu_icb_cmd_valid & agu_icb_cmd_ready;


    wire    agu_i_size_b        =   (agu_i_size == 2'b00);
    wire    agu_i_size_hw       =   (agu_i_size == 2'b01);
    wire    agu_i_size_w        =   (agu_i_size == 2'b10);

    // localparam      ICB_STATE_WIDTH =   4;          //not used
    // localparam      ICB_STATE_IDLE  =   4'b0;       //not used

    wire    agu_i_addr_unalgn   = 
                    (agu_i_size_hw & agu_icb_cmd_addr[0])
                  | (agu_i_size_w  & (|agu_icb_cmd_addr[1:0]));

    wire    agu_addr_unalgn     =   agu_i_addr_unalgn & agu_i_load;

    wire    agu_i_unalgnld      =   (agu_addr_unalgn & agu_i_load);

    wire    agu_i_unalgnst      =   agu_addr_unalgn  & agu_i_store;

    wire    agu_i_unalgnldst    =   agu_i_unalgnld   | agu_i_unalgnst;

    wire    agu_i_algnld        =   (~agu_addr_unalgn) & agu_i_load;

    wire    agu_i_algnst        =   (~agu_addr_unalgn) & agu_i_store;

    wire    agu_i_algnldst      =   (agu_i_algnld    | agu_i_algnst);  

    wire    icb_sta_is_idle;
    assign  icb_sta_is_idle     =   1'b1;

    assign  agu_req_alu_add     =   icb_sta_is_idle;

    assign  agu_req_alu_op1     =   icb_sta_is_idle     ? agu_i_rs1 : `XLEN'b0;

    wire    agu_i_ofst0         =   0;
    wire    [`XLEN-1:0] agu_addr_gen_op2    =   agu_i_ofst0 ? `XLEN'b0 : agu_i_imm;
    assign  agu_req_alu_op2     =   icb_sta_is_idle     ? agu_addr_gen_op2 : `XLEN'b0;
    
    assign  agu_i_ready         =   agu_o_ready & agu_icb_cmd_ready;

    assign  agu_i_longpipe      =   agu_i_algnldst;

    assign  agu_o_valid         =   agu_i_valid & agu_i_algnldst;

    assign  agu_o_wbck_wdat     =   {`XLEN{1'b0}};

    assign  agu_o_cmt_ld        =   agu_i_load;
    assign  agu_o_cmt_stamo     =   agu_i_store;

    assign  agu_icb_cmd_addr    =   agu_req_alu_res[`ADDR_SIZE-1:0];

    assign  agu_icb_cmd_valid   =
                  (agu_i_valid) & agu_o_ready;

    assign  agu_icb_cmd_read    =   agu_i_load;

    wire    [`XLEN-1:0] algnst_wdata = 
                ({`XLEN{agu_i_size_b}}  & {4{agu_i_rs2[7:0]}})
              | ({`XLEN{agu_i_size_hw}} & {2{agu_i_rs2[15:0]}})
              | ({`XLEN{agu_i_size_w}}  & {1{agu_i_rs2[31:0]}});
    wire    [`XLEN/8-1:0]   algnst_wmask    =   
                ({`XLEN/8{agu_i_size_b}}  & (4'b0001 << agu_icb_cmd_addr[1:0])
              | ({`XLEN/8{agu_i_size_hw}} & (4'b0011 << {agu_icb_cmd_addr[1],1'b0}))
              | ({`XLEN/8{agu_i_size_w}}  & (4'b1111)) 
                );

    assign  agu_icb_cmd_wdata   =   algnst_wdata;
    assign  agu_icb_cmd_wmask   =   algnst_wmask;

endmodule
