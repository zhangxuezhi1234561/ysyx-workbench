//      // verilator_coverage annotation
        `include    "defines.v"
        
        module  exu_alu(
%000003     input       i_valid,
%000000     output      i_ready,
        
%000002     input   [`XLEN-1:0] i_rs1,
%000002     input   [`XLEN-1:0] i_rs2,
 000010     input   [`XLEN-1:0] i_imm,
%000001     input   [`DECINFO_WIDTH-1:0]    i_info,
%000001     input   [`PC_SIZE-1:0]          i_pc,
%000001     input   [`INSTR_SIZE-1:0]       i_instr,
%000003     input                           i_pc_vld,
%000001     input   [`RFIDX_WIDTH-1:0]      i_rdidx,
%000003     input                           i_rdwen,
        
            // The Commit Interface
%000002     output                          cmt_o_valid,
%000000     input                           cmt_o_ready,
%000003     output                          cmt_o_pc_vld,
%000001     output  [`PC_SIZE-1:0]          cmt_o_pc,
%000001     output  [`INSTR_SIZE-1:0]       cmt_o_instr,
 000010     output  [`XLEN-1:0]             cmt_o_imm,
        
%000005     output                          cmt_o_bjp,
%000001     output                          cmt_o_ebreak,
%000004     output                          cmt_o_bjp_prdt,
        
%000003     output                          wbck_o_valid,
%000000     input                           wbck_o_ready,
%000001     output  [`XLEN-1:0]             wbck_o_wdat,
%000001     output  [`RFIDX_WIDTH-1:0]      wbck_o_rdidx             
        );
%000004     wire    alu_op  =   i_info[`DECINFO_GRP] == `DECINFO_GRP_ALU;
%000004     wire    bjp_op  =   i_info[`DECINFO_GRP] == `DECINFO_GRP_BJP;
            // initial begin
            //     $display("DECINFO_GRP=%d\n", `DECINFO_GRP);
            // end
           
%000007     wire    alu_i_valid =   alu_op & i_valid;
%000005     wire    bjp_i_valid =   bjp_op & i_valid;
            ////////////////////////////////////////////
%000004     wire    bjp_i_ready;
%000005     wire    bjp_o_valid;
%000004     wire    bjp_o_ready;
%000002     wire    [`XLEN-1:0] bjp_o_wbck_wdat;
        
%000004     wire                bjp_o_cmt_bjp;
%000004     wire                bjp_o_cmt_prdt;
            
%000000     wire    [`XLEN-1:0] bjp_req_alu_op1;
%000001     wire    [`XLEN-1:0] bjp_req_alu_op2;
%000004     wire                bjp_req_alu_add;
%000002     wire    [`XLEN-1:0] bjp_req_alu_add_res;
        
