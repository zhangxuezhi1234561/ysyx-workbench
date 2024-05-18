module sirv_gnrl_dffrs # (
  parameter DW = 32
) (

  input      [DW-1:0] dnxt,
  output     [DW-1:0] qout,

  input               clk,
  input               rst_n
);

reg [DW-1:0] qout_r;

always @(posedge clk or negedge rst_n)
begin : DFFRS_PROC
  if (rst_n == 1'b0)
    qout_r <= {DW{1'b1}};
  else                  
    qout_r <= dnxt;
end

assign qout = qout_r;

endmodule
