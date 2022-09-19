// a simple alu
//
`include "constants.svh"

`default_nettype none

//
module alu(
    input [4:0] alu_function,
    input [31:0] op_a,
    input [31:0] op_b,
    output logic [31:0] result,
    output result_eq_zero);

    // Implement the zero flag
    // assign result_eq_zero = 1'b0;

    // Compute result
    always_comb begin
        case (alu_function)


// `define ALU_ADD     5'b00001
// `define ALU_SUB     5'b00010
// `define ALU_XOR     5'b01001
// `define ALU_OR      5'b01010
// `define ALU_AND     5'b01011


            `ALU_ADD:   result = op_a + op_b;
            `ALU_SUB:   result = op_a - op_b;


            `ALU_XOR:   result = op_a ^ op_b;
            `ALU_OR:    result = op_a | op_b;
            `ALU_AND:   result = op_a & op_b;

            default: result = `ZERO;
        endcase

        if (result == `ZERO) begin
            result_eq_zero = 1'b1;
        end
        else begin
            result_eq_zero = 1'b0;
        end

    end

endmodule
