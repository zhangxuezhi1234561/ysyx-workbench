`include "defines.v"
// ifetch instruction, minidecode, update next pc

module ifu(
    input   clk,
    input   rst,

    output  [`PC_SIZE-1:0] inspect_pc, 
    input   [`PC_SIZE-1:0] pc_rtvec,        

    // The IR stage to EXU interface
    output  [`INSTR_SIZE-1:0]   ifu_o_ir,
    output  [`PC_SIZE-1:0]      ifu_o_pc,
    output  [`RFIDX_WIDTH-1:0]  ifu_o_rs1idx,
    output  [`RFIDX_WIDTH-1:0]  ifu_o_rs2idx,
    output                      ifu_o_prdt_taken,
    output  ifu_o_valid,
    input   ifu_o_ready,

    // Memory Interface
    output  ifu_req_valid,
    input   ifu_req_ready,
    output  [`PC_SIZE-1:0]      ifu_req_pc,
    
    input   ifu_rsp_valid,
    output  ifu_rsp_ready,
    input   [`INSTR_SIZE-1:0]   ifu_rsp_instr,
    output  ifu_o_pc_vld,

    input   [`XLEN-1:0]         rf2ifu_x1,
    input   [`XLEN-1:0]         rf2ifu_rs1
);

    ifu_ifetch inst_ifu_ifetch ( 
        .clk    (clk),                      //input
        .rst    (rst),                      //input
        .inspect_pc (inspect_pc),                     //output
        .pc_rtvec   (pc_rtvec),             //input

        .ifu_req_valid  (ifu_req_valid),    //output
        .ifu_req_ready  (ifu_req_ready),    //input
        .ifu_req_pc     (ifu_req_pc),       //output

        .ifu_rsp_valid  (ifu_rsp_valid),    //input
        .ifu_rsp_ready  (ifu_rsp_ready),    //output
        .ifu_rsp_instr  (ifu_rsp_instr),    //input

        .ifu_o_ir       (ifu_o_ir),         //output
        .ifu_o_pc       (ifu_o_pc),         //output
        .ifu_o_rs1idx   (ifu_o_rs1idx),     //output
        .ifu_o_rs2idx   (ifu_o_rs2idx),     //output
        .ifu_o_prdt_taken   (ifu_o_prdt_taken),

        .ifu_o_valid    (ifu_o_valid),      //output
        .ifu_o_ready    (ifu_o_ready),      //input
        .ifu_o_pc_vld   (ifu_o_pc_vld),

        .rf2ifu_x1      (rf2ifu_x1),
        .rf2ifu_rs1     (rf2ifu_rs1)
    );

endmodule
