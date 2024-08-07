`include "defines.v"

module exu(
    input   clk,
    input   rst,

    input   i_valid,
    output  i_ready,
    input   [`INSTR_SIZE-1:0]    i_ir,
    input   [`PC_SIZE-1:0]       i_pc,
    input   [`RFIDX_WIDTH-1:0]   i_rs1idx,
    input   [`RFIDX_WIDTH-1:0]   i_rs2idx,

    input                       i_pc_vld,
    input                       i_prdt_taken,

    output                      commit_trap,

    output  [`XLEN-1:0]         rf2ifu_x1,
    output  [`XLEN-1:0]         rf2ifu_rs1,

    // The LSU Write-Back Interface
    input                       lsu_o_valid,
    output                      lsu_o_ready,
    input   [`XLEN-1:0]         lsu_o_wbck_wdat,
    input                       lsu_o_cmt_ld,
    input                       lsu_o_cmt_st,

    output                      agu_icb_cmd_valid,
    input                       agu_icb_cmd_ready,
    output  [`ADDR_SIZE-1:0]    agu_icb_cmd_addr,
    output                      agu_icb_cmd_read,
    output  [`XLEN-1:0]         agu_icb_cmd_wdata,
    output  [`XLEN/8-1:0]       agu_icb_cmd_wmask,

    input   [`XLEN-1:0]         agu_icb_rsp_rdata
);



    //----------- Instantiate the RegisterFile ---------//
    wire    [`XLEN-1:0] rf_rs1;
    wire    [`XLEN-1:0] rf_rs2;
    wire                rf_wbck_ena;
    wire    [`XLEN-1:0] rf_wbck_wdat;           //write rd data
    wire    [`RFIDX_WIDTH-1:0] rf_wbck_rdidx;   //write rd data
    wire    [`XLEN-1:0] endcode;

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
    wire                         dec_rs1x0;
    wire                         dec_rs2x0;
    wire    [`DECINFO_WIDTH-1:0] dec_info;
    wire    [`XLEN-1:0]          dec_imm;
    wire    [`PC_SIZE-1:0]       dec_pc;
    wire                         dec_rs1en;
    wire                         dec_rs2en;
    wire    [`RFIDX_WIDTH-1:0]   dec_rdidx;
    wire                         dec_rdwen;
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


    wire    disp_alu_valid;
    wire    disp_alu_ready;
    wire    disp_alu_longpipe;
    wire    [`XLEN-1:0] disp_alu_rs1;
    wire    [`XLEN-1:0] disp_alu_rs2;
    wire    [`XLEN-1:0] disp_alu_imm;
    wire    [`DECINFO_WIDTH-1:0]    disp_alu_info;

    wire    [`RFIDX_WIDTH-1:0]      disp_alu_rdidx;
    wire                            disp_alu_rdwen;
    wire    [`PC_SIZE-1:0]          disp_alu_pc;

    wire                            disp_oitf_ena;

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
    wire                        oitf_ret_ena;
    wire                        oitf_ret_rdwen;
    wire    [`RFIDX_WIDTH-1:0]  oitf_ret_rdidx;
    //----------------------------------//

    wire    alu_wbck_o_valid;
    wire    alu_wbck_o_ready;
    wire    [`XLEN-1:0] alu_wbck_o_wdat;
    wire    [`RFIDX_WIDTH-1:0]  alu_wbck_o_rdidx;

    wire    alu_cmt_bjp;
    wire    alu_cmt_ebreak;
    wire    alu_cmt_ld;
    wire    alu_cmt_stamo;

    wire    alu_cmt_valid;
    wire    alu_cmt_ready;
    wire    alu_cmt_ebreak;
    wire    alu_cmt_bjp_prdt;

    wire    alu_cmt_pc_vld;
    wire    [`PC_SIZE-1:0]  alu_cmt_pc;
    wire    [`INSTR_SIZE-1:0]   alu_cmt_instr;
    wire    [`XLEN-1:0]         alu_cmt_imm;

    wire    [`XLEN-1:0]     cmt_cause;   
     

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

    wire                        longp_wbck_o_valid;
    wire                        longp_wbck_o_ready;
    wire    [`FLEN-1:0]         longp_wbck_o_wdat;
    wire    [`RFIDX_WIDTH-1:0]  longp_wbck_o_rdidx;  

    wire                        longp_excp_o_ready;
    wire                        longp_excp_o_valid;
    wire                        longp_excp_o_ld;
    wire                        longp_excp_o_st;
    wire    [`PC_SIZE-1:0]      longp_excp_o_pc;

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
