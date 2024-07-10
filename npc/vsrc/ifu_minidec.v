`include "defines.v"
// only output idx, not output dec_info     (so called mini)

module ifu_minidec(    
    input   [`INSTR_SIZE-1:0] instr,

    output  dec_rs1en,
    output  dec_rs2en,
    output  [`RFIDX_WIDTH-1:0]  dec_rs1idx,
    output  [`RFIDX_WIDTH-1:0]  dec_rs2idx,

    output  dec_bjp,
    output  dec_jal,
    output  dec_jalr,
    output  dec_bxx,
    output  [`RFIDX_WIDTH-1:0]  dec_jalr_rs1idx,
    output  [`XLEN-1:0]         dec_bjp_imm
);
   exu_decode   inst_exu_decode(
        .rv32_instr (instr),
        .i_pc       (`PC_SIZE'b0),  // pc not used
        .i_prdt_taken   (1'b0),
        
        .dec_rs1x0  (),
        .dec_rs2x0  (),
        .dec_rs1en  (dec_rs1en),
        .dec_rs2en  (dec_rs2en),
        .dec_rdwen  (),
        .dec_rs1idx (dec_rs1idx),
        .dec_rs2idx (dec_rs2idx),
        .dec_rdidx  (),
        .dec_imm    (),
        .dec_pc     (),
        .dec_info   (),

        .dec_bjp    (dec_bjp),
        .dec_jal    (dec_jal),
        .dec_jalr   (dec_jalr),
        .dec_bxx    (dec_bxx),
        .dec_jalr_rs1idx    (dec_jalr_rs1idx),
        .dec_bjp_imm        (dec_bjp_imm)
   );
    
endmodule
