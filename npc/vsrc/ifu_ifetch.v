`include "defines.v"

// generate next pc and bus request

module ifu_ifetch(
    input   clk,
    input   rst,
    input   [`PC_SIZE-1:0] pc_rtvec,    //reset vector
    
    //  IFetch REQ channel
    output  ifu_req_valid,      //requst
    input   ifu_req_ready,
    output  [`PC_SIZE-1:0]  ifu_req_pc,     // request pc

    //  IFetch RSP channel
    input   ifu_rsp_valid,
    output  ifu_rsp_ready,
    input   [`INSTR_SIZE-1:0]   ifu_rsp_instr,  // response instruction

    // The IR stage to EXU interface
    output  [`INSTR_SIZE-1:0]   ifu_o_ir,
    output  [`PC_SIZE-1:0]      ifu_o_pc,
    output  [`RFIDX_WIDTH-1:0]  ifu_o_rs1idx,
    output  [`RFIDX_WIDTH-1:0]  ifu_o_rs2idx,
    output  ifu_o_valid,
    input   ifu_o_ready,
    output  ifu_o_pc_vld
);

    wire    ifu_req_hsked = (ifu_req_valid & ifu_req_ready);
    wire    ifu_rsp_hsked = (ifu_rsp_valid & ifu_rsp_ready);
    wire    ifu_ir_o_hsked = (ifu_o_valid & ifu_o_ready);

////////////////////////////////////////////////////////////////////////////////////
    wire    reset_flag_r/*verilator public*/;
    //Reg #(1, 1'b0) reset_flag_reg (clk, rst, 1'b1, reset_flag_r, ~rst);
    sirv_gnrl_dffrs #(1) reset_flag_dffrs (1'b0, reset_flag_r, clk, rst);
    
    wire    reset_req_r;
    wire    reset_req_set = (~reset_req_r) & reset_flag_r;      // reset, value is 1
    wire    reset_req_clr = reset_req_r    & ifu_req_hsked;     // reset, value is 0&1 = 0
    wire    reset_req_ena = reset_req_set  | reset_req_clr;     // reset, value is 1|0 = 1
    wire    reset_req_nxt = reset_req_set  | (~reset_req_clr);  // reset, value is 1|1 = 1

    //Reg #(1, 0) reset_req_reg (clk, rst, reset_req_nxt, reset_req_r, rst && reset_req_ena);
    sirv_gnrl_dfflr #(1) reset_req_dfflr(reset_req_ena, reset_req_nxt, reset_req_r, clk, rst);
    wire    ifu_reset_req = reset_req_r;    
/////////////////////////////////////////////////////////////////////////////////////
    // The IR register to be used in EXU for decoding
    wire    ir_valid_set;
    wire    ir_valid_ena;
    wire    ir_valid_clr;
    wire    ir_valid_nxt;
    wire    ir_valid_r;

    wire    ir_pc_vld_clr;
    wire    ir_pc_vld_ena;
    wire    ir_pc_vld_set;
    wire    ir_pc_vld_r;
    wire    ir_pc_vld_nxt;

    wire    ifu_ir_i_ready;

    wire    pc_newpend_r;
//------------------------------------------------//
    wire    out_flag_set    =   ifu_req_hsked;
    wire    out_flag_clr;
    wire    out_flag_r;
   
    assign  out_flag_clr    =   ifu_rsp_hsked;
    wire    out_flag_ena    =   out_flag_set | out_flag_clr;
    wire    out_flag_nxt    =   out_flag_set | (~out_flag_clr); 
    Reg #(1, 1'b0) out_flag_reg(clk, rst, out_flag_nxt, out_flag_r, out_flag_ena);
//------------------------------------------------//
    wire    new_req_condi   =   (~out_flag_r) | out_flag_clr;
    
//---------------------------------------------------//
    assign  ir_valid_set = ifu_rsp_hsked;   // memory ok
    assign  ir_pc_vld_set = ifu_ir_i_ready & pc_newpend_r;

    assign  ir_valid_clr = ifu_ir_o_hsked;  //
    assign  ir_pc_vld_clr = ir_valid_clr;

    assign  ir_valid_ena = ir_valid_set | ir_valid_clr;
    assign  ir_valid_nxt = ir_valid_set | (~ir_valid_clr);
    //Reg #(1, 1'b0) ir_valid_reg(clk, rst, ir_valid_nxt, ir_valid_r, ir_valid_ena);
    sirv_gnrl_dfflr #(1) ir_valid_dfflr (ir_valid_ena, ir_valid_nxt, ir_valid_r, clk, rst);
 
    assign  ir_pc_vld_ena = ir_pc_vld_set | ir_pc_vld_clr;
    assign  ir_pc_vld_nxt = ir_pc_vld_set | (~ir_pc_vld_clr);
    //Reg #(1, 1'b0) ir_pc_vld_reg(clk, rst, ir_pc_vld_nxt, ir_pc_vld_r, ir_pc_vld_ena);
    sirv_gnrl_dfflr #(1) ir_pc_vld_dfflr (ir_pc_vld_ena, ir_pc_vld_nxt, ir_pc_vld_r, clk, rst);

    assign  ifu_o_valid  = ir_valid_r;
    assign  ifu_o_pc_vld = ir_pc_vld_r;  

    assign  ifu_ir_i_ready  = (~ir_valid_r) | ir_valid_clr;
//------------------------------------------------------//
    wire    ifu_new_req         =   (~reset_flag_r);
    wire    ifu_req_valid_pre   =   ifu_reset_req | ifu_new_req;
    assign  ifu_req_valid       =   ifu_req_valid_pre & new_req_condi;  

    wire    ifu_rsp2ir_ready    =   ifu_ir_i_ready & ifu_req_ready;
    assign  ifu_rsp_ready       =   ifu_rsp2ir_ready;



