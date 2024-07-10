`include "defines.v"

module exu_alu_dpath(
    // ALU request the datapath
    input   alu_req_alu,

    input   alu_req_alu_add,
    input   alu_req_alu_xor,
    input   alu_req_alu_or,
    input   alu_req_alu_sltu,
    input   alu_req_alu_lui,

    input   [`XLEN-1:0] alu_req_alu_op1,
    input   [`XLEN-1:0] alu_req_alu_op2,
    input               bjp_req_alu_add,
    
    output  [`XLEN-1:0] alu_req_alu_res,
/////////////////////////////////////////////
    input   bjp_req_alu,

    input   [`XLEN-1:0] bjp_req_alu_op1,
    input   [`XLEN-1:0] bjp_req_alu_op2,

    output  [`XLEN-1:0] bjp_req_alu_add_res,
////////////////////////////////////////////
// AGU request the datapath
    input   agu_req_alu,
    input   [`XLEN-1:0] agu_req_alu_op1,
    input   [`XLEN-1:0] agu_req_alu_op2,
    input               agu_req_alu_add,
    output  [`XLEN-1:0] agu_req_alu_res
);   
    wire [`XLEN-1:0] mux_op1;
    wire [`XLEN-1:0] mux_op2;
    wire [`XLEN-1:0] misc_op1 = mux_op1[`XLEN-1:0];
    wire [`XLEN-1:0] misc_op2 = mux_op2[`XLEN-1:0];
    
    wire    op_add;
    wire    op_addsub   =   op_add;

    wire    op_or;
    wire    op_xor;

    wire    op_sltu;

    wire    op_mvop2;

    // Implement the Adder

    wire    op_unsigned     =   op_sltu;

    wire    [`ALU_ADDER_WIDTH-1:0]  misc_adder_op1 = 
        {{`ALU_ADDER_WIDTH-`XLEN{(~op_unsigned) & misc_op1[`XLEN-1]}},misc_op1};
    wire    [`ALU_ADDER_WIDTH-1:0]  misc_adder_op2 = 
        {{`ALU_ADDER_WIDTH-`XLEN{(~op_unsigned) & misc_op2[`XLEN-1]}},misc_op2};

    wire    [`ALU_ADDER_WIDTH-1:0]  adder_op1 = misc_adder_op1;
    wire    [`ALU_ADDER_WIDTH-1:0]  adder_op2 = misc_adder_op2;

    wire    adder_cin;
    wire    [`ALU_ADDER_WIDTH-1:0]  adder_in1;
    wire    [`ALU_ADDER_WIDTH-1:0]  adder_in2;
    wire    [`ALU_ADDER_WIDTH-1:0]  adder_res;    

    wire    adder_add;
    wire    adder_sub;

    assign  adder_add = op_add;
    assign  adder_sub = op_sltu;           //TODO

    wire    adder_addsub    =   adder_add | adder_sub;
    
    assign  adder_in1   =   {`ALU_ADDER_WIDTH{adder_addsub}} & (adder_op1);
    assign  adder_in2   =   {`ALU_ADDER_WIDTH{adder_addsub}} & (adder_sub ? (~adder_op2) : adder_op2);
    assign  adder_cin   =   adder_addsub & adder_sub;

    assign  adder_res   =   adder_in1 + adder_in2 + adder_cin; //{{(`ALU_ADDER_WIDTH-1){1'b0}}, adder_cin};
/////////////////////////////////////////////////////////////////
    wire    [`XLEN-1:0] xorer_in1;
    wire    [`XLEN-1:0] xorer_in2;
    wire    xorer_op    =   op_xor;

    assign  xorer_in1   =   {`XLEN{xorer_op}} & misc_op1;
    assign  xorer_in2   =   {`XLEN{xorer_op}} & misc_op2;   
    
    wire    [`XLEN-1:0] xorer_res   = xorer_in1 ^ xorer_in2;
    wire    [`XLEN-1:0] orer_res    = misc_op1 | misc_op2;


//////////////////////////////////////////////////////////////////
    wire    [`XLEN-1:0] mvop2_res   = misc_op2;

/////////////////////////////////////////////////////////////////    
    wire    op_slttu    =   op_sltu;
    wire    slttu_cmp_lt    =   op_slttu & adder_res[`XLEN];
    wire    [`XLEN-1:0] slttu_res = 
                slttu_cmp_lt ? 
                `XLEN'b1 : `XLEN'b0;
/////////////////////////////////////////////////////////////////
    // Generate the final result
    wire [`XLEN-1:0] alu_dpath_res = {
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
