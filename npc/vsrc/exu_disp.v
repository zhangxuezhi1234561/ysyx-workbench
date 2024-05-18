`include    "defines.v"
module  exu_disp(
    input       disp_i_valid,   //
    output      disp_i_ready,   //disp_o_alu_ready

    input       disp_i_rs1x0,
    input       disp_i_rs2x0,
    input       disp_i_rs1en,
    input       disp_i_rs2en,
    input       [`RFIDX_WIDTH-1:0]  disp_i_rs1idx,
    input       [`RFIDX_WIDTH-1:0]  disp_i_rs2idx,
    input       [`XLEN-1:0]         disp_i_rs1,
    input       [`XLEN-1:0]         disp_i_rs2,
    input                           disp_i_rdwen,
    input       [`RFIDX_WIDTH-1:0]  disp_i_rdidx,
    input       [`DECINFO_WIDTH-1:0]    disp_i_info,
    input       [`XLEN-1:0]         disp_i_imm,
    input       [`PC_SIZE-1:0]      disp_i_pc,
    
    output                          disp_o_alu_valid,   // similar to input disp_i_valid
    input                           disp_o_alu_ready,

    output      [`XLEN-1:0]         disp_o_alu_rs1,
    output      [`XLEN-1:0]         disp_o_alu_rs2,
    output                          disp_o_alu_rdwen,
    output      [`RFIDX_WIDTH-1:0]  disp_o_alu_rdidx,
    output      [`DECINFO_WIDTH-1:0]    disp_o_alu_info,
    output      [`XLEN-1:0]         disp_o_alu_imm,
    output      [`PC_SIZE-1:0]      disp_o_alu_pc
);

    wire    disp_i_ready_pos    =   disp_o_alu_ready;
    wire    disp_i_valid_pos;
    assign  disp_o_alu_valid    =   disp_i_valid_pos;
    assign  disp_i_valid_pos    =   disp_i_valid;
    assign  disp_i_ready        =   disp_i_ready_pos;

    wire    [`XLEN-1:0] disp_i_rs1_msked = disp_i_rs1 & {`XLEN{~disp_i_rs1x0}};
    wire    [`XLEN-1:0] disp_i_rs2_msked = disp_i_rs2 & {`XLEN{~disp_i_rs2x0}};
    assign  disp_o_alu_rs1  =   disp_i_rs1_msked;
    assign  disp_o_alu_rs2  =   disp_i_rs2_msked;
    assign  disp_o_alu_rdwen =  disp_i_rdwen;
    assign  disp_o_alu_rdidx =  disp_i_rdidx;
    assign  disp_o_alu_info  =  disp_i_info;

    assign  disp_o_alu_imm  =   disp_i_imm;
    assign  disp_o_alu_pc   =   disp_i_pc;

endmodule
