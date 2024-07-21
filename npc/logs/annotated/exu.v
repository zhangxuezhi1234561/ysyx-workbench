//      // verilator_coverage annotation
        `include "defines.v"
        
        module exu(
 000059     input   clk,
%000003     input   rst,
        
%000002     input   i_valid,
%000001     output  i_ready,
%000001     input   [`INSTR_SIZE-1:0]    i_ir,
%000001     input   [`PC_SIZE-1:0]       i_pc,
%000001     input   [`RFIDX_WIDTH-1:0]   i_rs1idx,
%000001     input   [`RFIDX_WIDTH-1:0]   i_rs2idx,
        
%000001     input                       i_pc_vld,
%000004     input                       i_prdt_taken,
        
%000001     output                      commit_trap,
        
%000001     output  [`XLEN-1:0]         rf2ifu_x1,
%000004     output  [`XLEN-1:0]         rf2ifu_rs1,
        
            // The LSU Write-Back Interface
%000000     input                       lsu_o_valid,
%000000     output                      lsu_o_ready,
%000001     input   [`XLEN-1:0]         lsu_o_wbck_wdat,
%000000     input                       lsu_o_cmt_ld,
%000001     input                       lsu_o_cmt_st,
        
%000006     output                      agu_icb_cmd_valid,
%000006     input                       agu_icb_cmd_ready,
%000001     output  [`ADDR_SIZE-1:0]    agu_icb_cmd_addr,
%000001     output                      agu_icb_cmd_read,
%000002     output  [`XLEN-1:0]         agu_icb_cmd_wdata,
%000005     output  [`XLEN/8-1:0]       agu_icb_cmd_wmask,
        
%000001     input   [`XLEN-1:0]         agu_icb_rsp_rdata
        );
        
        
        
            //----------- Instantiate the RegisterFile ---------//
%000004     wire    [`XLEN-1:0] rf_rs1;
%000001     wire    [`XLEN-1:0] rf_rs2;
%000002     wire                rf_wbck_ena;
%000001     wire    [`XLEN-1:0] rf_wbck_wdat;           //write rd data
%000002     wire    [`RFIDX_WIDTH-1:0] rf_wbck_rdidx;   //write rd data
 000013     wire    [`XLEN-1:0] endcode;
        
            RegisterFile inst_RegisterFile(
                .clk    (clk),
                .rst    (rst),
        
                .read_src1_idx  (i_rs1idx),         //input
                .read_src2_idx  (i_rs2idx),         //input
                .read_src1_dat  (rf_rs1),           //output
                .read_src2_dat  (rf_rs2),           //output
        
                .wbck_dest_wen  (rf_wbck_ena),      //input
                .wbck_dest_idx  (rf_wbck_rdidx),    //input
                .wbck_dest_dat  (rf_wbck_wdat),     //input
        
                .x1_r           (rf2ifu_x1),
                .endcode        (endcode)
            );
        
            //----------- Instantiate the Decode ------------//
 000013     wire                         dec_rs1x0;
 000023     wire                         dec_rs2x0;
%000001     wire    [`DECINFO_WIDTH-1:0] dec_info;
%000001     wire    [`XLEN-1:0]          dec_imm;
%000001     wire    [`PC_SIZE-1:0]       dec_pc;
 000014     wire                         dec_rs1en;
%000006     wire                         dec_rs2en;
%000005     wire    [`RFIDX_WIDTH-1:0]   dec_rdidx;
 000014     wire                         dec_rdwen;
            exu_decode inst_exu_decode(
                .rv32_instr     (i_ir),
                .i_pc           (i_pc),
                .i_prdt_taken   (i_prdt_taken),
        
                .dec_rs1x0      (dec_rs1x0),
                .dec_rs2x0      (dec_rs2x0),
                .dec_rs1en      (dec_rs1en),    //output
                .dec_rs2en      (dec_rs2en),
                .dec_rdwen      (dec_rdwen),
                .dec_rs1idx     (),
                .dec_rs2idx     (),
                .dec_rdidx      (dec_rdidx),
                .dec_imm        (dec_imm),
                .dec_pc         (dec_pc),
                .dec_info       (dec_info),
        
                .dec_bjp        (),
                .dec_jal        (),
                .dec_jalr       (),
                .dec_bxx        (),
                .dec_jalr_rs1idx    (),
                .dec_bjp_imm        ()
            );
        
        
%000002     wire    disp_alu_valid;
%000001     wire    disp_alu_ready;
%000006     wire    disp_alu_longpipe;
%000006     wire    [`XLEN-1:0] disp_alu_rs1;
%000002     wire    [`XLEN-1:0] disp_alu_rs2;
%000001     wire    [`XLEN-1:0] disp_alu_imm;
%000001     wire    [`DECINFO_WIDTH-1:0]    disp_alu_info;
        
%000005     wire    [`RFIDX_WIDTH-1:0]      disp_alu_rdidx;
 000014     wire                            disp_alu_rdwen;
