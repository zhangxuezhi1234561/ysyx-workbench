`include    "defines.v"

module  exu_alu(
    input       i_valid,
    output      i_ready,

    input   [`XLEN-1:0] i_rs1,
    input   [`XLEN-1:0] i_rs2,
    input   [`XLEN-1:0] i_imm,
    input   [`DECINFO_WIDTH-1:0]    i_info,
    input   [`PC_SIZE-1:0]          i_pc,
    input   [`INSTR_SIZE-1:0]       i_instr,
    input                           i_pc_vld,
    input   [`RFIDX_WIDTH-1:0]      i_rdidx,
    input                           i_rdwen,

    // The Commit Interface
    output                          cmt_o_valid,
    input                           cmt_o_ready,
    output                          cmt_o_pc_vld,
    output  [`PC_SIZE-1:0]          cmt_o_pc,
    output  [`INSTR_SIZE-1:0]       cmt_o_instr,
    output  [`XLEN-1:0]             cmt_o_imm,
    output                          cmt_o_ebreak,

    output                          wbck_o_valid,
    input                           wbck_o_ready,
    output  [`XLEN-1:0]             wbck_o_wdat,
    output  [`RFIDX_WIDTH-1:0]      wbck_o_rdidx             
);
    wire    alu_op  =   i_info[`DECINFO_GRP] == `DECINFO_GRP_ALU;
    // initial begin
    //     $display("DECINFO_GRP=%d\n", `DECINFO_GRP);
    // end
   
    wire    alu_i_valid =   alu_op & i_valid;
    
    wire    o_sel_alu   =   alu_op;

    wire    [`XLEN-1:0]     alu_req_alu_res;
    wire    [`XLEN-1:0]     alu_req_alu_op1;
    wire    [`XLEN-1:0]     alu_req_alu_op2;

    wire                    alu_req_alu_add;

    wire    alu_req_alu =   alu_op & i_rdwen;

    exu_alu_dpath   inst_exu_alu_dpath(
        .alu_req_alu    (alu_req_alu),          //input

        .alu_req_alu_add    (alu_req_alu_add),  //input
        .alu_req_alu_op1    (alu_req_alu_op1),  //input
        .alu_req_alu_op2    (alu_req_alu_op2),  //input

        .alu_req_alu_res    (alu_req_alu_res)   //output
    );

    wire        alu_o_valid;
    wire        alu_o_ready;
    wire    [`XLEN-1:0] alu_o_wbck_wdat;

    wire    [`XLEN-1:0] alu_i_rs1   =   {`XLEN          {alu_op}} & i_rs1;
    wire    [`XLEN-1:0] alu_i_rs2   =   {`XLEN          {alu_op}} & i_rs2;
    wire    [`XLEN-1:0] alu_i_imm   =   {`XLEN          {alu_op}} & i_imm;
    wire    [`DECINFO_WIDTH-1:0] alu_i_info =   {`DECINFO_WIDTH{alu_op}} & i_info;
    wire    [`PC_SIZE-1:0]  alu_i_pc = {`PC_SIZE        {alu_op}} & i_pc;

    wire    alu_i_ready;

    wire    alu_o_cmt_ebreak;

    exu_alu_rglr    inst_exu_alu_rglr(
        .alu_i_valid    (alu_i_valid),      //input
        .alu_i_ready    (alu_i_ready),      //output

        .alu_req_alu_res(alu_req_alu_res),  //input

        .alu_i_rs1      (alu_i_rs1),        //input
        .alu_i_rs2      (alu_i_rs2),        //input
        .alu_i_imm      (alu_i_imm),        //input
        .alu_i_pc       (alu_i_pc),         //input
        .alu_i_info     (alu_i_info[`DECINFO_ALU_WIDTH-1:0]),       //input

        .alu_o_valid    (alu_o_valid),      //output
        .alu_o_ready    (alu_o_ready),      //input
        .alu_o_wbck_wdat(alu_o_wbck_wdat),  //output

        .alu_o_cmt_ebreak   (alu_o_cmt_ebreak),

        .alu_req_alu_add    (alu_req_alu_add),  //output

        .alu_req_alu_op1    (alu_req_alu_op1),  //output
        .alu_req_alu_op2    (alu_req_alu_op2)  //output
    );

    assign  wbck_o_wdat =   {`XLEN{o_sel_alu}} & alu_o_wbck_wdat;
    assign  wbck_o_rdidx    =   i_rdidx;

    wire    wbck_o_rdwen    =   i_rdwen;
    wire    o_need_wbck     =   wbck_o_rdwen;
    wire    o_need_cmt      =   1'b1;
    
    wire    o_valid;
    wire    o_ready;

    assign  o_ready =   (o_need_cmt ? cmt_o_ready : 1'b1) & (o_need_wbck ? wbck_o_ready : 1'b1);
    assign  o_valid =   o_sel_alu   &   alu_o_valid;
    assign  wbck_o_valid    =   o_need_wbck & o_valid;

    assign  alu_o_ready     =   o_sel_alu & o_ready;

    assign  i_ready =   (alu_i_ready & alu_op);

    // Each Instruction need to commit
    assign  cmt_o_valid     =   o_valid & (o_need_wbck ? wbck_o_ready : 1'b1);
    assign  cmt_o_instr     =   i_instr;
    assign  cmt_o_pc        =   i_pc;
    assign  cmt_o_imm       =   i_imm;  
    assign  cmt_o_pc_vld    =   i_pc_vld;
    assign  cmt_o_ebreak    =   o_sel_alu & alu_o_cmt_ebreak;

endmodule
