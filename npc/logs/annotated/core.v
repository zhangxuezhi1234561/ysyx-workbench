//      // verilator_coverage annotation
        `include    "defines.v"
        
        module  core(
 000059     input   clk,
%000003     input   rst,
        
%000001     output  [`PC_SIZE-1:0]  inspect_pc,
%000001     input   [`PC_SIZE-1:0]  pc_rtvec,
        
            //Memory Interface
%000003     output  ifu_req_valid,
%000000     input   ifu_req_ready,
%000001     output  [`PC_SIZE-1:0]      ifu_req_pc,
            
%000000     input   ifu_rsp_valid,
%000000     output  ifu_rsp_ready,
%000004     input   [`INSTR_SIZE-1:0]   ifu_rsp_instr
        );
%000002     wire                        ifu_o_valid;
%000001     wire                        ifu_o_ready;
%000001     wire    [`INSTR_SIZE-1:0]   ifu_o_ir;
%000001     wire    [`PC_SIZE-1:0]      ifu_o_pc;
%000001     wire    [`RFIDX_WIDTH-1:0]  ifu_o_rs1idx;
%000001     wire    [`RFIDX_WIDTH-1:0]  ifu_o_rs2idx;
        
%000004     wire                        ifu_o_prdt_taken;
        
%000001     wire                        ifu_o_pc_vld;
%000001     wire    [`XLEN-1:0]         rf2ifu_x1;
%000004     wire    [`XLEN-1:0]         rf2ifu_rs1;
        
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
%000000     wire                        lsu_o_valid;
%000000     wire                        lsu_o_ready;
%000001     wire    [`XLEN-1:0]         lsu_o_wbck_wdat;
%000000     wire                        lsu_o_cmt_ld;
%000001     wire                        lsu_o_cmt_st;
        
%000006     wire                        agu_icb_cmd_valid;
%000006     wire                        agu_icb_cmd_ready;
%000001     wire    [`ADDR_SIZE-1:0]    agu_icb_cmd_addr;
%000001     wire                        agu_icb_cmd_read;
%000002     wire    [`XLEN-1:0]         agu_icb_cmd_wdata;
%000005     wire    [`XLEN/8-1:0]       agu_icb_cmd_wmask;
%000001     wire    [`XLEN-1:0]         agu_icb_rsp_rdata;
        
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
                .rf2ifu_rs1 (rf2ifu_rs1),
        
                .lsu_o_valid            (lsu_o_valid),
                .lsu_o_ready            (lsu_o_ready),
                .lsu_o_wbck_wdat        (lsu_o_wbck_wdat),
                .lsu_o_cmt_ld           (lsu_o_cmt_ld),
                .lsu_o_cmt_st           (lsu_o_cmt_st),
        
                .agu_icb_cmd_valid      (agu_icb_cmd_valid),
                .agu_icb_cmd_ready      (agu_icb_cmd_ready),
                .agu_icb_cmd_addr       (agu_icb_cmd_addr),
                .agu_icb_cmd_read       (agu_icb_cmd_read),
                .agu_icb_cmd_wdata      (agu_icb_cmd_wdata),
                .agu_icb_cmd_wmask      (agu_icb_cmd_wmask),
        
                .agu_icb_rsp_rdata      (agu_icb_rsp_rdata)
            );
        
            lsu     inst_lsu(
                .lsu_o_valid            (lsu_o_valid),
                .lsu_o_ready            (lsu_o_ready),          //input
                .lsu_o_wbck_wdat        (lsu_o_wbck_wdat),
                .lsu_o_cmt_ld           (lsu_o_cmt_ld),
                .lsu_o_cmt_st           (lsu_o_cmt_st),
        
                .agu_icb_cmd_valid      (agu_icb_cmd_valid),
                .agu_icb_cmd_ready      (agu_icb_cmd_ready),
                .agu_icb_cmd_addr       (agu_icb_cmd_addr),
                .agu_icb_cmd_read       (agu_icb_cmd_read),
                .agu_icb_cmd_wdata      (agu_icb_cmd_wdata),
                .agu_icb_cmd_wmask      (agu_icb_cmd_wmask),
        
                .agu_icb_rsp_rdata      (agu_icb_rsp_rdata)
            );
            
%000001 	initial begin
        		//if($test$plusargs("trace") != 0) begin
%000001 			$display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
%000001 			$dumpfile("logs/vlt_dump.vcd");
%000001 			$dumpvars();
        		//end
%000001 		$display("[%0t] Model running...\n", $time);
        	end
        
        endmodule
        
