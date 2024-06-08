//      // verilator_coverage annotation
        `include "defines.v"
        // ifetch instruction, minidecode, update next pc
        
        module ifu(
 000060     input   clk,
%000003     input   rst,
        
%000002     output  [`PC_SIZE-1:0] inspect_pc, 
%000001     input   [`PC_SIZE-1:0] pc_rtvec,        
        
            // The IR stage to EXU interface
%000001     output  [`INSTR_SIZE-1:0]   ifu_o_ir,
%000001     output  [`PC_SIZE-1:0]      ifu_o_pc,
%000001     output  [`RFIDX_WIDTH-1:0]  ifu_o_rs1idx,
%000001     output  [`RFIDX_WIDTH-1:0]  ifu_o_rs2idx,
%000005     output                      ifu_o_prdt_taken,
%000003     output  ifu_o_valid,
%000000     input   ifu_o_ready,
        
            // Memory Interface
%000004     output  ifu_req_valid,
%000000     input   ifu_req_ready,
%000001     output  [`PC_SIZE-1:0]      ifu_req_pc,
            
%000000     input   ifu_rsp_valid,
%000002     output  ifu_rsp_ready,
%000001     input   [`INSTR_SIZE-1:0]   ifu_rsp_instr,
%000003     output  ifu_o_pc_vld,
        
%000000     input   [`XLEN-1:0]         rf2ifu_x1,
%000001     input   [`XLEN-1:0]         rf2ifu_rs1
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
        
