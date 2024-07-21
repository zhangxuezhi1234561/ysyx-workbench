//      // verilator_coverage annotation
        `include "defines.v"
        
        module exu_excp(
 000059     input               clk,
%000003     input               rst,
        
%000001     output              commit_trap,
        
%000000     output              alu_excp_i_ready,
%000002     input               alu_excp_i_valid,
%000000     input               alu_excp_i_ebreak,
        
%000001     output  [`XLEN-1:0] cmt_cause,
        
 000013     output  [`XLEN-1:0] endcode
        );
%000000     wire    excpirq_flush_ack   =   1'b1;
%000001     wire    excpirq_flush_req;
        
%000000     wire    alu_need_flush;
        
%000000     wire    alu_excp_i_ebreak4excp  =   alu_excp_i_ebreak;      //DCSR reg is not set
        
            assign  alu_need_flush  =   alu_excp_i_ebreak4excp;
        
%000001     wire    alu_excp_flush_req  =   alu_excp_i_valid & alu_need_flush;
        
%000000     wire    alu_excp_i_ready4nondbg =   excpirq_flush_ack;
            assign  alu_excp_i_ready        =   alu_excp_i_ready4nondbg;
        
            assign  excpirq_flush_req   =   alu_excp_flush_req;
%000001     wire    all_excp_flush_req  =   alu_excp_flush_req;
        
%000001     wire    excpirq_taken_ena   =   excpirq_flush_req & excpirq_flush_ack;
            assign  commit_trap         =   excpirq_taken_ena;
        
%000001     wire    excp_taken_ena  =   all_excp_flush_req & excpirq_taken_ena;
        
%000000     wire    alu_excp_flush_req_ebreak   =   (alu_excp_flush_req & alu_excp_i_ebreak4excp);      //!!!!!!!!!
        
%000001     wire    [`XLEN-1:0] excp_cause;
            assign  excp_cause[31:5]    =   27'b0;
            assign  excp_cause[4:0]     =   alu_excp_flush_req_ebreak ? 5'd3 : 5'h1F;
        
            assign  cmt_cause           =   excp_cause;
        
            import "DPI-C" function void npc_stop(input int a, input int b);
            // initial begin
            //     npc_stop(alu_excp_flush_req_ebreak);
            // end
%000000     always @(posedge alu_excp_flush_req_ebreak) begin 
%000000         npc_stop(alu_excp_flush_req_ebreak, endcode);
            end
        
        
        endmodule
        