%000001     wire    [`PC_SIZE-1:0]          disp_alu_pc;
        
%000005     wire                            disp_oitf_ena;
        
            exu_disp    inst_exu_disp(
                .disp_i_valid   (i_valid),
                .disp_i_ready   (i_ready),
        
                .disp_i_rs1x0   (dec_rs1x0),
                .disp_i_rs2x0   (dec_rs2x0),
                .disp_i_rs1en   (dec_rs1en),
                .disp_i_rs2en   (dec_rs2en),
                .disp_i_rs1idx  (i_rs1idx),
                .disp_i_rs2idx  (i_rs2idx),
                .disp_i_rs1     (rf_rs1),
                .disp_i_rs2     (rf_rs2),
                .disp_i_rdwen   (dec_rdwen),
                .disp_i_rdidx   (dec_rdidx),
                .disp_i_info    (dec_info),
                .disp_i_imm     (dec_imm),
                .disp_i_pc      (dec_pc),
        
                .disp_o_alu_valid   (disp_alu_valid),
                .disp_o_alu_ready   (disp_alu_ready),
        
                .disp_o_alu_longpipe    (disp_alu_longpipe),
        
                .disp_o_alu_rs1     (disp_alu_rs1),
                .disp_o_alu_rs2     (disp_alu_rs2),
                .disp_o_alu_rdwen   (disp_alu_rdwen),
                .disp_o_alu_rdidx   (disp_alu_rdidx),
                .disp_o_alu_info    (disp_alu_info),
                .disp_o_alu_imm     (disp_alu_imm),
                .disp_o_alu_pc      (disp_alu_pc),
        
                .disp_oitf_ena      (disp_oitf_ena)         //e203 use ret_rdwen in OITF(have latency)
            );
        
            assign  oitf_ret_rdwen = disp_oitf_ena;
        
            //----------------OITF--------------//
%000000     wire                        oitf_ret_ena;
%000005     wire                        oitf_ret_rdwen;
%000001     wire    [`RFIDX_WIDTH-1:0]  oitf_ret_rdidx;
            //----------------------------------//
        
%000009     wire    alu_wbck_o_valid;
%000000     wire    alu_wbck_o_ready;
%000005     wire    [`XLEN-1:0] alu_wbck_o_wdat;
%000005     wire    [`RFIDX_WIDTH-1:0]  alu_wbck_o_rdidx;
        
%000005     wire    alu_cmt_bjp;
%000000     wire    alu_cmt_ebreak;
%000001     wire    alu_cmt_ld;
%000007     wire    alu_cmt_stamo;
        
%000002     wire    alu_cmt_valid;
%000000     wire    alu_cmt_ready;
            wire    alu_cmt_ebreak;
%000005     wire    alu_cmt_bjp_prdt;
        
%000001     wire    alu_cmt_pc_vld;
%000001     wire    [`PC_SIZE-1:0]  alu_cmt_pc;
%000001     wire    [`INSTR_SIZE-1:0]   alu_cmt_instr;
%000001     wire    [`XLEN-1:0]         alu_cmt_imm;
        
%000001     wire    [`XLEN-1:0]     cmt_cause;   
             
        
            exu_alu inst_exu_alu(
                .i_valid        (disp_alu_valid),
                .i_ready        (disp_alu_ready),
        
                .i_longpipe     (disp_alu_longpipe),
        
                .i_rs1          (disp_alu_rs1),
                .i_rs2          (disp_alu_rs2),
                .i_imm          (disp_alu_imm),
                .i_info         (disp_alu_info),
                .i_pc           (i_pc),
                .i_instr        (i_ir),
                .i_pc_vld       (i_pc_vld),             //commit module?
                .i_rdidx        (disp_alu_rdidx),
                .i_rdwen        (disp_alu_rdwen),
        
                .cmt_o_valid    (alu_cmt_valid),
                .cmt_o_ready    (alu_cmt_ready),
                .cmt_o_pc_vld   (alu_cmt_pc_vld),
                .cmt_o_pc       (alu_cmt_pc),
                .cmt_o_instr    (alu_cmt_instr),
                .cmt_o_imm      (alu_cmt_imm),
        
                .cmt_o_bjp      (alu_cmt_bjp),
                .cmt_o_ebreak   (alu_cmt_ebreak),
                .cmt_o_bjp_prdt (alu_cmt_bjp_prdt),     //output
        
                .cmt_o_ld       (alu_cmt_ld),
                .cmt_o_stamo    (alu_cmt_stamo),
        
                .wbck_o_valid   (alu_wbck_o_valid),
                .wbck_o_ready   (alu_wbck_o_ready),
                .wbck_o_wdat    (alu_wbck_o_wdat),
                .wbck_o_rdidx   (alu_wbck_o_rdidx),
        
                .agu_icb_cmd_valid  (agu_icb_cmd_valid),
                .agu_icb_cmd_ready  (agu_icb_cmd_ready),
                .agu_icb_cmd_addr   (agu_icb_cmd_addr),
                .agu_icb_cmd_read   (agu_icb_cmd_read),
                .agu_icb_cmd_wdata  (agu_icb_cmd_wdata),
                .agu_icb_cmd_wmask  (agu_icb_cmd_wmask),
        
                .agu_icb_rsp_rdata  (agu_icb_rsp_rdata)
            );
        
