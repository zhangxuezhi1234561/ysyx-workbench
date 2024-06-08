`include "defines.v"

module exu_excp(
    input               clk,
    input               rst,

    output              commit_trap,

    output              alu_excp_i_ready,
    input               alu_excp_i_valid,
    input               alu_excp_i_ebreak,

    output  [`XLEN-1:0] cmt_cause,

    output  [`XLEN-1:0] endcode
);
    wire    excpirq_flush_ack   =   1'b1;
    wire    excpirq_flush_req;

    wire    alu_need_flush;

    wire    alu_excp_i_ebreak4excp  =   alu_excp_i_ebreak;      //DCSR reg is not set

    assign  alu_need_flush  =   alu_excp_i_ebreak4excp;

    wire    alu_excp_flush_req  =   alu_excp_i_valid & alu_need_flush;

    wire    alu_excp_i_ready4nondbg =   excpirq_flush_ack;
    assign  alu_excp_i_ready        =   alu_excp_i_ready4nondbg;

    assign  excpirq_flush_req   =   alu_excp_flush_req;
    wire    all_excp_flush_req  =   alu_excp_flush_req;

    wire    excpirq_taken_ena   =   excpirq_flush_req & excpirq_flush_ack;
    assign  commit_trap         =   excpirq_taken_ena;

    wire    excp_taken_ena  =   all_excp_flush_req & excpirq_taken_ena;

    wire    alu_excp_flush_req_ebreak   =   (alu_excp_flush_req & alu_excp_i_ebreak4excp);      //!!!!!!!!!

    wire    [`XLEN-1:0] excp_cause;
    assign  excp_cause[31:5]    =   27'b0;
    assign  excp_cause[4:0]     =   alu_excp_flush_req_ebreak ? 5'd3 : 5'h1F;

    assign  cmt_cause           =   excp_cause;

    import "DPI-C" function void npc_stop(input int a, input int b);
    // initial begin
    //     npc_stop(alu_excp_flush_req_ebreak);
    // end
    always @(posedge alu_excp_flush_req_ebreak) begin 
        npc_stop(alu_excp_flush_req_ebreak, endcode);
    end


endmodule