//------------------------------------------------------//

    wire    [`PC_SIZE-1:0]  pc_r;
    wire    [`PC_SIZE-1:0] pc_incr_ofst = `PC_SIZE'd4;  //increase value of pc
    wire    [`PC_SIZE-1:0] pc_add_op1 = ifu_reset_req ? pc_rtvec : pc_r;    //pc_r is current pc
    wire    [`PC_SIZE-1:0] pc_add_op2 = ifu_reset_req ? `PC_SIZE'b0 : pc_incr_ofst;
    wire    [`PC_SIZE-1:0] pc_nxt;
    wire    [`PC_SIZE-1:0] pc_nxt_pre;

    assign  pc_nxt_pre  =   pc_add_op1 + pc_add_op2;
    assign  pc_nxt = {pc_nxt_pre[`PC_SIZE-1:1], 1'b0};      //bianary aligned

    wire    pc_ena = ifu_req_hsked;
    //Reg #(`PC_SIZE, `PC_SIZE'b0) pc_reg(clk, rst, pc_nxt, pc_r, pc_ena);
    sirv_gnrl_dfflr #(`PC_SIZE) pc_dfflr (pc_ena, pc_nxt, pc_r, clk, rst);
    assign  ifu_req_pc = pc_nxt;



    wire    [`PC_SIZE-1:0]  ifu_pc_nxt = pc_r;
    wire    [`PC_SIZE-1:0]  ifu_pc_r;
    wire                    ir_pc_vld_set;
    assign  ir_pc_vld_set = ifu_ir_i_ready;
    //Reg #(`PC_SIZE, `PC_SIZE'b0) ifu_pc_reg(clk, rst, ifu_pc_nxt, ifu_pc_r, ir_pc_vld_set);
    sirv_gnrl_dfflr #(`PC_SIZE) ifu_pc_dfflr(ir_pc_vld_set, ifu_pc_nxt, ifu_pc_r, clk, rst);
    assign  ifu_o_pc    =   ifu_pc_r;

//-------------------------------------------------------//
    wire    pc_newpend_set  =   pc_ena;
    wire    pc_newpend_clr  =   ir_pc_vld_set;
    wire    pc_newpend_ena  =   pc_newpend_set | pc_newpend_clr;
    wire    pc_newpend_nxt  =   pc_newpend_set | (~pc_newpend_clr);

    //Reg #(1, 1'b0) pc_newpend_reg(clk, rst, pc_newpend_nxt, pc_newpend_r, pc_newpend_ena);
    sirv_gnrl_dfflr #(1) pc_newpend_dfflr (pc_newpend_ena, pc_newpend_nxt, pc_newpend_r, clk, rst);
//-------------------------------------------------------//




    //------------ output ifu_o_rs1idx, ifu_o_rs2idx -----------//

    // IFU-IR loaded with the returned instruction
    wire    minidec_rs1en;
    wire    minidec_rs2en;
    wire    [`RFIDX_WIDTH-1:0]  minidec_rs1idx;
    wire    [`RFIDX_WIDTH-1:0]  minidec_rs2idx;

    wire    ir_rs1idx_ena = minidec_rs1en;
    wire    ir_rs2idx_ena = minidec_rs2en;
    wire    [`RFIDX_WIDTH-1:0]  ir_rs1idx_nxt   =   minidec_rs1idx;
    wire    [`RFIDX_WIDTH-1:0]  ir_rs2idx_nxt   =   minidec_rs2idx;

    wire    [`RFIDX_WIDTH-1:0]  ir_rs1idx_r;
    wire    [`RFIDX_WIDTH-1:0]  ir_rs2idx_r;


    // Reg #(`RFIDX_WIDTH, `RFIDX_WIDTH'b0) ir_rs1idx_reg (clk, rst, ir_rs1idx_nxt, ir_rs1idx_r, ir_rs1idx_ena);
    // Reg #(`RFIDX_WIDTH, `RFIDX_WIDTH'b0) ir_rs2idx_reg (clk, rst, ir_rs2idx_nxt, ir_rs2idx_r, ir_rs2idx_ena);
    sirv_gnrl_dfflr #(`RFIDX_WIDTH) ir_rs1idx_dfflr (ir_rs1idx_ena, ir_rs1idx_nxt, ir_rs1idx_r, clk, rst);
    sirv_gnrl_dfflr #(`RFIDX_WIDTH) ir_rs2idx_dfflr (ir_rs2idx_ena, ir_rs2idx_nxt, ir_rs2idx_r, clk, rst);

    assign  ifu_o_rs1idx = ir_rs1idx_r;
    assign  ifu_o_rs2idx = ir_rs2idx_r;

    ifu_minidec inst_ifu_minidec(
        .instr  (ifu_rsp_instr),        //input
        // output
        .dec_rs1en  (minidec_rs1en),
        .dec_rs2en  (minidec_rs2en),
        .dec_rs1idx (minidec_rs1idx),
        .dec_rs2idx (minidec_rs2idx)
    );

    wire    [`INSTR_SIZE-1:0]   ifu_ir_r;
    wire    ir_r_ena = ir_valid_set;
    wire    [`INSTR_SIZE-1:0]   ifu_ir_nxt = ifu_rsp_instr;
    //Reg #(`INSTR_SIZE, `INSTR_SIZE'b0) ifu_ir_reg (clk, rst, ifu_ir_nxt, ifu_ir_r, ir_r_ena);
    sirv_gnrl_dfflr #(`INSTR_SIZE) ifu_ir_dfflr (ir_r_ena, ifu_ir_nxt, ifu_ir_r, clk, rst);
    assign  ifu_o_ir    =   ifu_ir_r;
    
endmodule
