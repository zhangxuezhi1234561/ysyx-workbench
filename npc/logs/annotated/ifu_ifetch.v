//      // verilator_coverage annotation
        `include "defines.v"
        
        // generate next pc and bus request
        
        module ifu_ifetch(
 000060     input   clk,
%000003     input   rst,
        
%000002     output  [`PC_SIZE-1:0] inspect_pc,
%000001     input   [`PC_SIZE-1:0] pc_rtvec,    //reset vector
            
            //  IFetch REQ channel
%000004     output  ifu_req_valid,      //requst
%000000     input   ifu_req_ready,
%000001     output  [`PC_SIZE-1:0]  ifu_req_pc,     // request pc
        
            //  IFetch RSP channel
%000000     input   ifu_rsp_valid,
%000002     output  ifu_rsp_ready,
%000001     input   [`INSTR_SIZE-1:0]   ifu_rsp_instr,  // response instruction
        
            // The IR stage to EXU interface
%000001     output  [`INSTR_SIZE-1:0]   ifu_o_ir,
%000001     output  [`PC_SIZE-1:0]      ifu_o_pc,
%000001     output  [`RFIDX_WIDTH-1:0]  ifu_o_rs1idx,
%000001     output  [`RFIDX_WIDTH-1:0]  ifu_o_rs2idx,
%000005     output                      ifu_o_prdt_taken,
%000003     output  ifu_o_valid,
%000000     input   ifu_o_ready,
%000003     output  ifu_o_pc_vld,
        
%000000     input   [`XLEN-1:0] rf2ifu_x1,
%000001     input   [`XLEN-1:0] rf2ifu_rs1
        );
        
%000003     wire    ifu_req_hsked = (ifu_req_valid & ifu_req_ready);
%000002     wire    ifu_rsp_hsked = (ifu_rsp_valid & ifu_rsp_ready);
%000003     wire    ifu_ir_o_hsked = (ifu_o_valid & ifu_o_ready);
        
        ////////////////////////////////////////////////////////////////////////////////////
%000002     wire    reset_flag_r/*verilator public*/;
            //Reg #(1, 1'b0) reset_flag_reg (clk, rst, 1'b1, reset_flag_r, ~rst);
            sirv_gnrl_dffrs #(1) reset_flag_dffrs (1'b0, reset_flag_r, clk, rst);
            
%000004     wire    reset_req_r;
%000003     wire    reset_req_set = (~reset_req_r) & reset_flag_r;      // reset, value is 1
%000003     wire    reset_req_clr = reset_req_r    & ifu_req_hsked;     // reset, value is 0&1 = 0
%000001     wire    reset_req_ena = reset_req_set  | reset_req_clr;     // reset, value is 1|0 = 1
%000004     wire    reset_req_nxt = reset_req_set  | (~reset_req_clr);  // reset, value is 1|1 = 1
        
            //Reg #(1, 0) reset_req_reg (clk, rst, reset_req_nxt, reset_req_r, rst && reset_req_ena);
            sirv_gnrl_dfflr #(1) reset_req_dfflr(reset_req_ena, reset_req_nxt, reset_req_r, clk, rst);
%000004     wire    ifu_reset_req = reset_req_r;    
        /////////////////////////////////////////////////////////////////////////////////////
            // The IR register to be used in EXU for decoding
%000002     wire    ir_valid_set;
%000002     wire    ir_valid_ena;
%000003     wire    ir_valid_clr;
%000003     wire    ir_valid_nxt;
%000003     wire    ir_valid_r;
        
%000003     wire    ir_pc_vld_clr;
%000003     wire    ir_pc_vld_ena;
%000004     wire    ir_pc_vld_set;
%000003     wire    ir_pc_vld_r;
%000003     wire    ir_pc_vld_nxt;
        
%000001     wire    ifu_ir_i_ready;
        
%000003     wire    pc_newpend_r;
        
        
          
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
        
%000001     wire    [`INSTR_SIZE-1:0]   ifu_ir_nxt = ifu_rsp_instr;
        
%000006     wire    prdt_taken;
%000005     wire    ifu_prdt_taken_r;
            sirv_gnrl_dfflr #(1) ifu_prdt_taken_dfflr (ir_valid_set, prdt_taken, ifu_prdt_taken_r, clk, rst);
        
%000001     wire    [`INSTR_SIZE-1:0]   ifu_ir_r;
%000002     wire    ir_r_ena = ir_valid_set;
        
            //Reg #(`INSTR_SIZE, `INSTR_SIZE'b0) ifu_ir_reg (clk, rst, ifu_ir_nxt, ifu_ir_r, ir_r_ena);
            sirv_gnrl_dfflr #(`INSTR_SIZE) ifu_ir_dfflr (ir_r_ena, ifu_ir_nxt, ifu_ir_r, clk, rst);    
        
        ////////////////////////////////////////////////////////////////////////////////////////
            //------------ output ifu_o_rs1idx, ifu_o_rs2idx -----------//
        
            // IFU-IR loaded with the returned instruction
