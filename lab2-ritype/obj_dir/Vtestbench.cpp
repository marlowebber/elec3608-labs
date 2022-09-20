// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench) {
    Vtestbench__Syms* __restrict vlSymsp = __VlSymsp = new Vtestbench__Syms(this, name());
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtestbench::~Vtestbench() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void Vtestbench::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtestbench::eval\n"); );
    Vtestbench__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("testbench.sv", 20, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtestbench::_eval_initial_loop(Vtestbench__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("testbench.sv", 20, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtestbench::_initial__TOP__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_initial__TOP__1\n"); );
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1[3];
    // Body
    __Vtemp1[0U] = 0x2e686578U;
    __Vtemp1[1U] = 0x77617265U;
    __Vtemp1[2U] = 0x6669726dU;
    VL_READMEM_N(true, 8, 65536, 0, VL_CVT_PACK_STR_NW(3, __Vtemp1)
                 , vlTOPp->testbench__DOT__mem, 0, ~VL_ULL(0));
    vlTOPp->testbench__DOT__cycles = 0U;
}

VL_INLINE_OPT void Vtestbench::_sequent__TOP__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_sequent__TOP__2\n"); );
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvdim0__testbench__DOT__dut__DOT__regfile__v0;
    CData/*0:0*/ __Vdlyvset__testbench__DOT__dut__DOT__regfile__v0;
    IData/*31:0*/ __Vdly__testbench__DOT__cycles;
    IData/*31:0*/ __Vdly__testbench__DOT__dut__DOT__pc;
    IData/*31:0*/ __Vdlyvval__testbench__DOT__dut__DOT__regfile__v0;
    // Body
    __Vdly__testbench__DOT__cycles = vlTOPp->testbench__DOT__cycles;
    __Vdlyvset__testbench__DOT__dut__DOT__regfile__v0 = 0U;
    if (VL_UNLIKELY((0x10000U <= vlTOPp->testbench__DOT__dut__DOT__pc))) {
        VL_WRITEF("Memory access out of range: imem_addr = 0x%08x\n",
                  32,vlTOPp->testbench__DOT__dut__DOT__pc);
    }
    __Vdly__testbench__DOT__dut__DOT__pc = vlTOPp->testbench__DOT__dut__DOT__pc;
    __Vdly__testbench__DOT__cycles = ((IData)(1U) + vlTOPp->testbench__DOT__cycles);
    if (VL_UNLIKELY(vlTOPp->testbench__DOT__dut__DOT__trapped)) {
        VL_WRITEF("Simulated %0# cycles\n",32,vlTOPp->testbench__DOT__cycles);
        VL_FINISH_MT("testbench.sv", 82, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->testbench__DOT__dut__DOT__trapped)) 
                           & (~ (IData)(vlTOPp->reset)))))) {
        __Vdly__testbench__DOT__dut__DOT__pc = ((IData)(4U) 
                                                + vlTOPp->testbench__DOT__dut__DOT__pc);
        VL_WRITEF("pc = 0x%08x\n",32,vlTOPp->testbench__DOT__dut__DOT__pc);
        vlTOPp->testbench__DOT__return_reg = vlTOPp->testbench__DOT__dut__DOT__regfile
            [0xaU];
        __Vdlyvval__testbench__DOT__dut__DOT__regfile__v0 
            = vlTOPp->testbench__DOT__dut__DOT__alu_result;
        __Vdlyvset__testbench__DOT__dut__DOT__regfile__v0 = 1U;
        __Vdlyvdim0__testbench__DOT__dut__DOT__regfile__v0 
            = (0x1fU & (vlTOPp->testbench__DOT__imem_data 
                        >> 7U));
    }
    if (vlTOPp->reset) {
        __Vdly__testbench__DOT__dut__DOT__pc = 0U;
        vlTOPp->testbench__DOT__dut__DOT__trapped = 0U;
    }
    vlTOPp->testbench__DOT__cycles = __Vdly__testbench__DOT__cycles;
    if (__Vdlyvset__testbench__DOT__dut__DOT__regfile__v0) {
        vlTOPp->testbench__DOT__dut__DOT__regfile[__Vdlyvdim0__testbench__DOT__dut__DOT__regfile__v0] 
            = __Vdlyvval__testbench__DOT__dut__DOT__regfile__v0;
    }
    vlTOPp->testbench__DOT__dut__DOT__pc = __Vdly__testbench__DOT__dut__DOT__pc;
    vlTOPp->testbench__DOT__imem_data = ((vlTOPp->testbench__DOT__mem
                                          [(3U | (0xfffcU 
                                                  & vlTOPp->testbench__DOT__dut__DOT__pc))] 
                                          << 0x18U) 
                                         | ((vlTOPp->testbench__DOT__mem
                                             [(2U | 
                                               (0xfffcU 
                                                & vlTOPp->testbench__DOT__dut__DOT__pc))] 
                                             << 0x10U) 
                                            | ((vlTOPp->testbench__DOT__mem
                                                [(1U 
                                                  | (0xfffcU 
                                                     & vlTOPp->testbench__DOT__dut__DOT__pc))] 
                                                << 8U) 
                                               | vlTOPp->testbench__DOT__mem
                                               [(0xfffcU 
                                                 & vlTOPp->testbench__DOT__dut__DOT__pc)])));
    if ((0U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
        vlTOPp->testbench__DOT__dut__DOT__alu_op = 1U;
    } else {
        if ((0x13U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
            if ((0U == (7U & ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                         >> 0x16U)) 
                              | (7U & (vlTOPp->testbench__DOT__imem_data 
                                       >> 0xcU)))))) {
                vlTOPp->testbench__DOT__dut__DOT__alu_op = 1U;
            } else {
                if ((4U == (7U & ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                             >> 0x16U)) 
                                  | (7U & (vlTOPp->testbench__DOT__imem_data 
                                           >> 0xcU)))))) {
                    vlTOPp->testbench__DOT__dut__DOT__alu_op = 9U;
                } else {
                    if ((6U == (7U & ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                                 >> 0x16U)) 
                                      | (7U & (vlTOPp->testbench__DOT__imem_data 
                                               >> 0xcU)))))) {
                        vlTOPp->testbench__DOT__dut__DOT__alu_op = 0xaU;
                    }
                }
            }
        } else {
            if ((0x33U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
                if ((0U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                       >> 0x16U)) | 
                            (7U & (vlTOPp->testbench__DOT__imem_data 
                                   >> 0xcU))))) {
                    vlTOPp->testbench__DOT__dut__DOT__alu_op = 1U;
                } else {
                    if ((4U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                           >> 0x16U)) 
                                | (7U & (vlTOPp->testbench__DOT__imem_data 
                                         >> 0xcU))))) {
                        vlTOPp->testbench__DOT__dut__DOT__alu_op = 9U;
                    } else {
                        if ((6U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                               >> 0x16U)) 
                                    | (7U & (vlTOPp->testbench__DOT__imem_data 
                                             >> 0xcU))))) {
                            vlTOPp->testbench__DOT__dut__DOT__alu_op = 0xaU;
                        } else {
                            if ((1U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0x16U)) 
                                        | (7U & (vlTOPp->testbench__DOT__imem_data 
                                                 >> 0xcU))))) {
                                vlTOPp->testbench__DOT__dut__DOT__alu_op = 3U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->testbench__DOT__dut__DOT__alu_op_a = vlTOPp->testbench__DOT__dut__DOT__regfile
        [(0x1fU & (vlTOPp->testbench__DOT__imem_data 
                   >> 0xfU))];
    vlTOPp->testbench__DOT__dut__DOT__alu_op_b = ((0x13U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->testbench__DOT__imem_data))
                                                   ? 
                                                  ((((1U 
                                                      == 
                                                      ((0x3f8U 
                                                        & (vlTOPp->testbench__DOT__imem_data 
                                                           >> 0x16U)) 
                                                       | (7U 
                                                          & (vlTOPp->testbench__DOT__imem_data 
                                                             >> 0xcU)))) 
                                                     | (5U 
                                                        == 
                                                        ((0x3f8U 
                                                          & (vlTOPp->testbench__DOT__imem_data 
                                                             >> 0x16U)) 
                                                         | (7U 
                                                            & (vlTOPp->testbench__DOT__imem_data 
                                                               >> 0xcU))))) 
                                                    | (0x105U 
                                                       == 
                                                       ((0x3f8U 
                                                         & (vlTOPp->testbench__DOT__imem_data 
                                                            >> 0x16U)) 
                                                        | (7U 
                                                           & (vlTOPp->testbench__DOT__imem_data 
                                                              >> 0xcU)))))
                                                    ? 
                                                   VL_EXTENDS_II(32,6, 
                                                                 (0x1fU 
                                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                                     >> 0x14U)))
                                                    : 
                                                   VL_EXTENDS_II(32,12, 
                                                                 (0xfffU 
                                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                                     >> 0x14U))))
                                                   : 
                                                  vlTOPp->testbench__DOT__dut__DOT__regfile
                                                  [
                                                  (0x1fU 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0x14U))]);
    if ((0x10U & (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_op))) {
        vlTOPp->testbench__DOT__dut__DOT__alu_result = 0U;
    } else {
        if ((8U & (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_op))) {
            vlTOPp->testbench__DOT__dut__DOT__alu_result 
                = ((4U & (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_op))
                    ? 0U : ((2U & (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_op))
                             ? ((1U & (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_op))
                                 ? (vlTOPp->testbench__DOT__dut__DOT__alu_op_a 
                                    & vlTOPp->testbench__DOT__dut__DOT__alu_op_b)
                                 : (vlTOPp->testbench__DOT__dut__DOT__alu_op_a 
                                    | vlTOPp->testbench__DOT__dut__DOT__alu_op_b))
                             : ((1U & (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_op))
                                 ? (vlTOPp->testbench__DOT__dut__DOT__alu_op_a 
                                    ^ vlTOPp->testbench__DOT__dut__DOT__alu_op_b)
                                 : ((vlTOPp->testbench__DOT__dut__DOT__alu_op_a 
                                     < vlTOPp->testbench__DOT__dut__DOT__alu_op_b)
                                     ? 1U : 0U))));
        } else {
            if ((4U & (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_op))) {
                if ((2U & (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_op))) {
                    if ((1U & (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_op))) {
                        vlTOPp->testbench__DOT__dut__DOT__alu_result 
                            = (vlTOPp->testbench__DOT__dut__DOT__alu_op_a 
                               - vlTOPp->testbench__DOT__dut__DOT__alu_op_b);
                        vlTOPp->testbench__DOT__dut__DOT__alu_result 
                            = (1U & (vlTOPp->testbench__DOT__dut__DOT__alu_result 
                                     >> 0x1fU));
                    } else {
                        vlTOPp->testbench__DOT__dut__DOT__alu_result = 0U;
                    }
                } else {
                    vlTOPp->testbench__DOT__dut__DOT__alu_result 
                        = ((1U & (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_op))
                            ? ((0x1fU >= vlTOPp->testbench__DOT__dut__DOT__alu_op_b)
                                ? VL_SHIFTRS_III(32,32,32, vlTOPp->testbench__DOT__dut__DOT__alu_op_a, vlTOPp->testbench__DOT__dut__DOT__alu_op_b)
                                : VL_NEGATE_I((vlTOPp->testbench__DOT__dut__DOT__alu_op_a 
                                               >> 0x1fU)))
                            : ((0x1fU >= vlTOPp->testbench__DOT__dut__DOT__alu_op_b)
                                ? (vlTOPp->testbench__DOT__dut__DOT__alu_op_a 
                                   >> vlTOPp->testbench__DOT__dut__DOT__alu_op_b)
                                : 0U));
                }
            } else {
                vlTOPp->testbench__DOT__dut__DOT__alu_result 
                    = ((2U & (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_op))
                        ? ((1U & (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_op))
                            ? ((0x1fU >= vlTOPp->testbench__DOT__dut__DOT__alu_op_b)
                                ? (vlTOPp->testbench__DOT__dut__DOT__alu_op_a 
                                   << vlTOPp->testbench__DOT__dut__DOT__alu_op_b)
                                : 0U) : (vlTOPp->testbench__DOT__dut__DOT__alu_op_a 
                                         - vlTOPp->testbench__DOT__dut__DOT__alu_op_b))
                        : ((1U & (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_op))
                            ? (vlTOPp->testbench__DOT__dut__DOT__alu_op_a 
                               + vlTOPp->testbench__DOT__dut__DOT__alu_op_b)
                            : 0U));
            }
        }
    }
    vlTOPp->testbench__DOT__dut__DOT__alu_eq_zero = 
        (0U == vlTOPp->testbench__DOT__dut__DOT__alu_result);
}

