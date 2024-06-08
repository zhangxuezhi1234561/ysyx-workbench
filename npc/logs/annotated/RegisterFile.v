//      // verilator_coverage annotation
        `include "defines.v"
        
        module RegisterFile (
 000060 	input clk,
%000003 	input rst,
        
%000001 	input	[`RFIDX_WIDTH-1:0] read_src1_idx,
%000001 	input	[`RFIDX_WIDTH-1:0] read_src2_idx,
%000001 	output	[`XLEN-1:0]		   read_src1_dat,
%000002 	output	[`XLEN-1:0]		   read_src2_dat,	
        
%000003 	input	wbck_dest_wen,
%000001 	input	[`RFIDX_WIDTH-1:0] wbck_dest_idx,
%000001 	input	[`XLEN-1:0]		   wbck_dest_dat,
        
%000000 	output	[`XLEN-1:0]	x1_r,
 000013 	output	[`XLEN-1:0]	endcode
        );
        	reg	[`XLEN-1:0] rf_r [`RFREG_NUM-1:0];	//define general registers
%000001 	wire	[`RFREG_NUM-1:0] rf_wen;
        	generate
        		genvar	i;
        		for(i = 0; i < `RFREG_NUM; i = i + 1) begin:	regfile
        			if(i == 0) begin:	rf0
        				assign rf_wen[i] = 1'b0;
        				assign rf_r[i]	=	`XLEN'b0;
        			end
        			else begin: rfno0
        				assign rf_wen[i] = wbck_dest_wen & (wbck_dest_idx == i);				
        				//Reg	#(`XLEN, `XLEN'b0)	rf_dffl	(clk, rst, wbck_dest_dat, rf_r[i], rf_wen[i]);
        				sirv_gnrl_dffl #(`XLEN) rf_dffl(rf_wen[i], wbck_dest_dat, rf_r[i], clk);
        			end
        		end	
        	endgenerate
        	assign	read_src1_dat = rf_r[read_src1_idx];
        	assign	read_src2_dat = rf_r[read_src2_idx];
        
        	assign	x1_r	=	rf_r[1];
        	assign	endcode	=	rf_r[10];
        
        	export "DPI-C" task publicgetsignal;
        
%000000 	task publicgetsignal;
        		output	[`XLEN-1:0]	out_rf[`RFREG_NUM-1:0];
        			int j;
%000000 			for(j = 0; j < `RFREG_NUM;j = j + 1) begin
%000000 				out_rf[j] = rf_r[j];
        			end
        	endtask
        endmodule
        
