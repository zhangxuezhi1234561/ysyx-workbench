//      // verilator_coverage annotation
        `include "defines.v"
        
        module  exu_commit(
 000059     input                       clk,
%000003     input                       rst,
        
%000001     output                      commit_trap,
        
%000002     input                       alu_cmt_i_valid,
%000000     output                      alu_cmt_i_ready,
%000001     input   [`PC_SIZE-1:0]      alu_cmt_i_pc,
%000001     input   [`INSTR_SIZE-1:0]   alu_cmt_i_instr,
%000001     input                       alu_cmt_i_pc_vld,
%000001     input   [`XLEN-1:0]         alu_cmt_i_imm,
        
%000005     input                       alu_cmt_i_bjp,
%000000     input                       alu_cmt_i_ebreak,
%000005     input                       alu_cmt_i_bjp_prdt,
        
%000001     input                       alu_cmt_i_ld,
%000007     input                       alu_cmt_i_stamo,
        
%000001     output  [`XLEN-1:0]         cmt_cause,
 000013     output  [`XLEN-1:0]         endcode
        );
%000000     wire    alu_brchmis_cmt_i_ready;
        
            exu_branchslv   inst_exu_branchslv(
                .clk            (clk),
                .rst            (rst),
        
                .cmt_i_valid    (alu_cmt_i_valid),
                .cmt_i_ready    (alu_brchmis_cmt_i_ready),
        
                .cmt_i_bjp      (alu_cmt_i_bjp),
                .cmt_i_bjp_prdt (alu_cmt_i_bjp_prdt),
                .cmt_i_pc       (alu_cmt_i_pc),
                .cmt_i_imm      (alu_cmt_i_imm)
            );
        
%000000     wire            alu_excp_cmt_i_ready;
        
            exu_excp    inst_exu_excp(
                .clk            (clk),
                .rst            (rst),
        
                .commit_trap    (commit_trap),
        
                .alu_excp_i_ready   (alu_excp_cmt_i_ready),     //output
                .alu_excp_i_valid   (alu_cmt_i_valid),
                .alu_excp_i_ebreak  (alu_cmt_i_ebreak),
        
                .cmt_cause          (cmt_cause),
                .endcode            (endcode)
            );
        
            assign  alu_cmt_i_ready =   alu_excp_cmt_i_ready & alu_brchmis_cmt_i_ready;
        
        endmodule
        