%000009     wire    minidec_rs1en;
%000006     wire    minidec_rs2en;
%000002     wire    [`RFIDX_WIDTH-1:0]  minidec_rs1idx;
%000006     wire    [`RFIDX_WIDTH-1:0]  minidec_rs2idx;
        
%000001     wire    [`RFIDX_WIDTH-1:0]  ir_rs1idx_r;
%000001     wire    [`RFIDX_WIDTH-1:0]  ir_rs2idx_r;    
%000001     wire    bpu2rf_rs1_ena;
        
%000007     wire    ir_rs1idx_ena = (minidec_rs1en & ir_valid_set) | bpu2rf_rs1_ena;
%000006     wire    ir_rs2idx_ena = ir_valid_set & minidec_rs2en;
%000002     wire    [`RFIDX_WIDTH-1:0]  ir_rs1idx_nxt   =   minidec_rs1idx;
%000006     wire    [`RFIDX_WIDTH-1:0]  ir_rs2idx_nxt   =   minidec_rs2idx;
        
            // Reg #(`RFIDX_WIDTH, `RFIDX_WIDTH'b0) ir_rs1idx_reg (clk, rst, ir_rs1idx_nxt, ir_rs1idx_r, ir_rs1idx_ena);
            // Reg #(`RFIDX_WIDTH, `RFIDX_WIDTH'b0) ir_rs2idx_reg (clk, rst, ir_rs2idx_nxt, ir_rs2idx_r, ir_rs2idx_ena);
            sirv_gnrl_dfflr #(`RFIDX_WIDTH) ir_rs1idx_dfflr (ir_rs1idx_ena, ir_rs1idx_nxt, ir_rs1idx_r, clk, rst);
            sirv_gnrl_dfflr #(`RFIDX_WIDTH) ir_rs2idx_dfflr (ir_rs2idx_ena, ir_rs2idx_nxt, ir_rs2idx_r, clk, rst);
            //--------------------------------------------------------//
        
%000002     wire    [`PC_SIZE-1:0]  pc_r; 
%000002     wire    [`PC_SIZE-1:0]  ifu_pc_nxt = pc_r;
%000001     wire    [`PC_SIZE-1:0]  ifu_pc_r;
            //Reg #(`PC_SIZE, `PC_SIZE'b0) ifu_pc_reg(clk, rst, ifu_pc_nxt, ifu_pc_r, ir_pc_vld_set);
            sirv_gnrl_dfflr #(`PC_SIZE) ifu_pc_dfflr(ir_pc_vld_set, pc_nxt, ifu_pc_r, clk, rst);    
        
            assign  ifu_o_ir    =   ifu_ir_r;
            assign  ifu_o_pc    =   ifu_pc_r;
        
            assign  ifu_o_rs1idx = ir_rs1idx_r;
            assign  ifu_o_rs2idx = ir_rs2idx_r;
            assign  ifu_o_prdt_taken    =   ifu_prdt_taken_r;
        
            assign  ifu_o_valid  = ir_valid_r;
            assign  ifu_o_pc_vld = ir_pc_vld_r;  
        
            assign  ifu_ir_i_ready  = (~ir_valid_r) | ir_valid_clr;
        
        //////////////////////////////////////////////
%000009     wire    minidec_bjp;
%000009     wire    minidec_jal;
%000001     wire    minidec_jalr;
%000004     wire    [`XLEN-1:0] minidec_bjp_imm;
%000002     wire    [`RFIDX_WIDTH-1:0]  minidec_jalr_rs1idx;
        
            ifu_minidec inst_ifu_minidec(
                .clk    (clk),
                .rst    (rst),
        
                .instr  (ifu_rsp_instr),        //input
                // output
                .dec_rs1en  (minidec_rs1en),
                .dec_rs2en  (minidec_rs2en),
                .dec_rs1idx (minidec_rs1idx),
                .dec_rs2idx (minidec_rs2idx),
        
                .dec_bjp            (minidec_bjp),
                .dec_jal            (minidec_jal),
                .dec_jalr           (minidec_jalr),
                .dec_jalr_rs1idx    (minidec_jalr_rs1idx),
                .dec_bjp_imm        (minidec_bjp_imm)
            );
        
%000002     wire    bpu_wait;
%000002     wire    [`PC_SIZE-1:0]  prdt_pc_add_op1;
%000004     wire    [`PC_SIZE-1:0]  prdt_pc_add_op2;
        
%000001     wire    [`PC_SIZE-1:0]  pc_r_final;
            sirv_gnrl_dfflr #(`PC_SIZE) pc_r_final_dfflr (pc_ena, pc_r, pc_r_final, clk, rst);
            ifu_litebpu inst_ifu_litebpu(
                .clk                (clk),                  //input
                .rst                (rst),                  //input
        
                .pc                 (pc_nxt),                 //input
                .dec_jal            (minidec_jal),          //input
                .dec_jalr           (minidec_jalr),         //input
                .dec_bjp_imm        (minidec_bjp_imm),      //input
                .dec_jalr_rs1idx    (minidec_jalr_rs1idx),  //input
                
                .bpu_wait           (bpu_wait),             //output
                .prdt_taken         (prdt_taken),           //output
                .prdt_pc_add_op1    (prdt_pc_add_op1),      //output
                .prdt_pc_add_op2    (prdt_pc_add_op2),      //output
        
                .dec_i_valid        (ifu_rsp_valid),        //input
                .ir_valid_clr       (ir_valid_clr),         //input
        
                .bpu2rf_rs1_ena     (bpu2rf_rs1_ena),       //output    
                .rf2bpu_x1          (rf2ifu_x1),            //input
                .rf2bpu_rs1         (rf2ifu_rs1)            //input
            );
        
