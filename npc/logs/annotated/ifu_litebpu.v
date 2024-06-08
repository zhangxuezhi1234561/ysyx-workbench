//      // verilator_coverage annotation
        `include "defines.v"
        
        module  ifu_litebpu(
 000060     input   clk,
%000003     input   rst,
        
%000001     input   [`PC_SIZE-1:0]  pc,
        
%000009     input   dec_jal,
%000001     input   dec_jalr,
        
%000004     input   [`XLEN-1:0]         dec_bjp_imm,
%000002     input   [`RFIDX_WIDTH-1:0]  dec_jalr_rs1idx,
        
%000002     output  bpu_wait,
%000006     output  prdt_taken,
%000002     output  [`PC_SIZE-1:0]      prdt_pc_add_op1,
%000004     output  [`PC_SIZE-1:0]      prdt_pc_add_op2,
        
%000000     input   dec_i_valid,
        
%000001     output  bpu2rf_rs1_ena,
%000003     input   ir_valid_clr,
%000000     input   [`XLEN-1:0]         rf2bpu_x1,
%000001     input   [`XLEN-1:0]         rf2bpu_rs1
        );
        
            assign  prdt_taken      =   (dec_jal | dec_jalr);
%000008     wire    dec_jalr_rs1x0  =   (dec_jalr_rs1idx == `RFIDX_WIDTH'd0);
%000003     wire    dec_jalr_rs1x1  =   (dec_jalr_rs1idx == `RFIDX_WIDTH'd1);
%000007     wire    dec_jalr_rs1xn  =   (~dec_jalr_rs1x0) & (~dec_jalr_rs1x1);
        
%000002     wire    jalr_rs1x1_dep  =   dec_i_valid & dec_jalr & dec_jalr_rs1x1;
%000001     wire    jalr_rs1xn_dep  =   dec_i_valid & dec_jalr & dec_jalr_rs1xn;
        
%000001     wire    jalr_rs1xn_dep_ir_clr   =   jalr_rs1xn_dep & ir_valid_clr;
        
%000000     wire    rs1xn_rdrf_r;
%000001     wire    rs1xn_rdrf_set  =   (~rs1xn_rdrf_r) & dec_i_valid & dec_jalr & dec_jalr_rs1xn & ((~jalr_rs1xn_dep) | jalr_rs1xn_dep_ir_clr);
%000000     wire    rs1xn_rdrf_clr  =   rs1xn_rdrf_r;
%000000     wire    rs1xn_rdrf_ena  =   rs1xn_rdrf_set | rs1xn_rdrf_clr;
%000000     wire    rs1xn_rdrf_nxt  =   rs1xn_rdrf_set | (~rs1xn_rdrf_clr);
        
            sirv_gnrl_dfflr #(1) rs1xn_rdrf_dfflrs(rs1xn_rdrf_ena, rs1xn_rdrf_nxt, rs1xn_rdrf_r, clk, rst);
        
            assign  bpu2rf_rs1_ena  =   rs1xn_rdrf_set;
            assign  bpu_wait        =   jalr_rs1x1_dep | jalr_rs1xn_dep | rs1xn_rdrf_set;
            assign  prdt_pc_add_op1 =   dec_jal ? pc[`PC_SIZE-1:0]
                                      : (dec_jalr & dec_jalr_rs1x0) ? `PC_SIZE'b0
                                      : (dec_jalr & dec_jalr_rs1x1) ? rf2bpu_x1[`PC_SIZE-1:0]
                                      : rf2bpu_rs1[`PC_SIZE-1:0];
            assign  prdt_pc_add_op2 =   dec_bjp_imm[`PC_SIZE-1:0];
        endmodule
        
