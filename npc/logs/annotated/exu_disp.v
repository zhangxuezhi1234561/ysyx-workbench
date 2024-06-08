//      // verilator_coverage annotation
        `include    "defines.v"
        module  exu_disp(
%000003     input       disp_i_valid,   //
%000000     output      disp_i_ready,   //disp_o_alu_ready
        
%000009     input       disp_i_rs1x0,
 000013     input       disp_i_rs2x0,
 000010     input       disp_i_rs1en,
%000007     input       disp_i_rs2en,
%000001     input       [`RFIDX_WIDTH-1:0]  disp_i_rs1idx,
%000001     input       [`RFIDX_WIDTH-1:0]  disp_i_rs2idx,
%000001     input       [`XLEN-1:0]         disp_i_rs1,
%000002     input       [`XLEN-1:0]         disp_i_rs2,
%000003     input                           disp_i_rdwen,
%000001     input       [`RFIDX_WIDTH-1:0]  disp_i_rdidx,
%000001     input       [`DECINFO_WIDTH-1:0]    disp_i_info,
 000010     input       [`XLEN-1:0]         disp_i_imm,
%000001     input       [`PC_SIZE-1:0]      disp_i_pc,
            
%000003     output                          disp_o_alu_valid,   // similar to input disp_i_valid
%000000     input                           disp_o_alu_ready,
        
%000002     output      [`XLEN-1:0]         disp_o_alu_rs1,
%000002     output      [`XLEN-1:0]         disp_o_alu_rs2,
%000003     output                          disp_o_alu_rdwen,
%000001     output      [`RFIDX_WIDTH-1:0]  disp_o_alu_rdidx,
%000001     output      [`DECINFO_WIDTH-1:0]    disp_o_alu_info,
 000010     output      [`XLEN-1:0]         disp_o_alu_imm,
%000001     output      [`PC_SIZE-1:0]      disp_o_alu_pc
        );
        
%000000     wire    disp_i_ready_pos    =   disp_o_alu_ready;
%000003     wire    disp_i_valid_pos;
            assign  disp_o_alu_valid    =   disp_i_valid_pos;
            assign  disp_i_valid_pos    =   disp_i_valid;
            assign  disp_i_ready        =   disp_i_ready_pos;
        
%000002     wire    [`XLEN-1:0] disp_i_rs1_msked = disp_i_rs1 & {`XLEN{~disp_i_rs1x0}};
%000002     wire    [`XLEN-1:0] disp_i_rs2_msked = disp_i_rs2 & {`XLEN{~disp_i_rs2x0}};
            assign  disp_o_alu_rs1  =   disp_i_rs1_msked;
            assign  disp_o_alu_rs2  =   disp_i_rs2_msked;
            assign  disp_o_alu_rdwen =  disp_i_rdwen;
            assign  disp_o_alu_rdidx =  disp_i_rdidx;
            assign  disp_o_alu_info  =  disp_i_info;
        
            assign  disp_o_alu_imm  =   disp_i_imm;
            assign  disp_o_alu_pc   =   disp_i_pc;
        
        endmodule
        
