`include    "defines.v"

module  core(
    input   clk,
    input   rst,

    output  [`PC_SIZE-1:0]  inspect_pc,
    input   [`PC_SIZE-1:0]  pc_rtvec,

    //Memory Interface
    output  ifu_req_valid,
    input   ifu_req_ready,
    output  [`PC_SIZE-1:0]      ifu_req_pc,
    
    input   ifu_rsp_valid,
    output  ifu_rsp_ready,
    input   [`INSTR_SIZE-1:0]   ifu_rsp_instr
);
    wire    [`PC_SIZE-1:0]      ifu_req_pc_temp;

    wire                        ifu_o_valid;
    wire                        ifu_o_ready;
    wire    [`INSTR_SIZE-1:0]   ifu_o_ir;
    wire    [`PC_SIZE-1:0]      ifu_o_pc;
    wire    [`RFIDX_WIDTH-1:0]  ifu_o_rs1idx;
    wire    [`RFIDX_WIDTH-1:0]  ifu_o_rs2idx;

    wire                        ifu_o_prdt_taken;

    wire                        ifu_o_pc_vld;
    wire    [`XLEN-1:0]         rf2ifu_x1;
    wire    [`XLEN-1:0]         rf2ifu_rs1;

    // sirv_gnrl_dfflr #(`PC_SIZE) pc_r_final_dfflr (1, ifu_req_pc_temp, ifu_req_pc, clk, rst);

    ifu inst_ifu(
        .clk    (clk),              //input
        .rst    (rst),              //input

        .inspect_pc (inspect_pc),   //output
        .pc_rtvec   (pc_rtvec),     //input

        .ifu_o_ir       (ifu_o_ir), //output
        .ifu_o_pc       (ifu_o_pc), //output
        .ifu_o_rs1idx   (ifu_o_rs1idx), //output
        .ifu_o_rs2idx   (ifu_o_rs2idx), //output
        .ifu_o_prdt_taken   (ifu_o_prdt_taken),

        .ifu_o_valid    (ifu_o_valid),  //output
        .ifu_o_ready    (ifu_o_ready),  //input

        .ifu_req_valid  (ifu_req_valid),    //output
        .ifu_req_ready  (ifu_req_ready),    //input
        .ifu_req_pc     (ifu_req_pc),       //output
        .ifu_rsp_valid  (ifu_rsp_valid),    //output
        .ifu_rsp_ready  (ifu_rsp_ready),    //input
        .ifu_rsp_instr  (ifu_rsp_instr),     //output
        .ifu_o_pc_vld   (ifu_o_pc_vld),

        .rf2ifu_x1      (rf2ifu_x1),
        .rf2ifu_rs1     (rf2ifu_rs1)
    );

    exu inst_exu(
        .clk    (clk),                  //input
        .rst    (rst),                  //input

        .i_valid    (ifu_o_valid),      //input
        .i_ready    (ifu_o_ready),      //output
        .i_ir       (ifu_o_ir),         //input
        .i_pc       (ifu_o_pc),         //input
        .i_rs1idx   (ifu_o_rs1idx),     //input
        .i_rs2idx   (ifu_o_rs2idx),      //input

        .i_pc_vld   (ifu_o_pc_vld),
        .i_prdt_taken   (ifu_o_prdt_taken),

        .commit_trap    (),

        .rf2ifu_x1  (rf2ifu_x1),
        .rf2ifu_rs1 (rf2ifu_rs1)
    );
    
	initial begin
		//if($test$plusargs("trace") != 0) begin
			$display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
			$dumpfile("logs/vlt_dump.vcd");
			$dumpvars();
		//end
		$display("[%0t] Model running...\n", $time);
	end

endmodule
