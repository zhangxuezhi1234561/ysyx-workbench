//      // verilator_coverage annotation
        module sirv_gnrl_dfflr # (
          parameter DW = 32
        ) (
        
%000004   input               lden, 
%000002   input      [DW-1:0] dnxt,
%000001   output     [DW-1:0] qout,
        
 000060   input               clk,
%000003   input               rst_n
        );
        
%000001 reg [DW-1:0] qout_r;
        
 000060 always @(posedge clk or negedge rst_n)
 000060 begin : DFFLR_PROC
 000012   if (rst_n == 1'b0)
 000012     qout_r <= {DW{1'b0}};
 000012   else if (lden == 1'b1)
 000012     qout_r <= dnxt;
        end
        
        assign qout = qout_r;    
        
        endmodule
        
