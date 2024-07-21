//      // verilator_coverage annotation
        module sirv_gnrl_dffrs # (
          parameter DW = 32
        ) (
        
%000000   input      [DW-1:0] dnxt,
%000003   output     [DW-1:0] qout,
        
 000059   input               clk,
%000003   input               rst_n
        );
        
%000002 reg [DW-1:0] qout_r;
        
 000030 always @(posedge clk or negedge rst_n)
 000030 begin : DFFRS_PROC
%000006   if (rst_n == 1'b0)
%000006     qout_r <= {DW{1'b1}};
          else                  
 000024     qout_r <= dnxt;
        end
        
        assign qout = qout_r;
        
        endmodule
        
