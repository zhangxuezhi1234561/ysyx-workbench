//      // verilator_coverage annotation
        `include "defines.v"
        
        module  exu_branchslv(
 000060     input   clk,
%000003     input   rst,
        
%000003     input   cmt_i_valid,
%000000     output  cmt_i_ready,
        
%000007     input   cmt_i_bjp,
%000007     input   cmt_i_bjp_prdt,
%000001     input   [`PC_SIZE-1:0]  cmt_i_pc,
%000001     input   [`XLEN-1:0]     cmt_i_imm
        );
        
            //wire    cmt_i_is_branch = cmt_i_bjp;
            assign  cmt_i_ready     = 1'b1;//(~cmt_i_is_branch);
        
        endmodule
        
        
