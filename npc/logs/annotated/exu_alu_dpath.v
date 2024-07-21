//      // verilator_coverage annotation
        `include "defines.v"
        
        module exu_alu_dpath(
            // ALU request the datapath
 000010     input   alu_req_alu,
        
%000008     input   alu_req_alu_add,
%000001     input   alu_req_alu_xor,
%000001     input   alu_req_alu_or,
%000001     input   alu_req_alu_sltu,
%000008     input   alu_req_alu_lui,
        
%000001     input   [`XLEN-1:0] alu_req_alu_op1,
%000001     input   [`XLEN-1:0] alu_req_alu_op2,
%000004     input               bjp_req_alu_add,
            
%000001     output  [`XLEN-1:0] alu_req_alu_res,
        /////////////////////////////////////////////
%000004     input   bjp_req_alu,
        
%000001     input   [`XLEN-1:0] bjp_req_alu_op1,
%000001     input   [`XLEN-1:0] bjp_req_alu_op2,
        
%000001     output  [`XLEN-1:0] bjp_req_alu_add_res,
        ////////////////////////////////////////////
        // AGU request the datapath
%000005     input   agu_req_alu,
%000002     input   [`XLEN-1:0] agu_req_alu_op1,
%000000     input   [`XLEN-1:0] agu_req_alu_op2,
%000000     input               agu_req_alu_add,
%000001     output  [`XLEN-1:0] agu_req_alu_res
        );   
%000003     wire [`XLEN-1:0] mux_op1;
%000001     wire [`XLEN-1:0] mux_op2;
%000003     wire [`XLEN-1:0] misc_op1 = mux_op1[`XLEN-1:0];
%000001     wire [`XLEN-1:0] misc_op2 = mux_op2[`XLEN-1:0];
            
%000001     wire    op_add;
%000001     wire    op_addsub   =   op_add;
        
%000001     wire    op_or;
%000000     wire    op_xor;
        
%000000     wire    op_sltu;
        
%000008     wire    op_mvop2;
        
            // Implement the Adder
        
%000000     wire    op_unsigned     =   op_sltu;
        
%000001     wire    [`ALU_ADDER_WIDTH-1:0]  misc_adder_op1 = 
                {{`ALU_ADDER_WIDTH-`XLEN{(~op_unsigned) & misc_op1[`XLEN-1]}},misc_op1};
%000001     wire    [`ALU_ADDER_WIDTH-1:0]  misc_adder_op2 = 
                {{`ALU_ADDER_WIDTH-`XLEN{(~op_unsigned) & misc_op2[`XLEN-1]}},misc_op2};
        
%000001     wire    [`ALU_ADDER_WIDTH-1:0]  adder_op1 = misc_adder_op1;
%000001     wire    [`ALU_ADDER_WIDTH-1:0]  adder_op2 = misc_adder_op2;
        
%000001     wire    adder_cin;
%000001     wire    [`ALU_ADDER_WIDTH-1:0]  adder_in1;
%000006     wire    [`ALU_ADDER_WIDTH-1:0]  adder_in2;
%000001     wire    [`ALU_ADDER_WIDTH-1:0]  adder_res;    
        
%000001     wire    adder_add;
%000000     wire    adder_sub;
        
            assign  adder_add = op_add;
            assign  adder_sub = op_sltu;           //TODO
        
%000001     wire    adder_addsub    =   adder_add | adder_sub;
            
            assign  adder_in1   =   {`ALU_ADDER_WIDTH{adder_addsub}} & (adder_op1);
            assign  adder_in2   =   {`ALU_ADDER_WIDTH{adder_addsub}} & (adder_sub ? (~adder_op2) : adder_op2);
            assign  adder_cin   =   adder_addsub & adder_sub;
        
            assign  adder_res   =   adder_in1 + adder_in2 + adder_cin; //{{(`ALU_ADDER_WIDTH-1){1'b0}}, adder_cin};
        /////////////////////////////////////////////////////////////////
%000000     wire    [`XLEN-1:0] xorer_in1;
%000001     wire    [`XLEN-1:0] xorer_in2;
%000000     wire    xorer_op    =   op_xor;
        
            assign  xorer_in1   =   {`XLEN{xorer_op}} & misc_op1;
            assign  xorer_in2   =   {`XLEN{xorer_op}} & misc_op2;   
            
%000001     wire    [`XLEN-1:0] xorer_res   = xorer_in1 ^ xorer_in2;
%000002     wire    [`XLEN-1:0] orer_res    = misc_op1 | misc_op2;
        
        
        //////////////////////////////////////////////////////////////////
%000001     wire    [`XLEN-1:0] mvop2_res   = misc_op2;
        
        /////////////////////////////////////////////////////////////////    
%000000     wire    op_slttu    =   op_sltu;
%000001     wire    slttu_cmp_lt    =   op_slttu & adder_res[`XLEN];
%000000     wire    [`XLEN-1:0] slttu_res = 
                        slttu_cmp_lt ? 
                        `XLEN'b1 : `XLEN'b0;
        /////////////////////////////////////////////////////////////////
            // Generate the final result
%000001     wire [`XLEN-1:0] alu_dpath_res = {
                ({`XLEN{op_or}}     & orer_res)
              | ({`XLEN{op_xor}}    & xorer_res)
              | ({`XLEN{op_addsub}} & adder_res[`XLEN-1:0])
              | ({`XLEN{op_mvop2}}  & mvop2_res) 
              | ({`XLEN{op_slttu}}  & slttu_res)
            };
        
            localparam  DPATH_MUX_WIDTH = ((`XLEN*2) + 5);      //TODO
            // The ALU_Datapath Mux for the requestors
            assign {
                mux_op1,
                mux_op2,
                op_add,
                op_or,
                op_xor,
                op_sltu,
                op_mvop2
            } = (
                {DPATH_MUX_WIDTH{alu_req_alu}} & {
                    alu_req_alu_op1,
                    alu_req_alu_op2,
                    alu_req_alu_add,
                    alu_req_alu_or,
                    alu_req_alu_xor,
                    alu_req_alu_sltu,
                    alu_req_alu_lui
                })
              | ({DPATH_MUX_WIDTH{bjp_req_alu}} & {
                    bjp_req_alu_op1,
                    bjp_req_alu_op2,
                    bjp_req_alu_add,
                    1'b0,
                    1'b0,
                    1'b0,
                    1'b0 
              }) 
              | ({DPATH_MUX_WIDTH{agu_req_alu}} & {
                    agu_req_alu_op1,
                    agu_req_alu_op2,
                    agu_req_alu_add,
                    1'b0,
                    1'b0,
                    1'b0,
                    1'b0
              })
                ;
        
            assign  alu_req_alu_res     =   alu_dpath_res[`XLEN-1:0];
            assign  agu_req_alu_res     =   alu_dpath_res[`XLEN-1:0];
            assign  bjp_req_alu_add_res =   alu_dpath_res[`XLEN-1:0];
        
        endmodule
        
