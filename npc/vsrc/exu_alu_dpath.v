`include "defines.v"

module exu_alu_dpath(
    // ALU request the datapath
    input   alu_req_alu,

    input   alu_req_alu_add,
    input   [`XLEN-1:0] alu_req_alu_op1,
    input   [`XLEN-1:0] alu_req_alu_op2,
    
    output  [`XLEN-1:0] alu_req_alu_res
);

    localparam  DPATH_MUX_WIDTH = ((`XLEN*2) + 1);      //TODO
    wire    op_add;
    wire [`XLEN-1:0] mux_op1;
    wire [`XLEN-1:0] mux_op2;
    wire [`XLEN-1:0] misc_op1 = mux_op1[`XLEN-1:0];
    wire [`XLEN-1:0] misc_op2 = mux_op2[`XLEN-1:0];

    wire    adder_addsub    =   adder_add;

    // The ALU_Datapath Mux for the requestors
    assign {
        mux_op1,
        mux_op2,
        op_add
    } = (
        {DPATH_MUX_WIDTH{alu_req_alu}} & {
            alu_req_alu_op1,
            alu_req_alu_op2,
            alu_req_alu_add
        }
    );

    // Implement the Adder
    wire    adder_cin;
    wire    [`ALU_ADDER_WIDTH-1:0]  misc_adder_op1 = 
        {{`ALU_ADDER_WIDTH-`XLEN{misc_op1[`XLEN-1]}},misc_op1};
    wire    [`ALU_ADDER_WIDTH-1:0]  misc_adder_op2 = 
        {{`ALU_ADDER_WIDTH-`XLEN{misc_op2[`XLEN-1]}},misc_op2};

    wire    [`ALU_ADDER_WIDTH-1:0]  adder_op1 = misc_adder_op1;
    wire    [`ALU_ADDER_WIDTH-1:0]  adder_op2 = misc_adder_op2;

    wire    adder_cin;
    wire    [`ALU_ADDER_WIDTH-1:0]  adder_in1;
    wire    [`ALU_ADDER_WIDTH-1:0]  adder_in2;
    wire    [`ALU_ADDER_WIDTH-1:0]  adder_res;    

    wire    adder_add;
    wire    adder_sub;

    assign  adder_add = op_add;
    assign  adder_sub = 1'd0;           //TODO
    
    assign  adder_in1   =   {`ALU_ADDER_WIDTH{adder_addsub}} & (adder_op1);
    assign  adder_in2   =   {`ALU_ADDER_WIDTH{adder_addsub}} & (adder_op2);
    assign  adder_cin   =   adder_addsub & adder_sub;

    assign  adder_res   =   adder_in1 + adder_in2 + adder_cin; //{{(`ALU_ADDER_WIDTH-1){1'b0}}, adder_cin};

    wire    op_addsub   =   op_add;

    // Generate the final result
    wire [`XLEN-1:0] alu_dpath_res = {
        ({`XLEN{op_addsub}} & adder_res[`XLEN-1:0])
    };

    assign  alu_req_alu_res = alu_dpath_res[`XLEN-1:0];

endmodule
