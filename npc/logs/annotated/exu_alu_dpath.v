//      // verilator_coverage annotation
        `include "defines.v"
        
        module exu_alu_dpath(
            // ALU request the datapath
%000009     input   alu_req_alu,
        
%000009     input   alu_req_alu_add,
%000004     input   alu_req_alu_lui,
        
%000003     input   [`XLEN-1:0] alu_req_alu_op1,
%000001     input   [`XLEN-1:0] alu_req_alu_op2,
%000008     input               bjp_req_alu_add,
            
%000002     output  [`XLEN-1:0] alu_req_alu_res,
        /////////////////////////////////////////////
%000008     input   bjp_req_alu,
        
%000000     input   [`XLEN-1:0] bjp_req_alu_op1,
%000001     input   [`XLEN-1:0] bjp_req_alu_op2,
        
%000002     output  [`XLEN-1:0] bjp_req_alu_add_res
        );   
%000001     wire [`XLEN-1:0] mux_op1;
%000001     wire [`XLEN-1:0] mux_op2;
%000001     wire [`XLEN-1:0] misc_op1 = mux_op1[`XLEN-1:0];
%000001     wire [`XLEN-1:0] misc_op2 = mux_op2[`XLEN-1:0];
            
%000006     wire    op_add;
%000006     wire    op_addsub   =   op_add;
        
%000005     wire    op_mvop2;
        
            // Implement the Adder
%000001     wire    [`ALU_ADDER_WIDTH-1:0]  misc_adder_op1 = 
                {{`ALU_ADDER_WIDTH-`XLEN{misc_op1[`XLEN-1]}},misc_op1};
%000001     wire    [`ALU_ADDER_WIDTH-1:0]  misc_adder_op2 = 
                {{`ALU_ADDER_WIDTH-`XLEN{misc_op2[`XLEN-1]}},misc_op2};
        
%000001     wire    [`ALU_ADDER_WIDTH-1:0]  adder_op1 = misc_adder_op1;
%000001     wire    [`ALU_ADDER_WIDTH-1:0]  adder_op2 = misc_adder_op2;
        
%000001     wire    adder_cin;
%000001     wire    [`ALU_ADDER_WIDTH-1:0]  adder_in1;
%000001     wire    [`ALU_ADDER_WIDTH-1:0]  adder_in2;
%000002     wire    [`ALU_ADDER_WIDTH-1:0]  adder_res;    
        
%000006     wire    adder_add;
%000001     wire    adder_sub;
        
            assign  adder_add = op_add;
            assign  adder_sub = 1'd0;           //TODO
        
%000006     wire    adder_addsub    =   adder_add;
            
            assign  adder_in1   =   {`ALU_ADDER_WIDTH{adder_addsub}} & (adder_op1);
            assign  adder_in2   =   {`ALU_ADDER_WIDTH{adder_addsub}} & (adder_op2);
            assign  adder_cin   =   adder_addsub & adder_sub;
        
            assign  adder_res   =   adder_in1 + adder_in2 + adder_cin; //{{(`ALU_ADDER_WIDTH-1){1'b0}}, adder_cin};
        
        //////////////////////////////////////////////////////////////////
%000001     wire    [`XLEN-1:0] mvop2_res   = misc_op2;
        
        /////////////////////////////////////////////////////////////////    
            // Generate the final result
%000002     wire [`XLEN-1:0] alu_dpath_res = {
                ({`XLEN{op_addsub}} & adder_res[`XLEN-1:0])
              | ({`XLEN{op_mvop2}}  & mvop2_res) 
            };
        
            localparam  DPATH_MUX_WIDTH = ((`XLEN*2) + 2);      //TODO
            // The ALU_Datapath Mux for the requestors
            assign {
                mux_op1,
                mux_op2,
                op_add,
                op_mvop2
            } = (
                {DPATH_MUX_WIDTH{alu_req_alu}} & {
                    alu_req_alu_op1,
                    alu_req_alu_op2,
                    alu_req_alu_add,
                    alu_req_alu_lui
                })
              | ({DPATH_MUX_WIDTH{bjp_req_alu}} & {
                    bjp_req_alu_op1,
                    bjp_req_alu_op2,
                    bjp_req_alu_add,
                    1'b0 
              }) 
                ;
        
            assign  alu_req_alu_res     =   alu_dpath_res[`XLEN-1:0];
            assign  bjp_req_alu_add_res =   alu_dpath_res[`XLEN-1:0];
        
        endmodule
        
