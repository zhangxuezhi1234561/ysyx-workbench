`include "defines.v"
// only output idx, not output dec_info     (so called mini)

module ifu_minidec(
    input   [`INSTR_SIZE-1:0] instr,

    output  dec_rs1en,
    output  dec_rs2en,
    output  [`RFIDX_WIDTH-1:0]  dec_rs1idx,
    output  [`RFIDX_WIDTH-1:0]  dec_rs2idx
);
   exu_decode   inst_exu_decode(
        .rv32_instr (instr),
        .i_pc       (`PC_SIZE'b0),  // pc not used
        
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
        .dec_info   ()
   );
    
endmodule
