//      // verilator_coverage annotation
        module sirv_gnrl_dffl # (
          parameter DW = 32
        ) (
        
 000031   input               lden, 
%000001   input      [DW-1:0] dnxt,
 000013   output     [DW-1:0] qout,
        
 000060   input               clk 
        );
        
 000013 reg [DW-1:0] qout_r;
        
 000899 always @(posedge clk)
 000899 begin : DFFL_PROC
 000011   if (lden == 1'b1)
 000011     qout_r <= dnxt;
        end
        
        assign qout = qout_r;
        
        endmodule
        
