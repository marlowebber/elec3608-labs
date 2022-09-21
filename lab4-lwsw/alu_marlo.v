// a simple alu
//
`include "constants.svh"

`default_nettype none

//
module alu_marlo(
    input [4:0] alu_function,
    input [31:0] op_a,
    input [31:0] op_b,
    output logic [31:0] result,
    output result_eq_zero);

    // Implement the zero flag
    // assign result_eq_zero = 1'b0;

   wire signed  [31:0] op_a_signed;
   wire signed  [31:0] op_b_signed;

    assign op_a_signed = op_a;
    assign op_b_signed = op_b;

    // Compute result
    always_comb begin
        case (alu_function)

            `ALU_ADD:   result = op_a_signed + op_b_signed;
            `ALU_SUB:   result = op_a_signed - op_b_signed;


            `ALU_XOR:   result = op_a ^ op_b;
            `ALU_OR:    result = op_a | op_b;
            `ALU_AND:   result = op_a & op_b;



            `ALU_SLL:   result = op_a << op_b;

            `ALU_SRL:   result = op_a >> op_b;
            `ALU_SRA:   result = op_a_signed >>> op_b;

            `ALU_SLT:   
                    begin
                        result = (op_a_signed - op_b_signed);
                        result = result[31];//(op_a_signed < op_b_signed) ? 1 : 0;
                    end

            `ALU_SLTU:   
                    begin
                        result = (op_a < op_b) ? 1 : 0;
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
