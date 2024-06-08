//      // verilator_coverage annotation
        `include "defines.v"
        
        module  exu_alu_bjp(
%000005     input   bjp_i_valid,
%000004     output  bjp_i_ready,
        
%000001     input   [`XLEN-1:0] bjp_i_rs1,
%000002     input   [`XLEN-1:0] bjp_i_rs2,
%000002     input   [`XLEN-1:0] bjp_i_imm,
%000001     input   [`PC_SIZE-1:0]  bjp_i_pc,
%000001     input   [`DECINFO_BJP_WIDTH-1:0]    bjp_i_info,
        
%000005     output  bjp_o_valid,
%000004     input   bjp_o_ready,
        
%000002     output  [`XLEN-1:0] bjp_o_wbck_wdat,
        
%000004     output              bjp_o_cmt_bjp,
%000004     output              bjp_o_cmt_prdt,
        
%000000     output  [`XLEN-1:0] bjp_req_alu_op1,
%000001     output  [`XLEN-1:0] bjp_req_alu_op2,
%000004     output              bjp_req_alu_add,
        
%000002     input   [`XLEN-1:0] bjp_req_alu_add_res
            
        );
        
%000004     wire    jump    =   bjp_i_info[`DECINFO_BJP_JUMP];
%000004     wire    bjp_i_bprdt     =   bjp_i_info[`DECINFO_BJP_BPRDT];
        
%000004     wire    wbck_link       =   jump;
        
            assign  bjp_req_alu_op1 =   wbck_link ?
                                        bjp_i_pc
                                      : bjp_i_rs1;
            assign  bjp_req_alu_op2 =   wbck_link ?
                                        `XLEN'd4
                                      : bjp_i_rs2;
                                         
            assign  bjp_o_cmt_bjp   =   jump;
        
            assign  bjp_req_alu_add =   wbck_link;
        
            assign  bjp_o_valid     =   bjp_i_valid;
            assign  bjp_i_ready     =   bjp_o_ready;
        
            assign  bjp_o_cmt_prdt  =   bjp_i_bprdt;
            assign  bjp_o_wbck_wdat =   bjp_req_alu_add_res;
        
        endmodule
        
        
