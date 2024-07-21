//      // verilator_coverage annotation
        `include    "defines.v"
        module  exu_disp(
%000002     input       disp_i_valid,   //
%000001     output      disp_i_ready,   //disp_o_alu_ready
        
 000013     input       disp_i_rs1x0,
 000023     input       disp_i_rs2x0,
 000014     input       disp_i_rs1en,
%000006     input       disp_i_rs2en,
%000001     input       [`RFIDX_WIDTH-1:0]  disp_i_rs1idx,
%000001     input       [`RFIDX_WIDTH-1:0]  disp_i_rs2idx,
%000004     input       [`XLEN-1:0]         disp_i_rs1,
%000001     input       [`XLEN-1:0]         disp_i_rs2,
 000014     input                           disp_i_rdwen,
%000005     input       [`RFIDX_WIDTH-1:0]  disp_i_rdidx,
%000001     input       [`DECINFO_WIDTH-1:0]    disp_i_info,
%000001     input       [`XLEN-1:0]         disp_i_imm,
%000001     input       [`PC_SIZE-1:0]      disp_i_pc,
            
            // Dispatch to ALU
%000002     output                          disp_o_alu_valid,   // similar to input disp_i_valid
%000001     input                           disp_o_alu_ready,
        
%000006     input                           disp_o_alu_longpipe,
        
%000006     output      [`XLEN-1:0]         disp_o_alu_rs1,
%000002     output      [`XLEN-1:0]         disp_o_alu_rs2,
 000014     output                          disp_o_alu_rdwen,
%000005     output      [`RFIDX_WIDTH-1:0]  disp_o_alu_rdidx,
%000001     output      [`DECINFO_WIDTH-1:0]    disp_o_alu_info,
%000001     output      [`XLEN-1:0]         disp_o_alu_imm,
%000001     output      [`PC_SIZE-1:0]      disp_o_alu_pc,
        
            // Dispatch to OITF
%000005     output                          disp_oitf_ena
            
        );
        
%000006     wire    disp_alu_longp_real =   disp_o_alu_longpipe;
        
%000001     wire    disp_i_ready_pos    =   disp_o_alu_ready;
%000002     wire    disp_i_valid_pos;
            assign  disp_o_alu_valid    =   disp_i_valid_pos;
            assign  disp_i_valid_pos    =   disp_i_valid;
            assign  disp_i_ready        =   disp_i_ready_pos;
        
%000006     wire    [`XLEN-1:0] disp_i_rs1_msked = disp_i_rs1 & {`XLEN{~disp_i_rs1x0}};
%000002     wire    [`XLEN-1:0] disp_i_rs2_msked = disp_i_rs2 & {`XLEN{~disp_i_rs2x0}};
            assign  disp_o_alu_rs1  =   disp_i_rs1_msked;
            assign  disp_o_alu_rs2  =   disp_i_rs2_msked;
            assign  disp_o_alu_rdwen =  disp_i_rdwen;
            assign  disp_o_alu_rdidx =  disp_i_rdidx;
            assign  disp_o_alu_info  =  disp_i_info;
        
            assign  disp_oitf_ena   =   disp_o_alu_valid & disp_o_alu_ready & disp_alu_longp_real;
        
            assign  disp_o_alu_imm  =   disp_i_imm;
            assign  disp_o_alu_pc   =   disp_i_pc;
        
        endmodule
        