%000001     wire    [`XLEN-1:0]             bjp_i_rs1   =   {`XLEN          {bjp_op}} & i_rs1;
%000002     wire    [`XLEN-1:0]             bjp_i_rs2   =   {`XLEN          {bjp_op}} & i_rs2;
%000002     wire    [`XLEN-1:0]             bjp_i_imm   =   {`XLEN          {bjp_op}} & i_imm;
%000001     wire    [`DECINFO_WIDTH-1:0]    bjp_i_info  =   {`DECINFO_WIDTH {bjp_op}} & i_info;
%000001     wire    [`PC_SIZE-1:0]          bjp_i_pc    =   {`PC_SIZE       {bjp_op}} & i_pc;
        
            exu_alu_bjp inst_exu_alu_bjp(
                .bjp_i_valid    (bjp_i_valid),
                .bjp_i_ready    (bjp_i_ready),
        
                .bjp_i_rs1      (bjp_i_rs1),
                .bjp_i_rs2      (bjp_i_rs2),
                .bjp_i_imm      (bjp_i_imm),
                .bjp_i_pc       (bjp_i_pc),
                .bjp_i_info     (bjp_i_info[`DECINFO_BJP_WIDTH-1:0]),
        
                .bjp_o_valid    (bjp_o_valid),
                .bjp_o_ready    (bjp_o_ready),
        
                .bjp_o_wbck_wdat    (bjp_o_wbck_wdat),
        
                .bjp_o_cmt_bjp      (bjp_o_cmt_bjp),
                .bjp_o_cmt_prdt     (bjp_o_cmt_prdt),
        
                .bjp_req_alu_op1    (bjp_req_alu_op1),
                .bjp_req_alu_op2    (bjp_req_alu_op2),
                .bjp_req_alu_add    (bjp_req_alu_add),
        
                .bjp_req_alu_add_res    (bjp_req_alu_add_res)
            );
        
%000002     wire    [`XLEN-1:0]     alu_req_alu_res;
%000002     wire    [`XLEN-1:0]     alu_req_alu_op1;
%000003     wire    [`XLEN-1:0]     alu_req_alu_op2;
        
%000005     wire                    alu_req_alu_add;
%000004     wire                    alu_req_alu_lui;
        
%000006     wire    alu_req_alu =   alu_op & i_rdwen;
%000004     wire    bjp_req_alu =   bjp_op;
        
            exu_alu_dpath   inst_exu_alu_dpath(
                .alu_req_alu    (alu_req_alu),          //input
        
                .alu_req_alu_add    (alu_req_alu_add),  //input
                .alu_req_alu_lui    (alu_req_alu_lui),
                .alu_req_alu_op1    (alu_req_alu_op1),  //input
                .alu_req_alu_op2    (alu_req_alu_op2),  //input
        
                .alu_req_alu_res    (alu_req_alu_res),   //output
        
                .bjp_req_alu            (bjp_req_alu),
                .bjp_req_alu_op1        (bjp_req_alu_op1),
                .bjp_req_alu_op2        (bjp_req_alu_op2),
                .bjp_req_alu_add        (bjp_req_alu_add),
        
                .bjp_req_alu_add_res    (bjp_req_alu_add_res)
            );
        
%000007     wire        alu_o_valid;
%000004     wire        alu_o_ready;
%000002     wire    [`XLEN-1:0] alu_o_wbck_wdat;
        
%000002     wire    [`XLEN-1:0] alu_i_rs1   =   {`XLEN          {alu_op}} & i_rs1;
%000001     wire    [`XLEN-1:0] alu_i_rs2   =   {`XLEN          {alu_op}} & i_rs2;
%000004     wire    [`XLEN-1:0] alu_i_imm   =   {`XLEN          {alu_op}} & i_imm;
%000000     wire    [`DECINFO_WIDTH-1:0] alu_i_info =   {`DECINFO_WIDTH{alu_op}} & i_info;
%000001     wire    [`PC_SIZE-1:0]  alu_i_pc = {`PC_SIZE        {alu_op}} & i_pc;
        
%000004     wire    alu_i_ready;
        
%000001     wire    alu_o_cmt_ebreak;
        
            exu_alu_rglr    inst_exu_alu_rglr(
                .alu_i_valid    (alu_i_valid),      //input
                .alu_i_ready    (alu_i_ready),      //output
        
        
        
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
                .alu_req_alu_lui    (alu_req_alu_lui),
        
                .alu_req_alu_op1    (alu_req_alu_op1),  //output
                .alu_req_alu_op2    (alu_req_alu_op2),  //output
                .alu_req_alu_res    (alu_req_alu_res)  //input    
            );
        
%000002     wire    o_valid;
%000000     wire    o_ready;  
        
%000004     wire    o_sel_alu   =   alu_op;
%000004     wire    o_sel_bjp   =   bjp_op;   
        
            assign  o_valid =   (o_sel_alu   &   alu_o_valid)
                              | (o_sel_bjp   &   bjp_o_valid)
                                ;        //TODO   
        
            assign  alu_o_ready     =   o_sel_alu & o_ready;
            assign  bjp_o_ready     =   o_sel_bjp & o_ready;                            
        
            assign  wbck_o_wdat =   ({`XLEN{o_sel_alu}} & alu_o_wbck_wdat)
                                  | ({`XLEN{o_sel_bjp}} & bjp_o_wbck_wdat) 
                                    ;
            assign  wbck_o_rdidx    =   i_rdidx;
        
%000003     wire    wbck_o_rdwen    =   i_rdwen;
%000003     wire    o_need_wbck     =   wbck_o_rdwen;
%000000     wire    o_need_cmt      =   1'b1;
        
            assign  o_ready =   (o_need_cmt ? cmt_o_ready : 1'b1) & (o_need_wbck ? wbck_o_ready : 1'b1);
        
            assign  wbck_o_valid    =   o_need_wbck & o_valid & (o_need_cmt ? cmt_o_ready : 1'b1);
        
            assign  i_ready =   (alu_i_ready & alu_op)
                              | (bjp_i_ready & bjp_op) 
                                ;
        
            // Each Instruction need to commit
            assign  cmt_o_valid     =   o_valid & (o_need_wbck ? wbck_o_ready : 1'b1);
            assign  cmt_o_instr     =   i_instr;
            assign  cmt_o_pc        =   i_pc;
            assign  cmt_o_imm       =   i_imm;  
            assign  cmt_o_pc_vld    =   i_pc_vld;
        
            assign  cmt_o_bjp       =   o_sel_bjp & bjp_o_cmt_bjp;  
            assign  cmt_o_bjp_prdt  =   o_sel_bjp & bjp_o_cmt_prdt;  
            assign  cmt_o_ebreak    =   o_sel_alu & alu_o_cmt_ebreak;
        
        endmodule
        
