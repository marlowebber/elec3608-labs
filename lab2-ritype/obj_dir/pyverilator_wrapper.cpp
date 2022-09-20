#include <cstddef>
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtestbench.h"
    
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
const char* _pyverilator_module_name = "testbench";
const uint32_t _pyverilator_num_inputs = 2;
const char* _pyverilator_inputs[] = {"clock","reset"};
const uint32_t _pyverilator_input_widths[] = {1,1};

const uint32_t _pyverilator_num_outputs = 0;
const char* _pyverilator_outputs[] = {};
const uint32_t _pyverilator_output_widths[] = {};

const uint32_t _pyverilator_num_internal_signals = 12;
const char* _pyverilator_internal_signals[] = {"testbench__DOT__dut__DOT__alu_eq_zero","testbench__DOT__dut__DOT__alu_eq","testbench__DOT__dut__DOT__alu_op","testbench__DOT__dut__DOT__illegalinsn","testbench__DOT__dut__DOT__trapped","testbench__DOT__imem_data","testbench__DOT__return_reg","testbench__DOT__cycles","testbench__DOT__dut__DOT__alu_result","testbench__DOT__dut__DOT__alu_op_a","testbench__DOT__dut__DOT__alu_op_b","testbench__DOT__dut__DOT__pc"};
const uint32_t _pyverilator_internal_signal_widths[] = {1,1,5,1,1,32,32,32,32,32,32,32};

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
            // Verilated::flushCall();
            exit(0);
        }
        Verilated::gotFinish(true);
    }
}
// function definitions
// helper functions for basic verilator tasks
extern "C" { //Open an extern C closed in the footer
Vtestbench* construct() {
    Verilated::traceEverOn(true);
    Vtestbench* top = new Vtestbench();
    return top;
}
int eval(Vtestbench* top) {
    top->eval();
    main_time++;
    return 0;
}
int destruct(Vtestbench* top) {
    if (top != nullptr) {
        delete top;
        top = nullptr;
    }
    return 0;
}
VerilatedVcdC* start_vcd_trace(Vtestbench* top, const char* filename) {
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

uint32_t get_clock(Vtestbench* top){return top->clock;}
uint32_t get_reset(Vtestbench* top){return top->reset;}
uint32_t get_testbench__DOT__dut__DOT__alu_eq_zero(Vtestbench* top){return top->testbench__DOT__dut__DOT__alu_eq_zero;}
uint32_t get_testbench__DOT__dut__DOT__alu_eq(Vtestbench* top){return top->testbench__DOT__dut__DOT__alu_eq;}
uint32_t get_testbench__DOT__dut__DOT__alu_op(Vtestbench* top){return top->testbench__DOT__dut__DOT__alu_op;}
uint32_t get_testbench__DOT__dut__DOT__illegalinsn(Vtestbench* top){return top->testbench__DOT__dut__DOT__illegalinsn;}
uint32_t get_testbench__DOT__dut__DOT__trapped(Vtestbench* top){return top->testbench__DOT__dut__DOT__trapped;}
uint32_t get_testbench__DOT__imem_data(Vtestbench* top){return top->testbench__DOT__imem_data;}
uint32_t get_testbench__DOT__return_reg(Vtestbench* top){return top->testbench__DOT__return_reg;}
uint32_t get_testbench__DOT__cycles(Vtestbench* top){return top->testbench__DOT__cycles;}
uint32_t get_testbench__DOT__dut__DOT__alu_result(Vtestbench* top){return top->testbench__DOT__dut__DOT__alu_result;}
uint32_t get_testbench__DOT__dut__DOT__alu_op_a(Vtestbench* top){return top->testbench__DOT__dut__DOT__alu_op_a;}
uint32_t get_testbench__DOT__dut__DOT__alu_op_b(Vtestbench* top){return top->testbench__DOT__dut__DOT__alu_op_b;}
uint32_t get_testbench__DOT__dut__DOT__pc(Vtestbench* top){return top->testbench__DOT__dut__DOT__pc;}
int set_clock(Vtestbench* top, uint32_t new_value){ top->clock = new_value; return 0;}
int set_reset(Vtestbench* top, uint32_t new_value){ top->reset = new_value; return 0;}
}