%000005     wire                        longp_wbck_o_valid;
%000000     wire                        longp_wbck_o_ready;
%000001     wire    [`FLEN-1:0]         longp_wbck_o_wdat;
%000001     wire    [`RFIDX_WIDTH-1:0]  longp_wbck_o_rdidx;  
        
%000000     wire                        longp_excp_o_ready;
%000001     wire                        longp_excp_o_valid;
%000000     wire                        longp_excp_o_ld;
%000001     wire                        longp_excp_o_st;
%000001     wire    [`PC_SIZE-1:0]      longp_excp_o_pc;
        
            exu_longpwbck   inst_exu_longpwbck(
                .lsu_wbck_i_valid   (lsu_o_valid),          
                .lsu_wbck_i_ready   (lsu_o_ready),          //output
                .lsu_wbck_i_wdat    (lsu_o_wbck_wdat),
                .lsu_cmt_i_ld       (lsu_o_cmt_ld),         
                .lsu_cmt_i_st       (lsu_o_cmt_st),
        
                .longp_wbck_o_valid (longp_wbck_o_valid),   
                .longp_wbck_o_ready (longp_wbck_o_ready),   //input
                .longp_wbck_o_wdat  (longp_wbck_o_wdat),
                .longp_wbck_o_rdidx (longp_wbck_o_rdidx),
        
                .longp_excp_o_valid (longp_excp_o_valid),
                .longp_excp_o_ready (longp_excp_o_ready),   //input
                .longp_excp_o_ld    (longp_excp_o_ld),
                .longp_excp_o_st    (longp_excp_o_st),
                .longp_excp_o_pc    (longp_excp_o_pc),
                
                .oitf_ret_ena       (oitf_ret_ena),
                .oitf_ret_rdwen     (oitf_ret_rdwen),       //input
                .oitf_ret_rdidx     (oitf_ret_rdidx)
            );
        
            exu_wbck    inst_exu_wbck(
                .alu_wbck_i_valid   (alu_wbck_o_valid),         //input
                .alu_wbck_i_ready   (alu_wbck_o_ready),         //output
                .alu_wbck_i_wdat    (alu_wbck_o_wdat),         //input
                .alu_wbck_i_rdidx   (alu_wbck_o_rdidx),         //input
        
                .longp_wbck_i_valid (longp_wbck_o_valid),
                .longp_wbck_i_ready (longp_wbck_o_ready),
                .longp_wbck_i_wdat  (longp_wbck_o_wdat),
                .longp_wbck_i_rdidx (longp_wbck_o_rdidx),
        
                .rf_wbck_o_ena      (rf_wbck_ena),         //output
                .rf_wbck_o_wdat     (rf_wbck_wdat),         //output
                .rf_wbck_o_rdidx    (rf_wbck_rdidx)          //output
            );
        
            exu_commit  inst_exu_commit(
                .clk                    (clk),
                .rst                    (rst),
        
                .commit_trap            (commit_trap),
        
                .alu_cmt_i_valid        (alu_cmt_valid),
                .alu_cmt_i_ready        (alu_cmt_ready),
                .alu_cmt_i_pc           (alu_cmt_pc),
                .alu_cmt_i_instr        (alu_cmt_instr),
                .alu_cmt_i_pc_vld       (alu_cmt_pc_vld),
                .alu_cmt_i_imm          (alu_cmt_imm),
        
                .alu_cmt_i_bjp          (alu_cmt_bjp),
                .alu_cmt_i_ebreak       (alu_cmt_ebreak),
                .alu_cmt_i_bjp_prdt     (alu_cmt_bjp_prdt),
                .alu_cmt_i_ld           (alu_cmt_ld),
                .alu_cmt_i_stamo        (alu_cmt_stamo),
        
                .cmt_cause              (cmt_cause),
        
                .endcode                (endcode)
            );
        
            assign  rf2ifu_rs1  =   rf_rs1;
        
        endmodule
        
