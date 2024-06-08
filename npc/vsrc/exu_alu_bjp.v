`include "defines.v"

module  exu_alu_bjp(
    input   bjp_i_valid,
    output  bjp_i_ready,

    input   [`XLEN-1:0] bjp_i_rs1,
    input   [`XLEN-1:0] bjp_i_rs2,
    input   [`XLEN-1:0] bjp_i_imm,
    input   [`PC_SIZE-1:0]  bjp_i_pc,
    input   [`DECINFO_BJP_WIDTH-1:0]    bjp_i_info,

    output  bjp_o_valid,
    input   bjp_o_ready,

    output  [`XLEN-1:0] bjp_o_wbck_wdat,

    output              bjp_o_cmt_bjp,
    output              bjp_o_cmt_prdt,

    output  [`XLEN-1:0] bjp_req_alu_op1,
    output  [`XLEN-1:0] bjp_req_alu_op2,
    output              bjp_req_alu_add,

    input   [`XLEN-1:0] bjp_req_alu_add_res
    
);

    wire    jump    =   bjp_i_info[`DECINFO_BJP_JUMP];
    wire    bjp_i_bprdt     =   bjp_i_info[`DECINFO_BJP_BPRDT];

    wire    wbck_link       =   jump;

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

