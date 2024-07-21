//      // verilator_coverage annotation
        module sirv_gnrl_dffl # (
          parameter DW = 32
        ) (
        
 000046   input               lden, 
%000001   input      [DW-1:0] dnxt,
 000013   output     [DW-1:0] qout,
        
 000059   input               clk 
        );
        
 000013 reg [DW-1:0] qout_r;
        
 000899 always @(posedge clk)
 000899 begin : DFFL_PROC
 000023   if (lden == 1'b1)
 000023     qout_r <= dnxt;
        end
        
        assign qout = qout_r;
        
        endmodule
        