%000000     wire    [`PC_SIZE-1:0] pc_incr_ofst = `PC_SIZE'd4;  //increase value of pc
        
%000001     wire    [`PC_SIZE-1:0] pc_nxt;
%000001     wire    [`PC_SIZE-1:0] pc_nxt_pre;    
        
%000005     wire    bjp_req = minidec_bjp & prdt_taken;
        
            // wire    [1:0] chose_pc    = bjp_req << 1 | ifu_reset_req;
%000005     wire    bjp_final;
%000001     wire    [`PC_SIZE-1:0]  prdt_pc_add_op1_final;
%000001     wire    [`PC_SIZE-1:0]  prdt_pc_add_op2_final;
        
            sirv_gnrl_dfflr #(1) bjp_final_dfflr (pc_ena, bjp_req, bjp_final, clk, rst);
            sirv_gnrl_dfflr #(`PC_SIZE) pc_op1_dfflr (pc_ena, prdt_pc_add_op1, prdt_pc_add_op1_final, clk, rst);
            sirv_gnrl_dfflr #(`PC_SIZE) pc_op2_dfflr (pc_ena, prdt_pc_add_op2, prdt_pc_add_op2_final, clk, rst);
%000001     wire    [`PC_SIZE-1:0] pc_add_op1 = 
                                                    bjp_final ? prdt_pc_add_op1_final   :
                                                    ifu_reset_req ? pc_rtvec : 
                                                                    pc_r;    //pc_r is current pc
%000001     wire    [`PC_SIZE-1:0] pc_add_op2 = 
                                                bjp_final ? prdt_pc_add_op2_final   : 
                                                ifu_reset_req ? `PC_SIZE'b0 :
                                                                 pc_incr_ofst;  
        
            assign  pc_nxt_pre  =   pc_add_op1 + pc_add_op2;
            assign  pc_nxt = {pc_nxt_pre[`PC_SIZE-1:1], 1'b0};      //bianary aligned 
        
        //------------------------------------------------------//
%000003     wire    ifu_new_req         =   (~reset_flag_r) & (~bpu_wait);
%000003     wire    ifu_req_valid_pre   =   ifu_reset_req | ifu_new_req;
        //------------------------------------------------//    
%000002     wire    out_flag_clr;
%000002     wire    out_flag_r;
%000001     wire    new_req_condi   =   (~out_flag_r) | out_flag_clr;
        
            assign  ifu_req_valid       =   ifu_req_valid_pre & new_req_condi;
        
%000002     wire    ifu_rsp2ir_ready    =   ifu_ir_i_ready & ifu_req_ready & (~bpu_wait);    
        
            assign  ifu_rsp_ready       =   ifu_rsp2ir_ready;    
        
%000003     wire    pc_ena = ifu_req_hsked; 
        
            // Reg #(`PC_SIZE, `PC_SIZE'b0) pc_reg(clk, rst, pc_nxt, pc_r, pc_ena);
            sirv_gnrl_dfflr #(`PC_SIZE) pc_dfflr (pc_ena, pc_nxt, pc_r, clk, rst);
        
            assign  inspect_pc = pc_r;
            assign  ifu_req_pc = pc_nxt;       
        
%000003     wire    out_flag_set    =   ifu_req_hsked;
            assign  out_flag_clr    =   ifu_rsp_hsked;
%000001     wire    out_flag_ena    =   out_flag_set | out_flag_clr;
%000002     wire    out_flag_nxt    =   out_flag_set | (~out_flag_clr); 
            // Reg #(1, 1'b0) out_flag_reg(clk, rst, out_flag_nxt, out_flag_r, out_flag_ena);
            sirv_gnrl_dfflr #(1) out_flag_dfflr (out_flag_ena, out_flag_nxt, out_flag_r, clk, rst);
        //------------------------------------------------//
        //-------------------------------------------------------//
%000003     wire    pc_newpend_set  =   pc_ena;
%000004     wire    pc_newpend_clr  =   ir_pc_vld_set;
%000004     wire    pc_newpend_ena  =   pc_newpend_set | pc_newpend_clr;
%000002     wire    pc_newpend_nxt  =   pc_newpend_set | (~pc_newpend_clr);
        
            //Reg #(1, 1'b0) pc_newpend_reg(clk, rst, pc_newpend_nxt, pc_newpend_r, pc_newpend_ena);
            sirv_gnrl_dfflr #(1) pc_newpend_dfflr (pc_newpend_ena, pc_newpend_nxt, pc_newpend_r, clk, rst);
        //-------------------------------------------------------/
        
        endmodule
        
