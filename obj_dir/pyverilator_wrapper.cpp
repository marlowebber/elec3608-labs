#include <cstddef>
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Valu.h"
    
// pyverilator defined values
// first declare variables as extern
extern const char* _pyverilator_module_name;
extern const uint32_t _pyverilator_num_inputs;
extern const char* _pyverilator_inputs[];
extern const uint32_t _pyverilator_input_widths[];
extern const uint32_t _pyverilator_num_outputs;
extern const char* _pyverilator_outputs[];
extern const uint32_t _pyverilator_output_widths[];
extern const uint32_t _pyverilator_num_internal_signals;
extern const char* _pyverilator_internal_signals[];
extern const uint32_t _pyverilator_internal_signal_widths[];
extern const uint32_t _pyverilator_num_rules;
extern const char* _pyverilator_rules[];
extern const char* _pyverilator_json_data;
// now initialize the variables
const char* _pyverilator_module_name = "alu";
const uint32_t _pyverilator_num_inputs = 3;
const char* _pyverilator_inputs[] = {"alu_function","op_a","op_b"};
const uint32_t _pyverilator_input_widths[] = {5,32,32};

const uint32_t _pyverilator_num_outputs = 2;
const char* _pyverilator_outputs[] = {"result_eq_zero","result"};
const uint32_t _pyverilator_output_widths[] = {1,32};

const uint32_t _pyverilator_num_internal_signals = 0;
const char* _pyverilator_internal_signals[] = {};
const uint32_t _pyverilator_internal_signal_widths[] = {};

const char* _pyverilator_json_data = "null";

// this is required by verilator for verilog designs using $time
// main_time is incremented in eval
double main_time = 0;

// What to call when $finish is called
typedef void (*vl_finish_callback)(const char* filename, int line, const char* hier);
vl_finish_callback vl_user_finish = NULL;
    
double sc_time_stamp() {
return main_time;
}
void vl_finish (const char* filename, int linenum, const char* hier) VL_MT_UNSAFE {
    if (vl_user_finish) {
       (*vl_user_finish)(filename, linenum, hier);
    } else {
        // Default implementation
        VL_PRINTF("- %s:%d: Verilog $finish\n", filename, linenum);  // Not VL_PRINTF_MT, already on main thread
        if (Verilated::gotFinish()) {
            VL_PRINTF("- %s:%d: Second verilog $finish, exiting\n", filename, linenum);  // Not VL_PRINTF_MT, already on main thread
            Verilated::flushCall();
            exit(0);
        }
        Verilated::gotFinish(true);
    }
}
// function definitions
// helper functions for basic verilator tasks
extern "C" { //Open an extern C closed in the footer
Valu* construct() {
    Verilated::traceEverOn(true);
    Valu* top = new Valu();
    return top;
}
int eval(Valu* top) {
    top->eval();
    main_time++;
    return 0;
}
int destruct(Valu* top) {
    if (top != nullptr) {
        delete top;
        top = nullptr;
    }
    return 0;
}
VerilatedVcdC* start_vcd_trace(Valu* top, const char* filename) {
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open(filename);
    return tfp;
}
int add_to_vcd_trace(VerilatedVcdC* tfp, int time) {
    tfp->dump(time);
    return 0;
}
int flush_vcd_trace(VerilatedVcdC* tfp) {
    tfp->flush();
    return 0;
}
int stop_vcd_trace(VerilatedVcdC* tfp) {
    tfp->close();
    return 0;
}
bool get_finished() {
    return Verilated::gotFinish();
}
void set_finished(bool b) {
    Verilated::gotFinish(b);
}
void set_vl_finish_callback(vl_finish_callback callback) {
    vl_user_finish = callback;
}
void set_command_args(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
}

uint32_t get_result_eq_zero(Valu* top){return top->result_eq_zero;}
uint32_t get_result(Valu* top){return top->result;}
uint32_t get_alu_function(Valu* top){return top->alu_function;}
uint32_t get_op_a(Valu* top){return top->op_a;}
uint32_t get_op_b(Valu* top){return top->op_b;}
int set_alu_function(Valu* top, uint32_t new_value){ top->alu_function = new_value; return 0;}
int set_op_a(Valu* top, uint32_t new_value){ top->op_a = new_value; return 0;}
int set_op_b(Valu* top, uint32_t new_value){ top->op_b = new_value; return 0;}
}