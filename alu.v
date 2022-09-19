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

            `ALU_ADD:   result = op_a + op_b;
            `ALU_SUB:   result = op_a - op_b;


            `ALU_XOR:   result = op_a ^ op_b;
            `ALU_OR:    result = op_a | op_b;
            `ALU_AND:   result = op_a & op_b;



            `ALU_SLL:   result = op_a << op_b;
            `ALU_SRL:   result = op_a >> op_b;

            `ALU_SRA:   result = op_a >>> op_b;

            `ALU_SLT:   result = (op_a < op_b) ? 1 : 0;

            `ALU_SLTU:   
                        if (a[31] XOR b[31]) begin
                            result = a[31]
                        end else begin
                            result = (a-b)[31]
                        end


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