void Vtestbench::_settle__TOP__3(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_settle__TOP__3\n"); );
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->testbench__DOT__imem_data = ((vlTOPp->testbench__DOT__mem
                                          [(3U | (0xfffcU 
                                                  & vlTOPp->testbench__DOT__dut__DOT__pc))] 
                                          << 0x18U) 
                                         | ((vlTOPp->testbench__DOT__mem
                                             [(2U | 
                                               (0xfffcU 
                                                & vlTOPp->testbench__DOT__dut__DOT__pc))] 
                                             << 0x10U) 
                                            | ((vlTOPp->testbench__DOT__mem
                                                [(1U 
                                                  | (0xfffcU 
                                                     & vlTOPp->testbench__DOT__dut__DOT__pc))] 
                                                << 8U) 
                                               | vlTOPp->testbench__DOT__mem
                                               [(0xfffcU 
                                                 & vlTOPp->testbench__DOT__dut__DOT__pc)])));
    if ((0U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
        vlTOPp->testbench__DOT__dut__DOT__alu_op = 1U;
    } else {
        if ((0x13U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
            if ((0U == (7U & ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                         >> 0x16U)) 
                              | (7U & (vlTOPp->testbench__DOT__imem_data 
                                       >> 0xcU)))))) {
                vlTOPp->testbench__DOT__dut__DOT__alu_op = 1U;
            } else {
                if ((4U == (7U & ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                             >> 0x16U)) 
                                  | (7U & (vlTOPp->testbench__DOT__imem_data 
                                           >> 0xcU)))))) {
                    vlTOPp->testbench__DOT__dut__DOT__alu_op = 9U;
                } else {
                    if ((6U == (7U & ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                                 >> 0x16U)) 
                                      | (7U & (vlTOPp->testbench__DOT__imem_data 
                                               >> 0xcU)))))) {
                        vlTOPp->testbench__DOT__dut__DOT__alu_op = 0xaU;
                    }
                }
            }
        } else {
            if ((0x33U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
                if ((0U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                       >> 0x16U)) | 
                            (7U & (vlTOPp->testbench__DOT__imem_data 
                                   >> 0xcU))))) {
                    vlTOPp->testbench__DOT__dut__DOT__alu_op = 1U;
                } else {
                    if ((4U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                           >> 0x16U)) 
                                | (7U & (vlTOPp->testbench__DOT__imem_data 
                                         >> 0xcU))))) {
                        vlTOPp->testbench__DOT__dut__DOT__alu_op = 9U;
                    } else {
                        if ((6U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                               >> 0x16U)) 
                                    | (7U & (vlTOPp->testbench__DOT__imem_data 
                                             >> 0xcU))))) {
                            vlTOPp->testbench__DOT__dut__DOT__alu_op = 0xaU;
                        } else {
                            if ((1U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0x16U)) 
                                        | (7U & (vlTOPp->testbench__DOT__imem_data 
                                                 >> 0xcU))))) {
                                vlTOPp->testbench__DOT__dut__DOT__alu_op = 3U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->testbench__DOT__dut__DOT__alu_op_a = vlTOPp->testbench__DOT__dut__DOT__regfile
        [(0x1fU & (vlTOPp->testbench__DOT__imem_data 
                   >> 0xfU))];
    vlTOPp->testbench__DOT__dut__DOT__alu_op_b = ((0x13U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->testbench__DOT__imem_data))
                                                   ? 
                                                  ((((1U 
                                                      == 
                                                      ((0x3f8U 
                                                        & (vlTOPp->testbench__DOT__imem_data 
                                                           >> 0x16U)) 
                                                       | (7U 
                                                          & (vlTOPp->testbench__DOT__imem_data 
                                                             >> 0xcU)))) 
                                                     | (5U 
                                                        == 
                                                        ((0x3f8U 
                                                          & (vlTOPp->testbench__DOT__imem_data 
                                                             >> 0x16U)) 
                                                         | (7U 
                                                            & (vlTOPp->testbench__DOT__imem_data 
                                                               >> 0xcU))))) 
                                                    | (0x105U 
                                                       == 
                                                       ((0x3f8U 
                                                         & (vlTOPp->testbench__DOT__imem_data 
                                                            >> 0x16U)) 
                                                        | (7U 
                                                           & (vlTOPp->testbench__DOT__imem_data 
                                                              >> 0xcU)))))
                                                    ? 
                                                   VL_EXTENDS_II(32,6, 
                                                                 (0x1fU 
                                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                                     >> 0x14U)))
                                                    : 
                                                   VL_EXTENDS_II(32,12, 
                                                                 (0xfffU 
                                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                                     >> 0x14U))))
                                                   : 
                                                  vlTOPp->testbench__DOT__dut__DOT__regfile
                                                  [
                                                  (0x1fU 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0x14U))]);
    if ((0x10U & (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_op))) {
        vlTOPp->testbench__DOT__dut__DOT__alu_result = 0U;
    } else {
        if ((8U & (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_op))) {
            vlTOPp->testbench__DOT__dut__DOT__alu_result 
                = ((4U & (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_op))
                    ? 0U : ((2U & (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_op))
                             ? ((1U & (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_op))
                                 ? (vlTOPp->testbench__DOT__dut__DOT__alu_op_a 
                                    & vlTOPp->testbench__DOT__dut__DOT__alu_op_b)
                                 : (vlTOPp->testbench__DOT__dut__DOT__alu_op_a 
                                    | vlTOPp->testbench__DOT__dut__DOT__alu_op_b))
                             : ((1U & (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_op))
                                 ? (vlTOPp->testbench__DOT__dut__DOT__alu_op_a 
                                    ^ vlTOPp->testbench__DOT__dut__DOT__alu_op_b)
                                 : ((vlTOPp->testbench__DOT__dut__DOT__alu_op_a 
                                     < vlTOPp->testbench__DOT__dut__DOT__alu_op_b)
                                     ? 1U : 0U))));
        } else {
            if ((4U & (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_op))) {
                if ((2U & (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_op))) {
                    if ((1U & (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_op))) {
                        vlTOPp->testbench__DOT__dut__DOT__alu_result 
                            = (vlTOPp->testbench__DOT__dut__DOT__alu_op_a 
                               - vlTOPp->testbench__DOT__dut__DOT__alu_op_b);
                        vlTOPp->testbench__DOT__dut__DOT__alu_result 
                            = (1U & (vlTOPp->testbench__DOT__dut__DOT__alu_result 
                                     >> 0x1fU));
                    } else {
                        vlTOPp->testbench__DOT__dut__DOT__alu_result = 0U;
                    }
                } else {
                    vlTOPp->testbench__DOT__dut__DOT__alu_result 
                        = ((1U & (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_op))
                            ? ((0x1fU >= vlTOPp->testbench__DOT__dut__DOT__alu_op_b)
                                ? VL_SHIFTRS_III(32,32,32, vlTOPp->testbench__DOT__dut__DOT__alu_op_a, vlTOPp->testbench__DOT__dut__DOT__alu_op_b)
                                : VL_NEGATE_I((vlTOPp->testbench__DOT__dut__DOT__alu_op_a 
                                               >> 0x1fU)))
                            : ((0x1fU >= vlTOPp->testbench__DOT__dut__DOT__alu_op_b)
                                ? (vlTOPp->testbench__DOT__dut__DOT__alu_op_a 
                                   >> vlTOPp->testbench__DOT__dut__DOT__alu_op_b)
                                : 0U));
                }
            } else {
                vlTOPp->testbench__DOT__dut__DOT__alu_result 
                    = ((2U & (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_op))
                        ? ((1U & (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_op))
                            ? ((0x1fU >= vlTOPp->testbench__DOT__dut__DOT__alu_op_b)
                                ? (vlTOPp->testbench__DOT__dut__DOT__alu_op_a 
                                   << vlTOPp->testbench__DOT__dut__DOT__alu_op_b)
                                : 0U) : (vlTOPp->testbench__DOT__dut__DOT__alu_op_a 
                                         - vlTOPp->testbench__DOT__dut__DOT__alu_op_b))
                        : ((1U & (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_op))
                            ? (vlTOPp->testbench__DOT__dut__DOT__alu_op_a 
                               + vlTOPp->testbench__DOT__dut__DOT__alu_op_b)
                            : 0U));
            }
        }
    }
    vlTOPp->testbench__DOT__dut__DOT__alu_eq_zero = 
        (0U == vlTOPp->testbench__DOT__dut__DOT__alu_result);
}

void Vtestbench::_eval(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_eval\n"); );
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void Vtestbench::_eval_initial(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_eval_initial\n"); );
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void Vtestbench::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::final\n"); );
    // Variables
    Vtestbench__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtestbench::_eval_settle(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_eval_settle\n"); );
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData Vtestbench::_change_request(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_change_request\n"); );
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtestbench::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG

void Vtestbench::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    testbench__DOT__imem_data = VL_RAND_RESET_I(32);
    testbench__DOT__return_reg = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<65536; ++__Vi0) {
            testbench__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    testbench__DOT__cycles = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__alu_eq_zero = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__alu_result = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__alu_eq = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__alu_op_a = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__alu_op_b = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__alu_op = VL_RAND_RESET_I(5);
    testbench__DOT__dut__DOT__trapped = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            testbench__DOT__dut__DOT__regfile[__Vi0] = VL_RAND_RESET_I(32);
    }}
    testbench__DOT__dut__DOT__pc = VL_RAND_RESET_I(32);
    __Vm_traceActivity = 0;
}
