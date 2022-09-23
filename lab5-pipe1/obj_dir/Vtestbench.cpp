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

void Vtestbench::_settle__TOP__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_settle__TOP__1\n"); );
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->testbench__DOT__dut__DOT__imm_b = (0x1ffeU 
                                               & (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b));
    vlTOPp->testbench__DOT__dut__DOT__imm_j = (0x1ffffeU 
                                               & vlTOPp->testbench__DOT__dut__DOT__imm_j);
    vlTOPp->testbench__DOT__dut__DOT__mem_rdata = (
                                                   (0x1fU 
                                                    >= 
                                                    (0x18U 
                                                     & (IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_func_q)))
                                                    ? 
                                                   (vlTOPp->testbench__DOT__dmem_rdata 
                                                    >> 
                                                    (0x18U 
                                                     & (IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_func_q)))
                                                    : 0U);
    if ((0U == (7U & (IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_func_q)))) {
        vlTOPp->testbench__DOT__dut__DOT__mem_rdata 
            = VL_EXTENDS_II(32,8, (0xffU & vlTOPp->testbench__DOT__dut__DOT__mem_rdata));
    } else {
        if ((1U == (7U & (IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_func_q)))) {
            vlTOPp->testbench__DOT__dut__DOT__mem_rdata 
                = VL_EXTENDS_II(32,16, (0xffffU & vlTOPp->testbench__DOT__dut__DOT__mem_rdata));
        } else {
            if ((4U == (7U & (IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_func_q)))) {
                vlTOPp->testbench__DOT__dut__DOT__mem_rdata 
                    = (0xffU & vlTOPp->testbench__DOT__dut__DOT__mem_rdata);
            } else {
                if ((5U == (7U & (IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_func_q)))) {
                    vlTOPp->testbench__DOT__dut__DOT__mem_rdata 
                        = (0xffffU & vlTOPp->testbench__DOT__dut__DOT__mem_rdata);
                }
            }
        }
    }
    vlTOPp->testbench__DOT__dut__DOT__next_wr = 0U;
    if ((0x40U & vlTOPp->testbench__DOT__imem_data)) {
        if ((0x20U & vlTOPp->testbench__DOT__imem_data)) {
            if ((1U & (~ (vlTOPp->testbench__DOT__imem_data 
                          >> 4U)))) {
                if ((8U & vlTOPp->testbench__DOT__imem_data)) {
                    if ((4U & vlTOPp->testbench__DOT__imem_data)) {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                            }
                        }
                    }
                } else {
                    if ((4U & vlTOPp->testbench__DOT__imem_data)) {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                if ((0U == (7U & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0xcU)))) {
                                    vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x20U & vlTOPp->testbench__DOT__imem_data)) {
            if ((0x10U & vlTOPp->testbench__DOT__imem_data)) {
                if ((1U & (~ (vlTOPp->testbench__DOT__imem_data 
                              >> 3U)))) {
                    if ((4U & vlTOPp->testbench__DOT__imem_data)) {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                            }
                        }
                    } else {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                if (((((((((0U == (
                                                   (0x3f8U 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0xcU)))) 
                                           | (0x100U 
                                              == ((0x3f8U 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 0xcU))))) 
                                          | (1U == 
                                             ((0x3f8U 
                                               & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0xcU))))) 
                                         | (2U == (
                                                   (0x3f8U 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0xcU))))) 
                                        | (3U == ((0x3f8U 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 0xcU))))) 
                                       | (4U == ((0x3f8U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0xcU))))) 
                                      | (5U == ((0x3f8U 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0xcU))))) 
                                     | (0x105U == (
                                                   (0x3f8U 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0xcU)))))) {
                                    vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                } else {
                                    if ((6U == ((0x3f8U 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0xcU))))) {
                                        vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                    } else {
                                        if ((7U == 
                                             ((0x3f8U 
                                               & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0xcU))))) {
                                            vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlTOPp->testbench__DOT__imem_data)) {
                if ((1U & (~ (vlTOPp->testbench__DOT__imem_data 
                              >> 3U)))) {
                    if ((4U & vlTOPp->testbench__DOT__imem_data)) {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                            }
                        }
                    } else {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                if (((((((((0U == (7U 
                                                   & ((0x3f8U 
                                                       & (vlTOPp->testbench__DOT__imem_data 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlTOPp->testbench__DOT__imem_data 
                                                            >> 0xcU))))) 
                                           | (2U == 
                                              (7U & 
                                               ((0x3f8U 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0xcU)))))) 
                                          | (3U == 
                                             (7U & 
                                              ((0x3f8U 
                                                & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0xcU)))))) 
                                         | (4U == (7U 
                                                   & ((0x3f8U 
                                                       & (vlTOPp->testbench__DOT__imem_data 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlTOPp->testbench__DOT__imem_data 
                                                            >> 0xcU)))))) 
                                        | (6U == (7U 
                                                  & ((0x3f8U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlTOPp->testbench__DOT__imem_data 
                                                           >> 0xcU)))))) 
                                       | (7U == (7U 
                                                 & ((0x3f8U 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlTOPp->testbench__DOT__imem_data 
                                                          >> 0xcU)))))) 
                                      | (1U == ((0x3f8U 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0xcU))))) 
                                     | (5U == ((0x3f8U 
                                                & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0xcU)))))) {
                                    vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                } else {
                                    if ((0x105U == 
                                         ((0x3f8U & 
                                           (vlTOPp->testbench__DOT__imem_data 
                                            >> 0x16U)) 
                                          | (7U & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0xcU))))) {
                                        vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable_q) {
        vlTOPp->testbench__DOT__dut__DOT__next_wr = 0U;
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->testbench__DOT__dut__DOT__reset_q))) {
        vlTOPp->testbench__DOT__dut__DOT__next_wr = 0U;
    }
    vlTOPp->testbench__DOT__dut__DOT__stage_1_en = vlTOPp->testbench__DOT__dut__DOT__stage_1_en_q;
    if (((((0x6fU == (0x7fU & vlTOPp->testbench__DOT__imem_data)) 
           | (0x67U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) 
          | (0x63U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) 
         | (0x17U == (0x7fU & vlTOPp->testbench__DOT__imem_data)))) {
        vlTOPp->testbench__DOT__dut__DOT__stage_1_en = 0U;
    }
    vlTOPp->testbench__DOT__dut__DOT__imm_s = ((0xfe0U 
                                                & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 7U)));
    vlTOPp->testbench__DOT__dut__DOT__rs1_value = (
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 0xfU)))
                                                    ? 
                                                   vlTOPp->testbench__DOT__dut__DOT__regfile
                                                   [
                                                   (0x1fU 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0xfU))]
                                                    : 0U);
    vlTOPp->testbench__DOT__dut__DOT__rs2_value = (
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 0x14U)))
                                                    ? 
                                                   vlTOPp->testbench__DOT__dut__DOT__regfile
                                                   [
                                                   (0x1fU 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0x14U))]
                                                    : 0U);
    vlTOPp->testbench__DOT__dut__DOT__imm_b = ((0xfffU 
                                                & (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)) 
                                               | (0x1000U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0x13U)));
    vlTOPp->testbench__DOT__dut__DOT__imm_b = ((0x1801U 
                                                & (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)) 
                                               | ((0x7e0U 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 7U))));
    vlTOPp->testbench__DOT__dut__DOT__imm_b = ((0x17ffU 
                                                & (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)) 
                                               | (0x800U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     << 4U)));
    vlTOPp->testbench__DOT__dut__DOT__imm_j = ((0xfffffU 
                                                & vlTOPp->testbench__DOT__dut__DOT__imm_j) 
                                               | (0x100000U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0xbU)));
    vlTOPp->testbench__DOT__dut__DOT__imm_j = ((0x1ff801U 
                                                & vlTOPp->testbench__DOT__dut__DOT__imm_j) 
                                               | (0x7feU 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0x14U)));
    vlTOPp->testbench__DOT__dut__DOT__imm_j = ((0x1ff7ffU 
                                                & vlTOPp->testbench__DOT__dut__DOT__imm_j) 
                                               | (0x800U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 9U)));
    vlTOPp->testbench__DOT__dut__DOT__imm_j = ((0x100fffU 
                                                & vlTOPp->testbench__DOT__dut__DOT__imm_j) 
                                               | (0xff000U 
                                                  & vlTOPp->testbench__DOT__imem_data));
    vlTOPp->testbench__DOT__dut__DOT__npc = ((IData)(4U) 
                                             + vlTOPp->testbench__DOT__dut__DOT__pc);
    vlTOPp->testbench__DOT__dut__DOT__next_rd = 0U;
    vlTOPp->testbench__DOT__dut__DOT__illinsn = 0U;
    vlTOPp->testbench__DOT__dut__DOT__mem_wr_enable = 0U;
    vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr = 0U;
    vlTOPp->testbench__DOT__dut__DOT__mem_wr_data = 0U;
    vlTOPp->testbench__DOT__dut__DOT__mem_wr_strb = 0U;
    vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable = 0U;
    vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr = 0U;
    vlTOPp->testbench__DOT__dut__DOT__mem_rd_reg = 0U;
    vlTOPp->testbench__DOT__dut__DOT__mem_rd_func = 0U;
    if ((0x40U & vlTOPp->testbench__DOT__imem_data)) {
        if ((0x20U & vlTOPp->testbench__DOT__imem_data)) {
            if ((0x10U & vlTOPp->testbench__DOT__imem_data)) {
                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
            } else {
                if ((8U & vlTOPp->testbench__DOT__imem_data)) {
                    if ((4U & vlTOPp->testbench__DOT__imem_data)) {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                    = vlTOPp->testbench__DOT__dut__DOT__npc;
                                vlTOPp->testbench__DOT__dut__DOT__npc 
                                    = (vlTOPp->testbench__DOT__dut__DOT__pc 
                                       + VL_EXTENDS_II(32,21, vlTOPp->testbench__DOT__dut__DOT__imm_j));
                                if ((0U != (3U & vlTOPp->testbench__DOT__dut__DOT__npc))) {
                                    vlTOPp->testbench__DOT__dut__DOT__npc 
                                        = (0xfffffffcU 
                                           & vlTOPp->testbench__DOT__dut__DOT__npc);
                                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                }
                            } else {
                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                            }
                        } else {
                            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                        }
                    } else {
                        vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                    }
                } else {
                    if ((4U & vlTOPp->testbench__DOT__imem_data)) {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                if ((0U == (7U & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0xcU)))) {
                                    vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                        = vlTOPp->testbench__DOT__dut__DOT__npc;
                                    vlTOPp->testbench__DOT__dut__DOT__npc 
                                        = (0xfffffffeU 
                                           & (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                              + VL_EXTENDS_II(32,12, 
                                                              (0xfffU 
                                                               & (vlTOPp->testbench__DOT__imem_data 
                                                                  >> 0x14U)))));
                                } else {
                                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                }
                                if ((0U != (3U & vlTOPp->testbench__DOT__dut__DOT__npc))) {
                                    vlTOPp->testbench__DOT__dut__DOT__npc 
                                        = (0xfffffffcU 
                                           & vlTOPp->testbench__DOT__dut__DOT__npc);
                                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                }
                            } else {
                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                            }
                        } else {
                            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                        }
                    } else {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                if ((0x4000U & vlTOPp->testbench__DOT__imem_data)) {
                                    if ((0x2000U & vlTOPp->testbench__DOT__imem_data)) {
                                        if ((0x1000U 
                                             & vlTOPp->testbench__DOT__imem_data)) {
                                            if ((vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                 >= vlTOPp->testbench__DOT__dut__DOT__rs2_value)) {
                                                vlTOPp->testbench__DOT__dut__DOT__npc 
                                                    = 
                                                    (vlTOPp->testbench__DOT__dut__DOT__pc 
                                                     + 
                                                     VL_EXTENDS_II(32,13, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)));
                                            }
                                        } else {
                                            if ((vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                 < vlTOPp->testbench__DOT__dut__DOT__rs2_value)) {
                                                vlTOPp->testbench__DOT__dut__DOT__npc 
                                                    = 
                                                    (vlTOPp->testbench__DOT__dut__DOT__pc 
                                                     + 
                                                     VL_EXTENDS_II(32,13, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)));
                                            }
                                        }
                                    } else {
                                        if ((0x1000U 
                                             & vlTOPp->testbench__DOT__imem_data)) {
                                            if (VL_GTES_III(1,32,32, vlTOPp->testbench__DOT__dut__DOT__rs1_value, vlTOPp->testbench__DOT__dut__DOT__rs2_value)) {
                                                vlTOPp->testbench__DOT__dut__DOT__npc 
                                                    = 
                                                    (vlTOPp->testbench__DOT__dut__DOT__pc 
                                                     + 
                                                     VL_EXTENDS_II(32,13, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)));
                                            }
                                        } else {
                                            if (VL_LTS_III(1,32,32, vlTOPp->testbench__DOT__dut__DOT__rs1_value, vlTOPp->testbench__DOT__dut__DOT__rs2_value)) {
                                                vlTOPp->testbench__DOT__dut__DOT__npc 
                                                    = 
                                                    (vlTOPp->testbench__DOT__dut__DOT__pc 
                                                     + 
                                                     VL_EXTENDS_II(32,13, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)));
                                            }
                                        }
                                    }
                                } else {
                                    if ((0x2000U & vlTOPp->testbench__DOT__imem_data)) {
                                        vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                    } else {
                                        if ((0x1000U 
                                             & vlTOPp->testbench__DOT__imem_data)) {
                                            if ((vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                 != vlTOPp->testbench__DOT__dut__DOT__rs2_value)) {
                                                vlTOPp->testbench__DOT__dut__DOT__npc 
                                                    = 
                                                    (vlTOPp->testbench__DOT__dut__DOT__pc 
                                                     + 
                                                     VL_EXTENDS_II(32,13, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)));
                                            }
                                        } else {
                                            if ((vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                 == vlTOPp->testbench__DOT__dut__DOT__rs2_value)) {
                                                vlTOPp->testbench__DOT__dut__DOT__npc 
                                                    = 
                                                    (vlTOPp->testbench__DOT__dut__DOT__pc 
                                                     + 
                                                     VL_EXTENDS_II(32,13, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)));
                                            }
                                        }
                                    }
                                }
                                if ((0U != (3U & vlTOPp->testbench__DOT__dut__DOT__npc))) {
                                    vlTOPp->testbench__DOT__dut__DOT__npc 
                                        = (0xfffffffcU 
                                           & vlTOPp->testbench__DOT__dut__DOT__npc);
                                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                }
                            } else {
                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                            }
                        } else {
                            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
        }
    } else {
        if ((0x20U & vlTOPp->testbench__DOT__imem_data)) {
            if ((0x10U & vlTOPp->testbench__DOT__imem_data)) {
                if ((8U & vlTOPp->testbench__DOT__imem_data)) {
                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                } else {
                    if ((4U & vlTOPp->testbench__DOT__imem_data)) {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                    = (0xfffff000U 
                                       & vlTOPp->testbench__DOT__imem_data);
                            } else {
                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                            }
                        } else {
                            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                        }
                    } else {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                if (((((((((0U == (
                                                   (0x3f8U 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0xcU)))) 
                                           | (0x100U 
                                              == ((0x3f8U 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 0xcU))))) 
                                          | (1U == 
                                             ((0x3f8U 
                                               & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0xcU))))) 
                                         | (2U == (
                                                   (0x3f8U 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0xcU))))) 
                                        | (3U == ((0x3f8U 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 0xcU))))) 
                                       | (4U == ((0x3f8U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0xcU))))) 
                                      | (5U == ((0x3f8U 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0xcU))))) 
                                     | (0x105U == (
                                                   (0x3f8U 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0xcU)))))) {
                                    vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                        = ((0U == (
                                                   (0x3f8U 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0xcU))))
                                            ? (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                               + vlTOPp->testbench__DOT__dut__DOT__rs2_value)
                                            : ((0x100U 
                                                == 
                                                ((0x3f8U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0xcU))))
                                                ? (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                   - vlTOPp->testbench__DOT__dut__DOT__rs2_value)
                                                : (
                                                   (1U 
                                                    == 
                                                    ((0x3f8U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlTOPp->testbench__DOT__imem_data 
                                                           >> 0xcU))))
                                                    ? 
                                                   (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                    << 
                                                    (0x1fU 
                                                     & vlTOPp->testbench__DOT__dut__DOT__rs2_value))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     ((0x3f8U 
                                                       & (vlTOPp->testbench__DOT__imem_data 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlTOPp->testbench__DOT__imem_data 
                                                            >> 0xcU))))
                                                     ? 
                                                    VL_LTS_III(32,32,32, vlTOPp->testbench__DOT__dut__DOT__rs1_value, vlTOPp->testbench__DOT__dut__DOT__rs2_value)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      ((0x3f8U 
                                                        & (vlTOPp->testbench__DOT__imem_data 
                                                           >> 0x16U)) 
                                                       | (7U 
                                                          & (vlTOPp->testbench__DOT__imem_data 
                                                             >> 0xcU))))
                                                      ? 
                                                     (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                      < vlTOPp->testbench__DOT__dut__DOT__rs2_value)
                                                      : 
                                                     ((4U 
                                                       == 
                                                       ((0x3f8U 
                                                         & (vlTOPp->testbench__DOT__imem_data 
                                                            >> 0x16U)) 
                                                        | (7U 
                                                           & (vlTOPp->testbench__DOT__imem_data 
                                                              >> 0xcU))))
                                                       ? 
                                                      (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                       ^ vlTOPp->testbench__DOT__dut__DOT__rs2_value)
                                                       : 
                                                      ((5U 
                                                        == 
                                                        ((0x3f8U 
                                                          & (vlTOPp->testbench__DOT__imem_data 
                                                             >> 0x16U)) 
                                                         | (7U 
                                                            & (vlTOPp->testbench__DOT__imem_data 
                                                               >> 0xcU))))
                                                        ? 
                                                       (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                        >> 
                                                        (0x1fU 
                                                         & vlTOPp->testbench__DOT__dut__DOT__rs2_value))
                                                        : 
                                                       VL_SHIFTRS_III(32,32,5, vlTOPp->testbench__DOT__dut__DOT__rs1_value, 
                                                                      (0x1fU 
                                                                       & vlTOPp->testbench__DOT__dut__DOT__rs2_value)))))))));
                                } else {
                                    if ((6U == ((0x3f8U 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0xcU))))) {
                                        vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                            = (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                               | vlTOPp->testbench__DOT__dut__DOT__rs2_value);
                                    } else {
                                        if ((7U == 
                                             ((0x3f8U 
                                               & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0xcU))))) {
                                            vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                                = (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                   & vlTOPp->testbench__DOT__dut__DOT__rs2_value);
                                        } else {
                                            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                            }
                        } else {
                            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                        }
                    }
                }
            } else {
                if ((8U & vlTOPp->testbench__DOT__imem_data)) {
                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                } else {
                    if ((4U & vlTOPp->testbench__DOT__imem_data)) {
                        vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                    } else {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr 
                                    = (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                       + VL_EXTENDS_II(32,12, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_s)));
                                if ((((0U == (0x1cU 
                                              & ((0x1cU 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0xaU)) 
                                                 | (3U 
                                                    & vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr)))) 
                                      | (4U == (0x1dU 
                                                & ((0x1cU 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0xaU)) 
                                                   | (3U 
                                                      & vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr))))) 
                                     | (8U == ((0x1cU 
                                                & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0xaU)) 
                                               | (3U 
                                                  & vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr))))) {
                                    vlTOPp->testbench__DOT__dut__DOT__mem_wr_enable = 1U;
                                    vlTOPp->testbench__DOT__dut__DOT__mem_wr_data 
                                        = vlTOPp->testbench__DOT__dut__DOT__rs2_value;
                                    vlTOPp->testbench__DOT__dut__DOT__mem_wr_strb = 0xfU;
                                    if ((0U == (7U 
                                                & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0xcU)))) {
                                        vlTOPp->testbench__DOT__dut__DOT__mem_wr_strb = 1U;
                                    } else {
                                        if ((1U == 
                                             (7U & 
                                              (vlTOPp->testbench__DOT__imem_data 
                                               >> 0xcU)))) {
                                            vlTOPp->testbench__DOT__dut__DOT__mem_wr_strb = 3U;
                                        } else {
                                            if ((2U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0xcU)))) {
                                                vlTOPp->testbench__DOT__dut__DOT__mem_wr_strb = 0xfU;
                                            }
                                        }
                                    }
                                    vlTOPp->testbench__DOT__dut__DOT__mem_wr_data 
                                        = ((0x1fU >= 
                                            (0x18U 
                                             & (vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr 
                                                << 3U)))
                                            ? (vlTOPp->testbench__DOT__dut__DOT__mem_wr_data 
                                               << (0x18U 
                                                   & (vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr 
                                                      << 3U)))
                                            : 0U);
                                    vlTOPp->testbench__DOT__dut__DOT__mem_wr_strb 
                                        = (0xfU & ((IData)(vlTOPp->testbench__DOT__dut__DOT__mem_wr_strb) 
                                                   << 
                                                   (3U 
                                                    & vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr)));
                                    vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr 
                                        = (0xfffffffcU 
                                           & vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr);
                                } else {
                                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                }
                            } else {
                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                            }
                        } else {
                            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlTOPp->testbench__DOT__imem_data)) {
                if ((8U & vlTOPp->testbench__DOT__imem_data)) {
                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                } else {
                    if ((4U & vlTOPp->testbench__DOT__imem_data)) {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                    = ((0xfffff000U 
                                        & vlTOPp->testbench__DOT__imem_data) 
                                       + vlTOPp->testbench__DOT__dut__DOT__pc);
                            } else {
                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                            }
                        } else {
                            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                        }
                    } else {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                if (((((((((0U == (7U 
                                                   & ((0x3f8U 
                                                       & (vlTOPp->testbench__DOT__imem_data 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlTOPp->testbench__DOT__imem_data 
                                                            >> 0xcU))))) 
                                           | (2U == 
                                              (7U & 
                                               ((0x3f8U 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0xcU)))))) 
                                          | (3U == 
                                             (7U & 
                                              ((0x3f8U 
                                                & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0xcU)))))) 
                                         | (4U == (7U 
                                                   & ((0x3f8U 
                                                       & (vlTOPp->testbench__DOT__imem_data 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlTOPp->testbench__DOT__imem_data 
                                                            >> 0xcU)))))) 
                                        | (6U == (7U 
                                                  & ((0x3f8U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlTOPp->testbench__DOT__imem_data 
                                                           >> 0xcU)))))) 
                                       | (7U == (7U 
                                                 & ((0x3f8U 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlTOPp->testbench__DOT__imem_data 
                                                          >> 0xcU)))))) 
                                      | (1U == ((0x3f8U 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0xcU))))) 
                                     | (5U == ((0x3f8U 
                                                & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0xcU)))))) {
                                    vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                        = ((0U == (7U 
                                                   & ((0x3f8U 
                                                       & (vlTOPp->testbench__DOT__imem_data 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlTOPp->testbench__DOT__imem_data 
                                                            >> 0xcU)))))
                                            ? (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                               + VL_EXTENDS_II(32,12, 
                                                               (0xfffU 
                                                                & (vlTOPp->testbench__DOT__imem_data 
                                                                   >> 0x14U))))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & ((0x3f8U 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlTOPp->testbench__DOT__imem_data 
                                                          >> 0xcU)))))
                                                ? VL_LTS_III(32,32,32, vlTOPp->testbench__DOT__dut__DOT__rs1_value, 
                                                             VL_EXTENDS_II(32,12, 
                                                                           (0xfffU 
                                                                            & (vlTOPp->testbench__DOT__imem_data 
                                                                               >> 0x14U))))
                                                : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((0x3f8U 
                                                         & (vlTOPp->testbench__DOT__imem_data 
                                                            >> 0x16U)) 
                                                        | (7U 
                                                           & (vlTOPp->testbench__DOT__imem_data 
                                                              >> 0xcU)))))
                                                    ? 
                                                   (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                    < 
                                                    VL_EXTENDS_II(32,12, 
                                                                  (0xfffU 
                                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                                      >> 0x14U))))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & ((0x3f8U 
                                                          & (vlTOPp->testbench__DOT__imem_data 
                                                             >> 0x16U)) 
                                                         | (7U 
                                                            & (vlTOPp->testbench__DOT__imem_data 
                                                               >> 0xcU)))))
                                                     ? 
                                                    (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                     ^ 
                                                     VL_EXTENDS_II(32,12, 
                                                                   (0xfffU 
                                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                                       >> 0x14U))))
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & ((0x3f8U 
                                                           & (vlTOPp->testbench__DOT__imem_data 
                                                              >> 0x16U)) 
                                                          | (7U 
                                                             & (vlTOPp->testbench__DOT__imem_data 
                                                                >> 0xcU)))))
                                                      ? 
                                                     (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                      | VL_EXTENDS_II(32,12, 
                                                                      (0xfffU 
                                                                       & (vlTOPp->testbench__DOT__imem_data 
                                                                          >> 0x14U))))
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (7U 
                                                        & ((0x3f8U 
                                                            & (vlTOPp->testbench__DOT__imem_data 
                                                               >> 0x16U)) 
                                                           | (7U 
                                                              & (vlTOPp->testbench__DOT__imem_data 
                                                                 >> 0xcU)))))
                                                       ? 
                                                      (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                       & VL_EXTENDS_II(32,12, 
                                                                       (0xfffU 
                                                                        & (vlTOPp->testbench__DOT__imem_data 
                                                                           >> 0x14U))))
                                                       : 
                                                      ((1U 
                                                        == 
                                                        ((0x3f8U 
                                                          & (vlTOPp->testbench__DOT__imem_data 
                                                             >> 0x16U)) 
                                                         | (7U 
                                                            & (vlTOPp->testbench__DOT__imem_data 
                                                               >> 0xcU))))
                                                        ? 
                                                       (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                        << 
                                                        (0x1fU 
                                                         & (vlTOPp->testbench__DOT__imem_data 
                                                            >> 0x14U)))
                                                        : 
                                                       (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                        >> 
                                                        (0x1fU 
                                                         & (vlTOPp->testbench__DOT__imem_data 
                                                            >> 0x14U))))))))));
                                } else {
                                    if ((0x105U == 
                                         ((0x3f8U & 
                                           (vlTOPp->testbench__DOT__imem_data 
                                            >> 0x16U)) 
                                          | (7U & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0xcU))))) {
                                        vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                            = VL_SHIFTRS_III(32,32,5, vlTOPp->testbench__DOT__dut__DOT__rs1_value, 
                                                             (0x1fU 
                                                              & (vlTOPp->testbench__DOT__imem_data 
                                                                 >> 0x14U)));
                                    } else {
                                        vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                            }
                        } else {
                            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                        }
                    }
                }
            } else {
                if ((8U & vlTOPp->testbench__DOT__imem_data)) {
                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                } else {
                    if ((4U & vlTOPp->testbench__DOT__imem_data)) {
                        vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                    } else {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                    = (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                       + VL_EXTENDS_II(32,12, 
                                                       (0xfffU 
                                                        & (vlTOPp->testbench__DOT__imem_data 
                                                           >> 0x14U))));
                                if ((0x4000U & vlTOPp->testbench__DOT__imem_data)) {
                                    if ((0x2000U & vlTOPp->testbench__DOT__imem_data)) {
                                        vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                    } else {
                                        if ((0x1000U 
                                             & vlTOPp->testbench__DOT__imem_data)) {
                                            if ((1U 
                                                 & vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr)) {
                                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                            } else {
                                                vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable = 1U;
                                                vlTOPp->testbench__DOT__dut__DOT__mem_rd_reg 
                                                    = 
                                                    (0x1fU 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 7U));
                                                vlTOPp->testbench__DOT__dut__DOT__mem_rd_func 
                                                    = 
                                                    ((0x18U 
                                                      & (vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                         << 3U)) 
                                                     | (7U 
                                                        & (vlTOPp->testbench__DOT__imem_data 
                                                           >> 0xcU)));
                                                vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                    = 
                                                    (0xfffffffcU 
                                                     & vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr);
                                            }
                                        } else {
                                            vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable = 1U;
                                            vlTOPp->testbench__DOT__dut__DOT__mem_rd_reg 
                                                = (0x1fU 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 7U));
                                            vlTOPp->testbench__DOT__dut__DOT__mem_rd_func 
                                                = (
                                                   (0x18U 
                                                    & (vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                       << 3U)) 
                                                   | (7U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0xcU)));
                                            vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                = (0xfffffffcU 
                                                   & vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr);
                                        }
                                    }
                                } else {
                                    if ((0x2000U & vlTOPp->testbench__DOT__imem_data)) {
                                        if ((0x1000U 
                                             & vlTOPp->testbench__DOT__imem_data)) {
                                            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                        } else {
                                            if ((2U 
                                                 & vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr)) {
                                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                            } else {
                                                if (
                                                    (1U 
                                                     & vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr)) {
                                                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                                } else {
                                                    vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable = 1U;
                                                    vlTOPp->testbench__DOT__dut__DOT__mem_rd_reg 
                                                        = 
                                                        (0x1fU 
                                                         & (vlTOPp->testbench__DOT__imem_data 
                                                            >> 7U));
                                                    vlTOPp->testbench__DOT__dut__DOT__mem_rd_func 
                                                        = 
                                                        ((0x18U 
                                                          & (vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                             << 3U)) 
                                                         | (7U 
                                                            & (vlTOPp->testbench__DOT__imem_data 
                                                               >> 0xcU)));
                                                    vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                        = 
                                                        (0xfffffffcU 
                                                         & vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr);
                                                }
                                            }
                                        }
                                    } else {
                                        if ((0x1000U 
                                             & vlTOPp->testbench__DOT__imem_data)) {
                                            if ((1U 
                                                 & vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr)) {
                                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                            } else {
                                                vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable = 1U;
                                                vlTOPp->testbench__DOT__dut__DOT__mem_rd_reg 
                                                    = 
                                                    (0x1fU 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 7U));
                                                vlTOPp->testbench__DOT__dut__DOT__mem_rd_func 
                                                    = 
                                                    ((0x18U 
                                                      & (vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                         << 3U)) 
                                                     | (7U 
                                                        & (vlTOPp->testbench__DOT__imem_data 
                                                           >> 0xcU)));
                                                vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                    = 
                                                    (0xfffffffcU 
                                                     & vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr);
                                            }
                                        } else {
                                            vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable = 1U;
                                            vlTOPp->testbench__DOT__dut__DOT__mem_rd_reg 
                                                = (0x1fU 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 7U));
                                            vlTOPp->testbench__DOT__dut__DOT__mem_rd_func 
                                                = (
                                                   (0x18U 
                                                    & (vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                       << 3U)) 
                                                   | (7U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0xcU)));
                                            vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                = (0xfffffffcU 
                                                   & vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr);
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                            }
                        } else {
                            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable_q) {
        vlTOPp->testbench__DOT__dut__DOT__npc = vlTOPp->testbench__DOT__dut__DOT__pc;
        vlTOPp->testbench__DOT__dut__DOT__illinsn = 0U;
        vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable = 0U;
        vlTOPp->testbench__DOT__dut__DOT__mem_wr_enable = 0U;
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->testbench__DOT__dut__DOT__reset_q))) {
        vlTOPp->testbench__DOT__dut__DOT__npc = 0U;
        vlTOPp->testbench__DOT__dut__DOT__illinsn = 0U;
        vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable = 0U;
        vlTOPp->testbench__DOT__dut__DOT__mem_wr_enable = 0U;
    }
    vlTOPp->testbench__DOT__imem_addr = ((((IData)(vlTOPp->testbench__DOT__dut__DOT__trapped) 
                                           | (IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable_q)) 
                                          | (IData)(vlTOPp->testbench__DOT__dut__DOT__stage_1_en))
                                          ? vlTOPp->testbench__DOT__dut__DOT__imem_addr_q
                                          : vlTOPp->testbench__DOT__dut__DOT__npc);
    vlTOPp->testbench__DOT__dmem_valid = ((IData)(vlTOPp->testbench__DOT__dut__DOT__mem_wr_enable) 
                                          | (IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable));
    vlTOPp->testbench__DOT__dmem_wstrb = ((IData)(vlTOPp->testbench__DOT__dut__DOT__mem_wr_enable)
                                           ? (IData)(vlTOPp->testbench__DOT__dut__DOT__mem_wr_strb)
                                           : 0U);
    vlTOPp->testbench__DOT__dmem_wdata = ((IData)(vlTOPp->testbench__DOT__dut__DOT__mem_wr_enable)
                                           ? vlTOPp->testbench__DOT__dut__DOT__mem_wr_data
                                           : 0U);
    vlTOPp->testbench__DOT__dmem_addr = ((IData)(vlTOPp->testbench__DOT__dut__DOT__mem_wr_enable)
                                          ? vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr
                                          : ((IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable)
                                              ? vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr
                                              : 0U));
}

VL_INLINE_OPT void Vtestbench::_sequent__TOP__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_sequent__TOP__2\n"); );
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvval__testbench__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__testbench__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__testbench__DOT__mem__v1;
    CData/*0:0*/ __Vdlyvset__testbench__DOT__mem__v1;
    CData/*7:0*/ __Vdlyvval__testbench__DOT__mem__v2;
    CData/*0:0*/ __Vdlyvset__testbench__DOT__mem__v2;
    CData/*7:0*/ __Vdlyvval__testbench__DOT__mem__v3;
    CData/*0:0*/ __Vdlyvset__testbench__DOT__mem__v3;
    CData/*0:0*/ __Vdly__testbench__DOT__dut__DOT__trapped;
    CData/*4:0*/ __Vdlyvdim0__testbench__DOT__dut__DOT__regfile__v0;
    CData/*0:0*/ __Vdlyvset__testbench__DOT__dut__DOT__regfile__v0;
    SData/*15:0*/ __Vdlyvdim0__testbench__DOT__mem__v0;
    SData/*15:0*/ __Vdlyvdim0__testbench__DOT__mem__v1;
    SData/*15:0*/ __Vdlyvdim0__testbench__DOT__mem__v2;
    SData/*15:0*/ __Vdlyvdim0__testbench__DOT__mem__v3;
    IData/*31:0*/ __Vdly__testbench__DOT__cycles;
    IData/*31:0*/ __Vdlyvval__testbench__DOT__dut__DOT__regfile__v0;
    // Body
    __Vdly__testbench__DOT__cycles = vlTOPp->testbench__DOT__cycles;
    __Vdlyvset__testbench__DOT__mem__v0 = 0U;
    __Vdlyvset__testbench__DOT__mem__v1 = 0U;
    __Vdlyvset__testbench__DOT__mem__v2 = 0U;
    __Vdlyvset__testbench__DOT__mem__v3 = 0U;
    __Vdly__testbench__DOT__dut__DOT__trapped = vlTOPp->testbench__DOT__dut__DOT__trapped;
    __Vdlyvset__testbench__DOT__dut__DOT__regfile__v0 = 0U;
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (vlTOPp->testbench__DOT__dmem_valid) {
            vlTOPp->testbench__DOT__i = 4U;
        }
    }
    if (VL_UNLIKELY((0x10000U <= vlTOPp->testbench__DOT__imem_addr))) {
        VL_WRITEF("Memory access out of range: imem_addr = 0x%08x\n",
                  32,vlTOPp->testbench__DOT__imem_addr);
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->testbench__DOT__dmem_valid) 
                     & (~ ((0x10000U > (0x3fffffffU 
                                        & (vlTOPp->testbench__DOT__dmem_addr 
                                           >> 2U))) 
                           | (0x2000000U == vlTOPp->testbench__DOT__dmem_addr)))))) {
        VL_WRITEF("Memory access out of range: dmem_addr = 0x%08x\n",
                  32,vlTOPp->testbench__DOT__dmem_addr);
    }
    if (VL_UNLIKELY(vlTOPp->testbench__DOT__out_valid)) {
        VL_WRITEF("%c",8,(0xffU & vlTOPp->testbench__DOT__out));
    }
    __Vdly__testbench__DOT__cycles = ((IData)(1U) + vlTOPp->testbench__DOT__cycles);
    if (VL_UNLIKELY(vlTOPp->testbench__DOT__dut__DOT__trapped)) {
        VL_WRITEF("Simulated %0# cycles\n",32,vlTOPp->testbench__DOT__cycles);
        VL_FINISH_MT("testbench.sv", 124, "");
    }
    vlTOPp->testbench__DOT__dut__DOT__imem_addr_q = vlTOPp->testbench__DOT__imem_addr;
    vlTOPp->testbench__DOT__dut__DOT__stage_1_en_q 
        = vlTOPp->testbench__DOT__dut__DOT__stage_1_en;
    vlTOPp->testbench__DOT__dut__DOT__mem_rd_func_q 
        = vlTOPp->testbench__DOT__dut__DOT__mem_rd_func;
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (vlTOPp->testbench__DOT__dmem_valid) {
            if ((1U & (IData)(vlTOPp->testbench__DOT__dmem_wstrb))) {
                if ((0x10000U > (0x3fffffffU & (vlTOPp->testbench__DOT__dmem_addr 
                                                >> 2U)))) {
                    __Vdlyvval__testbench__DOT__mem__v0 
                        = (0xffU & vlTOPp->testbench__DOT__dmem_wdata);
                    __Vdlyvset__testbench__DOT__mem__v0 = 1U;
                    __Vdlyvdim0__testbench__DOT__mem__v0 
                        = (0xfffcU & vlTOPp->testbench__DOT__dmem_addr);
                }
            }
            if ((2U & (IData)(vlTOPp->testbench__DOT__dmem_wstrb))) {
                if ((0x10000U > (0x3fffffffU & (vlTOPp->testbench__DOT__dmem_addr 
                                                >> 2U)))) {
                    __Vdlyvval__testbench__DOT__mem__v1 
                        = (0xffU & (vlTOPp->testbench__DOT__dmem_wdata 
                                    >> 8U));
                    __Vdlyvset__testbench__DOT__mem__v1 = 1U;
                    __Vdlyvdim0__testbench__DOT__mem__v1 
                        = (1U | (0xfffcU & vlTOPp->testbench__DOT__dmem_addr));
                }
            }
            if ((4U & (IData)(vlTOPp->testbench__DOT__dmem_wstrb))) {
                if ((0x10000U > (0x3fffffffU & (vlTOPp->testbench__DOT__dmem_addr 
                                                >> 2U)))) {
                    __Vdlyvval__testbench__DOT__mem__v2 
                        = (0xffU & (vlTOPp->testbench__DOT__dmem_wdata 
                                    >> 0x10U));
                    __Vdlyvset__testbench__DOT__mem__v2 = 1U;
                    __Vdlyvdim0__testbench__DOT__mem__v2 
                        = (2U | (0xfffcU & vlTOPp->testbench__DOT__dmem_addr));
                }
            }
            if ((8U & (IData)(vlTOPp->testbench__DOT__dmem_wstrb))) {
                if ((0x10000U > (0x3fffffffU & (vlTOPp->testbench__DOT__dmem_addr 
                                                >> 2U)))) {
                    __Vdlyvval__testbench__DOT__mem__v3 
                        = (0xffU & (vlTOPp->testbench__DOT__dmem_wdata 
                                    >> 0x18U));
                    __Vdlyvset__testbench__DOT__mem__v3 = 1U;
                    __Vdlyvdim0__testbench__DOT__mem__v3 
                        = (3U | (0xfffcU & vlTOPp->testbench__DOT__dmem_addr));
                }
            }
        }
    }
    vlTOPp->testbench__DOT__dut__DOT__trapped_q = vlTOPp->testbench__DOT__dut__DOT__trapped;
    if ((1U & (((~ (IData)(vlTOPp->testbench__DOT__dut__DOT__trapped)) 
                & (~ (IData)(vlTOPp->reset))) & (~ (IData)(vlTOPp->testbench__DOT__dut__DOT__reset_q))))) {
        if (vlTOPp->testbench__DOT__dut__DOT__illinsn) {
            __Vdly__testbench__DOT__dut__DOT__trapped = 1U;
        }
        vlTOPp->testbench__DOT__dut__DOT__pc = vlTOPp->testbench__DOT__dut__DOT__npc;
        if (((IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable_q) 
             | (IData)(vlTOPp->testbench__DOT__dut__DOT__next_wr))) {
            __Vdlyvval__testbench__DOT__dut__DOT__regfile__v0 
                = ((IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable_q)
                    ? vlTOPp->testbench__DOT__dut__DOT__mem_rdata
                    : vlTOPp->testbench__DOT__dut__DOT__next_rd);
            __Vdlyvset__testbench__DOT__dut__DOT__regfile__v0 = 1U;
            __Vdlyvdim0__testbench__DOT__dut__DOT__regfile__v0 
                = (0x1fU & ((IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable_q)
                             ? (IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_reg_q)
                             : (vlTOPp->testbench__DOT__imem_data 
                                >> 7U)));
        }
    }
    if (VL_UNLIKELY(vlTOPp->testbench__DOT__dut__DOT__trapped)) {
        VL_WRITEF("regfile[10]=%10#\n",32,vlTOPp->testbench__DOT__dut__DOT__regfile
                  [0xaU]);
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->testbench__DOT__dut__DOT__reset_q))) {
        vlTOPp->testbench__DOT__dut__DOT__pc = VL_NEGATE_I(
                                                           ((IData)(vlTOPp->reset)
                                                             ? 4U
                                                             : 0U));
        __Vdly__testbench__DOT__dut__DOT__trapped = 0U;
    }
    vlTOPp->testbench__DOT__cycles = __Vdly__testbench__DOT__cycles;
    vlTOPp->testbench__DOT__dut__DOT__trapped = __Vdly__testbench__DOT__dut__DOT__trapped;
    if (__Vdlyvset__testbench__DOT__dut__DOT__regfile__v0) {
        vlTOPp->testbench__DOT__dut__DOT__regfile[__Vdlyvdim0__testbench__DOT__dut__DOT__regfile__v0] 
            = __Vdlyvval__testbench__DOT__dut__DOT__regfile__v0;
    }
    vlTOPp->testbench__DOT__out_valid = 0U;
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (vlTOPp->testbench__DOT__dmem_valid) {
            if ((1U & (IData)(vlTOPp->testbench__DOT__dmem_wstrb))) {
                if ((0x2000000U == vlTOPp->testbench__DOT__dmem_addr)) {
                    vlTOPp->testbench__DOT__out_valid = 1U;
                }
            }
            if ((2U & (IData)(vlTOPp->testbench__DOT__dmem_wstrb))) {
                if ((0x2000000U == vlTOPp->testbench__DOT__dmem_addr)) {
                    vlTOPp->testbench__DOT__out_valid = 1U;
                }
            }
            if ((4U & (IData)(vlTOPp->testbench__DOT__dmem_wstrb))) {
                if ((0x2000000U == vlTOPp->testbench__DOT__dmem_addr)) {
                    vlTOPp->testbench__DOT__out_valid = 1U;
                }
            }
            if ((8U & (IData)(vlTOPp->testbench__DOT__dmem_wstrb))) {
                if ((0x2000000U == vlTOPp->testbench__DOT__dmem_addr)) {
                    vlTOPp->testbench__DOT__out_valid = 1U;
                }
            }
        }
    }
    vlTOPp->testbench__DOT__out = 0U;
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (vlTOPp->testbench__DOT__dmem_valid) {
            if ((1U & (IData)(vlTOPp->testbench__DOT__dmem_wstrb))) {
                if ((0x2000000U == vlTOPp->testbench__DOT__dmem_addr)) {
                    vlTOPp->testbench__DOT__out = (
                                                   (0xffffff00U 
                                                    & vlTOPp->testbench__DOT__out) 
                                                   | (0xffU 
                                                      & vlTOPp->testbench__DOT__dmem_wdata));
                }
            }
            if ((2U & (IData)(vlTOPp->testbench__DOT__dmem_wstrb))) {
                if ((0x2000000U == vlTOPp->testbench__DOT__dmem_addr)) {
                    vlTOPp->testbench__DOT__out = (
                                                   (0xffff00ffU 
                                                    & vlTOPp->testbench__DOT__out) 
                                                   | (0xff00U 
                                                      & vlTOPp->testbench__DOT__dmem_wdata));
                }
            }
            if ((4U & (IData)(vlTOPp->testbench__DOT__dmem_wstrb))) {
                if ((0x2000000U == vlTOPp->testbench__DOT__dmem_addr)) {
                    vlTOPp->testbench__DOT__out = (
                                                   (0xff00ffffU 
                                                    & vlTOPp->testbench__DOT__out) 
                                                   | (0xff0000U 
                                                      & vlTOPp->testbench__DOT__dmem_wdata));
                }
            }
            if ((8U & (IData)(vlTOPp->testbench__DOT__dmem_wstrb))) {
                if ((0x2000000U == vlTOPp->testbench__DOT__dmem_addr)) {
                    vlTOPp->testbench__DOT__out = (
                                                   (0xffffffU 
                                                    & vlTOPp->testbench__DOT__out) 
                                                   | (0xff000000U 
                                                      & vlTOPp->testbench__DOT__dmem_wdata));
                }
            }
        }
    }
    vlTOPp->testbench__DOT__dut__DOT__mem_rd_reg_q 
        = vlTOPp->testbench__DOT__dut__DOT__mem_rd_reg;
    vlTOPp->testbench__DOT__dut__DOT__reset_q = vlTOPp->reset;
    vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable_q 
        = vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable;
    if (vlTOPp->reset) {
        vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable_q = 0U;
    }
    vlTOPp->testbench__DOT__imem_data = ((vlTOPp->testbench__DOT__mem
                                          [(3U | (0xfffcU 
                                                  & vlTOPp->testbench__DOT__imem_addr))] 
                                          << 0x18U) 
                                         | ((vlTOPp->testbench__DOT__mem
                                             [(2U | 
                                               (0xfffcU 
                                                & vlTOPp->testbench__DOT__imem_addr))] 
                                             << 0x10U) 
                                            | ((vlTOPp->testbench__DOT__mem
                                                [(1U 
                                                  | (0xfffcU 
                                                     & vlTOPp->testbench__DOT__imem_addr))] 
                                                << 8U) 
                                               | vlTOPp->testbench__DOT__mem
                                               [(0xfffcU 
                                                 & vlTOPp->testbench__DOT__imem_addr)])));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (vlTOPp->testbench__DOT__dmem_valid) {
            vlTOPp->testbench__DOT__dmem_rdata = ((
                                                   vlTOPp->testbench__DOT__mem
                                                   [
                                                   (3U 
                                                    | (0xfffcU 
                                                       & vlTOPp->testbench__DOT__dmem_addr))] 
                                                   << 0x18U) 
                                                  | ((vlTOPp->testbench__DOT__mem
                                                      [
                                                      (2U 
                                                       | (0xfffcU 
                                                          & vlTOPp->testbench__DOT__dmem_addr))] 
                                                      << 0x10U) 
                                                     | ((vlTOPp->testbench__DOT__mem
                                                         [
                                                         (1U 
                                                          | (0xfffcU 
                                                             & vlTOPp->testbench__DOT__dmem_addr))] 
                                                         << 8U) 
                                                        | vlTOPp->testbench__DOT__mem
                                                        [
                                                        (0xfffcU 
                                                         & vlTOPp->testbench__DOT__dmem_addr)])));
            if ((1U & (IData)(vlTOPp->testbench__DOT__dmem_wstrb))) {
                vlTOPp->testbench__DOT__dmem_rdata = 0U;
            }
            if ((2U & (IData)(vlTOPp->testbench__DOT__dmem_wstrb))) {
                vlTOPp->testbench__DOT__dmem_rdata = 0U;
            }
            if ((4U & (IData)(vlTOPp->testbench__DOT__dmem_wstrb))) {
                vlTOPp->testbench__DOT__dmem_rdata = 0U;
            }
            if ((8U & (IData)(vlTOPp->testbench__DOT__dmem_wstrb))) {
                vlTOPp->testbench__DOT__dmem_rdata = 0U;
            }
        } else {
            vlTOPp->testbench__DOT__dmem_rdata = 0U;
        }
    }
    if (__Vdlyvset__testbench__DOT__mem__v0) {
        vlTOPp->testbench__DOT__mem[__Vdlyvdim0__testbench__DOT__mem__v0] 
            = __Vdlyvval__testbench__DOT__mem__v0;
    }
    if (__Vdlyvset__testbench__DOT__mem__v1) {
        vlTOPp->testbench__DOT__mem[__Vdlyvdim0__testbench__DOT__mem__v1] 
            = __Vdlyvval__testbench__DOT__mem__v1;
    }
    if (__Vdlyvset__testbench__DOT__mem__v2) {
        vlTOPp->testbench__DOT__mem[__Vdlyvdim0__testbench__DOT__mem__v2] 
            = __Vdlyvval__testbench__DOT__mem__v2;
    }
    if (__Vdlyvset__testbench__DOT__mem__v3) {
        vlTOPp->testbench__DOT__mem[__Vdlyvdim0__testbench__DOT__mem__v3] 
            = __Vdlyvval__testbench__DOT__mem__v3;
    }
    vlTOPp->testbench__DOT__dut__DOT__mem_rdata = (
                                                   (0x1fU 
                                                    >= 
                                                    (0x18U 
                                                     & (IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_func_q)))
                                                    ? 
                                                   (vlTOPp->testbench__DOT__dmem_rdata 
                                                    >> 
                                                    (0x18U 
                                                     & (IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_func_q)))
                                                    : 0U);
    if ((0U == (7U & (IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_func_q)))) {
        vlTOPp->testbench__DOT__dut__DOT__mem_rdata 
            = VL_EXTENDS_II(32,8, (0xffU & vlTOPp->testbench__DOT__dut__DOT__mem_rdata));
    } else {
        if ((1U == (7U & (IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_func_q)))) {
            vlTOPp->testbench__DOT__dut__DOT__mem_rdata 
                = VL_EXTENDS_II(32,16, (0xffffU & vlTOPp->testbench__DOT__dut__DOT__mem_rdata));
        } else {
            if ((4U == (7U & (IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_func_q)))) {
                vlTOPp->testbench__DOT__dut__DOT__mem_rdata 
                    = (0xffU & vlTOPp->testbench__DOT__dut__DOT__mem_rdata);
            } else {
                if ((5U == (7U & (IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_func_q)))) {
                    vlTOPp->testbench__DOT__dut__DOT__mem_rdata 
                        = (0xffffU & vlTOPp->testbench__DOT__dut__DOT__mem_rdata);
                }
            }
        }
    }
    vlTOPp->testbench__DOT__dut__DOT__stage_1_en = vlTOPp->testbench__DOT__dut__DOT__stage_1_en_q;
    if (((((0x6fU == (0x7fU & vlTOPp->testbench__DOT__imem_data)) 
           | (0x67U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) 
          | (0x63U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) 
         | (0x17U == (0x7fU & vlTOPp->testbench__DOT__imem_data)))) {
        vlTOPp->testbench__DOT__dut__DOT__stage_1_en = 0U;
    }
    vlTOPp->testbench__DOT__dut__DOT__imm_s = ((0xfe0U 
                                                & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 7U)));
    vlTOPp->testbench__DOT__dut__DOT__rs1_value = (
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 0xfU)))
                                                    ? 
                                                   vlTOPp->testbench__DOT__dut__DOT__regfile
                                                   [
                                                   (0x1fU 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0xfU))]
                                                    : 0U);
    vlTOPp->testbench__DOT__dut__DOT__rs2_value = (
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 0x14U)))
                                                    ? 
                                                   vlTOPp->testbench__DOT__dut__DOT__regfile
                                                   [
                                                   (0x1fU 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0x14U))]
                                                    : 0U);
    vlTOPp->testbench__DOT__dut__DOT__imm_b = ((0xfffU 
                                                & (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)) 
                                               | (0x1000U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0x13U)));
    vlTOPp->testbench__DOT__dut__DOT__imm_b = ((0x1801U 
                                                & (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)) 
                                               | ((0x7e0U 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 7U))));
    vlTOPp->testbench__DOT__dut__DOT__imm_b = ((0x17ffU 
                                                & (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)) 
                                               | (0x800U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     << 4U)));
    vlTOPp->testbench__DOT__dut__DOT__imm_j = ((0xfffffU 
                                                & vlTOPp->testbench__DOT__dut__DOT__imm_j) 
                                               | (0x100000U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0xbU)));
    vlTOPp->testbench__DOT__dut__DOT__imm_j = ((0x1ff801U 
                                                & vlTOPp->testbench__DOT__dut__DOT__imm_j) 
                                               | (0x7feU 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0x14U)));
    vlTOPp->testbench__DOT__dut__DOT__imm_j = ((0x1ff7ffU 
                                                & vlTOPp->testbench__DOT__dut__DOT__imm_j) 
                                               | (0x800U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 9U)));
    vlTOPp->testbench__DOT__dut__DOT__imm_j = ((0x100fffU 
                                                & vlTOPp->testbench__DOT__dut__DOT__imm_j) 
                                               | (0xff000U 
                                                  & vlTOPp->testbench__DOT__imem_data));
}

void Vtestbench::_initial__TOP__3(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_initial__TOP__3\n"); );
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp20[3];
    // Body
    vlTOPp->testbench__DOT__cycles = 0U;
    __Vtemp20[0U] = 0x2e686578U;
    __Vtemp20[1U] = 0x77617265U;
    __Vtemp20[2U] = 0x6669726dU;
    VL_READMEM_N(true, 8, 65536, 0, VL_CVT_PACK_STR_NW(3, __Vtemp20)
                 , vlTOPp->testbench__DOT__mem, 0, ~VL_ULL(0));
}

VL_INLINE_OPT void Vtestbench::_combo__TOP__4(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_combo__TOP__4\n"); );
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->testbench__DOT__dut__DOT__next_wr = 0U;
    if ((0x40U & vlTOPp->testbench__DOT__imem_data)) {
        if ((0x20U & vlTOPp->testbench__DOT__imem_data)) {
            if ((1U & (~ (vlTOPp->testbench__DOT__imem_data 
                          >> 4U)))) {
                if ((8U & vlTOPp->testbench__DOT__imem_data)) {
                    if ((4U & vlTOPp->testbench__DOT__imem_data)) {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                            }
                        }
                    }
                } else {
                    if ((4U & vlTOPp->testbench__DOT__imem_data)) {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                if ((0U == (7U & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0xcU)))) {
                                    vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x20U & vlTOPp->testbench__DOT__imem_data)) {
            if ((0x10U & vlTOPp->testbench__DOT__imem_data)) {
                if ((1U & (~ (vlTOPp->testbench__DOT__imem_data 
                              >> 3U)))) {
                    if ((4U & vlTOPp->testbench__DOT__imem_data)) {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                            }
                        }
                    } else {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                if (((((((((0U == (
                                                   (0x3f8U 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0xcU)))) 
                                           | (0x100U 
                                              == ((0x3f8U 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 0xcU))))) 
                                          | (1U == 
                                             ((0x3f8U 
                                               & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0xcU))))) 
                                         | (2U == (
                                                   (0x3f8U 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0xcU))))) 
                                        | (3U == ((0x3f8U 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 0xcU))))) 
                                       | (4U == ((0x3f8U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0xcU))))) 
                                      | (5U == ((0x3f8U 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0xcU))))) 
                                     | (0x105U == (
                                                   (0x3f8U 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0xcU)))))) {
                                    vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                } else {
                                    if ((6U == ((0x3f8U 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0xcU))))) {
                                        vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                    } else {
                                        if ((7U == 
                                             ((0x3f8U 
                                               & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0xcU))))) {
                                            vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlTOPp->testbench__DOT__imem_data)) {
                if ((1U & (~ (vlTOPp->testbench__DOT__imem_data 
                              >> 3U)))) {
                    if ((4U & vlTOPp->testbench__DOT__imem_data)) {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                            }
                        }
                    } else {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                if (((((((((0U == (7U 
                                                   & ((0x3f8U 
                                                       & (vlTOPp->testbench__DOT__imem_data 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlTOPp->testbench__DOT__imem_data 
                                                            >> 0xcU))))) 
                                           | (2U == 
                                              (7U & 
                                               ((0x3f8U 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0xcU)))))) 
                                          | (3U == 
                                             (7U & 
                                              ((0x3f8U 
                                                & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0xcU)))))) 
                                         | (4U == (7U 
                                                   & ((0x3f8U 
                                                       & (vlTOPp->testbench__DOT__imem_data 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlTOPp->testbench__DOT__imem_data 
                                                            >> 0xcU)))))) 
                                        | (6U == (7U 
                                                  & ((0x3f8U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlTOPp->testbench__DOT__imem_data 
                                                           >> 0xcU)))))) 
                                       | (7U == (7U 
                                                 & ((0x3f8U 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlTOPp->testbench__DOT__imem_data 
                                                          >> 0xcU)))))) 
                                      | (1U == ((0x3f8U 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0xcU))))) 
                                     | (5U == ((0x3f8U 
                                                & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0xcU)))))) {
                                    vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                } else {
                                    if ((0x105U == 
                                         ((0x3f8U & 
                                           (vlTOPp->testbench__DOT__imem_data 
                                            >> 0x16U)) 
                                          | (7U & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0xcU))))) {
                                        vlTOPp->testbench__DOT__dut__DOT__next_wr = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable_q) {
        vlTOPp->testbench__DOT__dut__DOT__next_wr = 0U;
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->testbench__DOT__dut__DOT__reset_q))) {
        vlTOPp->testbench__DOT__dut__DOT__next_wr = 0U;
    }
    vlTOPp->testbench__DOT__dut__DOT__npc = ((IData)(4U) 
                                             + vlTOPp->testbench__DOT__dut__DOT__pc);
    vlTOPp->testbench__DOT__dut__DOT__next_rd = 0U;
    vlTOPp->testbench__DOT__dut__DOT__illinsn = 0U;
    vlTOPp->testbench__DOT__dut__DOT__mem_wr_enable = 0U;
    vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr = 0U;
    vlTOPp->testbench__DOT__dut__DOT__mem_wr_data = 0U;
    vlTOPp->testbench__DOT__dut__DOT__mem_wr_strb = 0U;
    vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable = 0U;
    vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr = 0U;
    vlTOPp->testbench__DOT__dut__DOT__mem_rd_reg = 0U;
    vlTOPp->testbench__DOT__dut__DOT__mem_rd_func = 0U;
    if ((0x40U & vlTOPp->testbench__DOT__imem_data)) {
        if ((0x20U & vlTOPp->testbench__DOT__imem_data)) {
            if ((0x10U & vlTOPp->testbench__DOT__imem_data)) {
                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
            } else {
                if ((8U & vlTOPp->testbench__DOT__imem_data)) {
                    if ((4U & vlTOPp->testbench__DOT__imem_data)) {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                    = vlTOPp->testbench__DOT__dut__DOT__npc;
                                vlTOPp->testbench__DOT__dut__DOT__npc 
                                    = (vlTOPp->testbench__DOT__dut__DOT__pc 
                                       + VL_EXTENDS_II(32,21, vlTOPp->testbench__DOT__dut__DOT__imm_j));
                                if ((0U != (3U & vlTOPp->testbench__DOT__dut__DOT__npc))) {
                                    vlTOPp->testbench__DOT__dut__DOT__npc 
                                        = (0xfffffffcU 
                                           & vlTOPp->testbench__DOT__dut__DOT__npc);
                                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                }
                            } else {
                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                            }
                        } else {
                            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                        }
                    } else {
                        vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                    }
                } else {
                    if ((4U & vlTOPp->testbench__DOT__imem_data)) {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                if ((0U == (7U & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0xcU)))) {
                                    vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                        = vlTOPp->testbench__DOT__dut__DOT__npc;
                                    vlTOPp->testbench__DOT__dut__DOT__npc 
                                        = (0xfffffffeU 
                                           & (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                              + VL_EXTENDS_II(32,12, 
                                                              (0xfffU 
                                                               & (vlTOPp->testbench__DOT__imem_data 
                                                                  >> 0x14U)))));
                                } else {
                                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                }
                                if ((0U != (3U & vlTOPp->testbench__DOT__dut__DOT__npc))) {
                                    vlTOPp->testbench__DOT__dut__DOT__npc 
                                        = (0xfffffffcU 
                                           & vlTOPp->testbench__DOT__dut__DOT__npc);
                                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                }
                            } else {
                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                            }
                        } else {
                            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                        }
                    } else {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                if ((0x4000U & vlTOPp->testbench__DOT__imem_data)) {
                                    if ((0x2000U & vlTOPp->testbench__DOT__imem_data)) {
                                        if ((0x1000U 
                                             & vlTOPp->testbench__DOT__imem_data)) {
                                            if ((vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                 >= vlTOPp->testbench__DOT__dut__DOT__rs2_value)) {
                                                vlTOPp->testbench__DOT__dut__DOT__npc 
                                                    = 
                                                    (vlTOPp->testbench__DOT__dut__DOT__pc 
                                                     + 
                                                     VL_EXTENDS_II(32,13, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)));
                                            }
                                        } else {
                                            if ((vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                 < vlTOPp->testbench__DOT__dut__DOT__rs2_value)) {
                                                vlTOPp->testbench__DOT__dut__DOT__npc 
                                                    = 
                                                    (vlTOPp->testbench__DOT__dut__DOT__pc 
                                                     + 
                                                     VL_EXTENDS_II(32,13, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)));
                                            }
                                        }
                                    } else {
                                        if ((0x1000U 
                                             & vlTOPp->testbench__DOT__imem_data)) {
                                            if (VL_GTES_III(1,32,32, vlTOPp->testbench__DOT__dut__DOT__rs1_value, vlTOPp->testbench__DOT__dut__DOT__rs2_value)) {
                                                vlTOPp->testbench__DOT__dut__DOT__npc 
                                                    = 
                                                    (vlTOPp->testbench__DOT__dut__DOT__pc 
                                                     + 
                                                     VL_EXTENDS_II(32,13, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)));
                                            }
                                        } else {
                                            if (VL_LTS_III(1,32,32, vlTOPp->testbench__DOT__dut__DOT__rs1_value, vlTOPp->testbench__DOT__dut__DOT__rs2_value)) {
                                                vlTOPp->testbench__DOT__dut__DOT__npc 
                                                    = 
                                                    (vlTOPp->testbench__DOT__dut__DOT__pc 
                                                     + 
                                                     VL_EXTENDS_II(32,13, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)));
                                            }
                                        }
                                    }
                                } else {
                                    if ((0x2000U & vlTOPp->testbench__DOT__imem_data)) {
                                        vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                    } else {
                                        if ((0x1000U 
                                             & vlTOPp->testbench__DOT__imem_data)) {
                                            if ((vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                 != vlTOPp->testbench__DOT__dut__DOT__rs2_value)) {
                                                vlTOPp->testbench__DOT__dut__DOT__npc 
                                                    = 
                                                    (vlTOPp->testbench__DOT__dut__DOT__pc 
                                                     + 
                                                     VL_EXTENDS_II(32,13, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)));
                                            }
                                        } else {
                                            if ((vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                 == vlTOPp->testbench__DOT__dut__DOT__rs2_value)) {
                                                vlTOPp->testbench__DOT__dut__DOT__npc 
                                                    = 
                                                    (vlTOPp->testbench__DOT__dut__DOT__pc 
                                                     + 
                                                     VL_EXTENDS_II(32,13, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)));
                                            }
                                        }
                                    }
                                }
                                if ((0U != (3U & vlTOPp->testbench__DOT__dut__DOT__npc))) {
                                    vlTOPp->testbench__DOT__dut__DOT__npc 
                                        = (0xfffffffcU 
                                           & vlTOPp->testbench__DOT__dut__DOT__npc);
                                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                }
                            } else {
                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                            }
                        } else {
                            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
        }
    } else {
        if ((0x20U & vlTOPp->testbench__DOT__imem_data)) {
            if ((0x10U & vlTOPp->testbench__DOT__imem_data)) {
                if ((8U & vlTOPp->testbench__DOT__imem_data)) {
                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                } else {
                    if ((4U & vlTOPp->testbench__DOT__imem_data)) {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                    = (0xfffff000U 
                                       & vlTOPp->testbench__DOT__imem_data);
                            } else {
                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                            }
                        } else {
                            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                        }
                    } else {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                if (((((((((0U == (
                                                   (0x3f8U 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0xcU)))) 
                                           | (0x100U 
                                              == ((0x3f8U 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 0xcU))))) 
                                          | (1U == 
                                             ((0x3f8U 
                                               & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0xcU))))) 
                                         | (2U == (
                                                   (0x3f8U 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0xcU))))) 
                                        | (3U == ((0x3f8U 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 0xcU))))) 
                                       | (4U == ((0x3f8U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0xcU))))) 
                                      | (5U == ((0x3f8U 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0xcU))))) 
                                     | (0x105U == (
                                                   (0x3f8U 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0xcU)))))) {
                                    vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                        = ((0U == (
                                                   (0x3f8U 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0xcU))))
                                            ? (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                               + vlTOPp->testbench__DOT__dut__DOT__rs2_value)
                                            : ((0x100U 
                                                == 
                                                ((0x3f8U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0xcU))))
                                                ? (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                   - vlTOPp->testbench__DOT__dut__DOT__rs2_value)
                                                : (
                                                   (1U 
                                                    == 
                                                    ((0x3f8U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlTOPp->testbench__DOT__imem_data 
                                                           >> 0xcU))))
                                                    ? 
                                                   (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                    << 
                                                    (0x1fU 
                                                     & vlTOPp->testbench__DOT__dut__DOT__rs2_value))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     ((0x3f8U 
                                                       & (vlTOPp->testbench__DOT__imem_data 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlTOPp->testbench__DOT__imem_data 
                                                            >> 0xcU))))
                                                     ? 
                                                    VL_LTS_III(32,32,32, vlTOPp->testbench__DOT__dut__DOT__rs1_value, vlTOPp->testbench__DOT__dut__DOT__rs2_value)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      ((0x3f8U 
                                                        & (vlTOPp->testbench__DOT__imem_data 
                                                           >> 0x16U)) 
                                                       | (7U 
                                                          & (vlTOPp->testbench__DOT__imem_data 
                                                             >> 0xcU))))
                                                      ? 
                                                     (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                      < vlTOPp->testbench__DOT__dut__DOT__rs2_value)
                                                      : 
                                                     ((4U 
                                                       == 
                                                       ((0x3f8U 
                                                         & (vlTOPp->testbench__DOT__imem_data 
                                                            >> 0x16U)) 
                                                        | (7U 
                                                           & (vlTOPp->testbench__DOT__imem_data 
                                                              >> 0xcU))))
                                                       ? 
                                                      (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                       ^ vlTOPp->testbench__DOT__dut__DOT__rs2_value)
                                                       : 
                                                      ((5U 
                                                        == 
                                                        ((0x3f8U 
                                                          & (vlTOPp->testbench__DOT__imem_data 
                                                             >> 0x16U)) 
                                                         | (7U 
                                                            & (vlTOPp->testbench__DOT__imem_data 
                                                               >> 0xcU))))
                                                        ? 
                                                       (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                        >> 
                                                        (0x1fU 
                                                         & vlTOPp->testbench__DOT__dut__DOT__rs2_value))
                                                        : 
                                                       VL_SHIFTRS_III(32,32,5, vlTOPp->testbench__DOT__dut__DOT__rs1_value, 
                                                                      (0x1fU 
                                                                       & vlTOPp->testbench__DOT__dut__DOT__rs2_value)))))))));
                                } else {
                                    if ((6U == ((0x3f8U 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0xcU))))) {
                                        vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                            = (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                               | vlTOPp->testbench__DOT__dut__DOT__rs2_value);
                                    } else {
                                        if ((7U == 
                                             ((0x3f8U 
                                               & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0xcU))))) {
                                            vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                                = (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                   & vlTOPp->testbench__DOT__dut__DOT__rs2_value);
                                        } else {
                                            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                            }
                        } else {
                            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                        }
                    }
                }
            } else {
                if ((8U & vlTOPp->testbench__DOT__imem_data)) {
                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                } else {
                    if ((4U & vlTOPp->testbench__DOT__imem_data)) {
                        vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                    } else {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr 
                                    = (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                       + VL_EXTENDS_II(32,12, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_s)));
                                if ((((0U == (0x1cU 
                                              & ((0x1cU 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0xaU)) 
                                                 | (3U 
                                                    & vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr)))) 
                                      | (4U == (0x1dU 
                                                & ((0x1cU 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0xaU)) 
                                                   | (3U 
                                                      & vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr))))) 
                                     | (8U == ((0x1cU 
                                                & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0xaU)) 
                                               | (3U 
                                                  & vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr))))) {
                                    vlTOPp->testbench__DOT__dut__DOT__mem_wr_enable = 1U;
                                    vlTOPp->testbench__DOT__dut__DOT__mem_wr_data 
                                        = vlTOPp->testbench__DOT__dut__DOT__rs2_value;
                                    vlTOPp->testbench__DOT__dut__DOT__mem_wr_strb = 0xfU;
                                    if ((0U == (7U 
                                                & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0xcU)))) {
                                        vlTOPp->testbench__DOT__dut__DOT__mem_wr_strb = 1U;
                                    } else {
                                        if ((1U == 
                                             (7U & 
                                              (vlTOPp->testbench__DOT__imem_data 
                                               >> 0xcU)))) {
                                            vlTOPp->testbench__DOT__dut__DOT__mem_wr_strb = 3U;
                                        } else {
                                            if ((2U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0xcU)))) {
                                                vlTOPp->testbench__DOT__dut__DOT__mem_wr_strb = 0xfU;
                                            }
                                        }
                                    }
                                    vlTOPp->testbench__DOT__dut__DOT__mem_wr_data 
                                        = ((0x1fU >= 
                                            (0x18U 
                                             & (vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr 
                                                << 3U)))
                                            ? (vlTOPp->testbench__DOT__dut__DOT__mem_wr_data 
                                               << (0x18U 
                                                   & (vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr 
                                                      << 3U)))
                                            : 0U);
                                    vlTOPp->testbench__DOT__dut__DOT__mem_wr_strb 
                                        = (0xfU & ((IData)(vlTOPp->testbench__DOT__dut__DOT__mem_wr_strb) 
                                                   << 
                                                   (3U 
                                                    & vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr)));
                                    vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr 
                                        = (0xfffffffcU 
                                           & vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr);
                                } else {
                                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                }
                            } else {
                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                            }
                        } else {
                            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlTOPp->testbench__DOT__imem_data)) {
                if ((8U & vlTOPp->testbench__DOT__imem_data)) {
                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                } else {
                    if ((4U & vlTOPp->testbench__DOT__imem_data)) {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                    = ((0xfffff000U 
                                        & vlTOPp->testbench__DOT__imem_data) 
                                       + vlTOPp->testbench__DOT__dut__DOT__pc);
                            } else {
                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                            }
                        } else {
                            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                        }
                    } else {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                if (((((((((0U == (7U 
                                                   & ((0x3f8U 
                                                       & (vlTOPp->testbench__DOT__imem_data 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlTOPp->testbench__DOT__imem_data 
                                                            >> 0xcU))))) 
                                           | (2U == 
                                              (7U & 
                                               ((0x3f8U 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0xcU)))))) 
                                          | (3U == 
                                             (7U & 
                                              ((0x3f8U 
                                                & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0xcU)))))) 
                                         | (4U == (7U 
                                                   & ((0x3f8U 
                                                       & (vlTOPp->testbench__DOT__imem_data 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlTOPp->testbench__DOT__imem_data 
                                                            >> 0xcU)))))) 
                                        | (6U == (7U 
                                                  & ((0x3f8U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlTOPp->testbench__DOT__imem_data 
                                                           >> 0xcU)))))) 
                                       | (7U == (7U 
                                                 & ((0x3f8U 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlTOPp->testbench__DOT__imem_data 
                                                          >> 0xcU)))))) 
                                      | (1U == ((0x3f8U 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0xcU))))) 
                                     | (5U == ((0x3f8U 
                                                & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0xcU)))))) {
                                    vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                        = ((0U == (7U 
                                                   & ((0x3f8U 
                                                       & (vlTOPp->testbench__DOT__imem_data 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlTOPp->testbench__DOT__imem_data 
                                                            >> 0xcU)))))
                                            ? (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                               + VL_EXTENDS_II(32,12, 
                                                               (0xfffU 
                                                                & (vlTOPp->testbench__DOT__imem_data 
                                                                   >> 0x14U))))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & ((0x3f8U 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlTOPp->testbench__DOT__imem_data 
                                                          >> 0xcU)))))
                                                ? VL_LTS_III(32,32,32, vlTOPp->testbench__DOT__dut__DOT__rs1_value, 
                                                             VL_EXTENDS_II(32,12, 
                                                                           (0xfffU 
                                                                            & (vlTOPp->testbench__DOT__imem_data 
                                                                               >> 0x14U))))
                                                : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((0x3f8U 
                                                         & (vlTOPp->testbench__DOT__imem_data 
                                                            >> 0x16U)) 
                                                        | (7U 
                                                           & (vlTOPp->testbench__DOT__imem_data 
                                                              >> 0xcU)))))
                                                    ? 
                                                   (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                    < 
                                                    VL_EXTENDS_II(32,12, 
                                                                  (0xfffU 
                                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                                      >> 0x14U))))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & ((0x3f8U 
                                                          & (vlTOPp->testbench__DOT__imem_data 
                                                             >> 0x16U)) 
                                                         | (7U 
                                                            & (vlTOPp->testbench__DOT__imem_data 
                                                               >> 0xcU)))))
                                                     ? 
                                                    (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                     ^ 
                                                     VL_EXTENDS_II(32,12, 
                                                                   (0xfffU 
                                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                                       >> 0x14U))))
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & ((0x3f8U 
                                                           & (vlTOPp->testbench__DOT__imem_data 
                                                              >> 0x16U)) 
                                                          | (7U 
                                                             & (vlTOPp->testbench__DOT__imem_data 
                                                                >> 0xcU)))))
                                                      ? 
                                                     (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                      | VL_EXTENDS_II(32,12, 
                                                                      (0xfffU 
                                                                       & (vlTOPp->testbench__DOT__imem_data 
                                                                          >> 0x14U))))
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (7U 
                                                        & ((0x3f8U 
                                                            & (vlTOPp->testbench__DOT__imem_data 
                                                               >> 0x16U)) 
                                                           | (7U 
                                                              & (vlTOPp->testbench__DOT__imem_data 
                                                                 >> 0xcU)))))
                                                       ? 
                                                      (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                       & VL_EXTENDS_II(32,12, 
                                                                       (0xfffU 
                                                                        & (vlTOPp->testbench__DOT__imem_data 
                                                                           >> 0x14U))))
                                                       : 
                                                      ((1U 
                                                        == 
                                                        ((0x3f8U 
                                                          & (vlTOPp->testbench__DOT__imem_data 
                                                             >> 0x16U)) 
                                                         | (7U 
                                                            & (vlTOPp->testbench__DOT__imem_data 
                                                               >> 0xcU))))
                                                        ? 
                                                       (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                        << 
                                                        (0x1fU 
                                                         & (vlTOPp->testbench__DOT__imem_data 
                                                            >> 0x14U)))
                                                        : 
                                                       (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                                        >> 
                                                        (0x1fU 
                                                         & (vlTOPp->testbench__DOT__imem_data 
                                                            >> 0x14U))))))))));
                                } else {
                                    if ((0x105U == 
                                         ((0x3f8U & 
                                           (vlTOPp->testbench__DOT__imem_data 
                                            >> 0x16U)) 
                                          | (7U & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0xcU))))) {
                                        vlTOPp->testbench__DOT__dut__DOT__next_rd 
                                            = VL_SHIFTRS_III(32,32,5, vlTOPp->testbench__DOT__dut__DOT__rs1_value, 
                                                             (0x1fU 
                                                              & (vlTOPp->testbench__DOT__imem_data 
                                                                 >> 0x14U)));
                                    } else {
                                        vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                            }
                        } else {
                            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                        }
                    }
                }
            } else {
                if ((8U & vlTOPp->testbench__DOT__imem_data)) {
                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                } else {
                    if ((4U & vlTOPp->testbench__DOT__imem_data)) {
                        vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                    } else {
                        if ((2U & vlTOPp->testbench__DOT__imem_data)) {
                            if ((1U & vlTOPp->testbench__DOT__imem_data)) {
                                vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                    = (vlTOPp->testbench__DOT__dut__DOT__rs1_value 
                                       + VL_EXTENDS_II(32,12, 
                                                       (0xfffU 
                                                        & (vlTOPp->testbench__DOT__imem_data 
                                                           >> 0x14U))));
                                if ((0x4000U & vlTOPp->testbench__DOT__imem_data)) {
                                    if ((0x2000U & vlTOPp->testbench__DOT__imem_data)) {
                                        vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                    } else {
                                        if ((0x1000U 
                                             & vlTOPp->testbench__DOT__imem_data)) {
                                            if ((1U 
                                                 & vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr)) {
                                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                            } else {
                                                vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable = 1U;
                                                vlTOPp->testbench__DOT__dut__DOT__mem_rd_reg 
                                                    = 
                                                    (0x1fU 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 7U));
                                                vlTOPp->testbench__DOT__dut__DOT__mem_rd_func 
                                                    = 
                                                    ((0x18U 
                                                      & (vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                         << 3U)) 
                                                     | (7U 
                                                        & (vlTOPp->testbench__DOT__imem_data 
                                                           >> 0xcU)));
                                                vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                    = 
                                                    (0xfffffffcU 
                                                     & vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr);
                                            }
                                        } else {
                                            vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable = 1U;
                                            vlTOPp->testbench__DOT__dut__DOT__mem_rd_reg 
                                                = (0x1fU 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 7U));
                                            vlTOPp->testbench__DOT__dut__DOT__mem_rd_func 
                                                = (
                                                   (0x18U 
                                                    & (vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                       << 3U)) 
                                                   | (7U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0xcU)));
                                            vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                = (0xfffffffcU 
                                                   & vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr);
                                        }
                                    }
                                } else {
                                    if ((0x2000U & vlTOPp->testbench__DOT__imem_data)) {
                                        if ((0x1000U 
                                             & vlTOPp->testbench__DOT__imem_data)) {
                                            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                        } else {
                                            if ((2U 
                                                 & vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr)) {
                                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                            } else {
                                                if (
                                                    (1U 
                                                     & vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr)) {
                                                    vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                                } else {
                                                    vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable = 1U;
                                                    vlTOPp->testbench__DOT__dut__DOT__mem_rd_reg 
                                                        = 
                                                        (0x1fU 
                                                         & (vlTOPp->testbench__DOT__imem_data 
                                                            >> 7U));
                                                    vlTOPp->testbench__DOT__dut__DOT__mem_rd_func 
                                                        = 
                                                        ((0x18U 
                                                          & (vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                             << 3U)) 
                                                         | (7U 
                                                            & (vlTOPp->testbench__DOT__imem_data 
                                                               >> 0xcU)));
                                                    vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                        = 
                                                        (0xfffffffcU 
                                                         & vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr);
                                                }
                                            }
                                        }
                                    } else {
                                        if ((0x1000U 
                                             & vlTOPp->testbench__DOT__imem_data)) {
                                            if ((1U 
                                                 & vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr)) {
                                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                                            } else {
                                                vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable = 1U;
                                                vlTOPp->testbench__DOT__dut__DOT__mem_rd_reg 
                                                    = 
                                                    (0x1fU 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 7U));
                                                vlTOPp->testbench__DOT__dut__DOT__mem_rd_func 
                                                    = 
                                                    ((0x18U 
                                                      & (vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                         << 3U)) 
                                                     | (7U 
                                                        & (vlTOPp->testbench__DOT__imem_data 
                                                           >> 0xcU)));
                                                vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                    = 
                                                    (0xfffffffcU 
                                                     & vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr);
                                            }
                                        } else {
                                            vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable = 1U;
                                            vlTOPp->testbench__DOT__dut__DOT__mem_rd_reg 
                                                = (0x1fU 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 7U));
                                            vlTOPp->testbench__DOT__dut__DOT__mem_rd_func 
                                                = (
                                                   (0x18U 
                                                    & (vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                       << 3U)) 
                                                   | (7U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0xcU)));
                                            vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr 
                                                = (0xfffffffcU 
                                                   & vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr);
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                            }
                        } else {
                            vlTOPp->testbench__DOT__dut__DOT__illinsn = 1U;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable_q) {
        vlTOPp->testbench__DOT__dut__DOT__npc = vlTOPp->testbench__DOT__dut__DOT__pc;
        vlTOPp->testbench__DOT__dut__DOT__illinsn = 0U;
        vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable = 0U;
        vlTOPp->testbench__DOT__dut__DOT__mem_wr_enable = 0U;
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->testbench__DOT__dut__DOT__reset_q))) {
        vlTOPp->testbench__DOT__dut__DOT__npc = 0U;
        vlTOPp->testbench__DOT__dut__DOT__illinsn = 0U;
        vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable = 0U;
        vlTOPp->testbench__DOT__dut__DOT__mem_wr_enable = 0U;
    }
    vlTOPp->testbench__DOT__imem_addr = ((((IData)(vlTOPp->testbench__DOT__dut__DOT__trapped) 
                                           | (IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable_q)) 
                                          | (IData)(vlTOPp->testbench__DOT__dut__DOT__stage_1_en))
                                          ? vlTOPp->testbench__DOT__dut__DOT__imem_addr_q
                                          : vlTOPp->testbench__DOT__dut__DOT__npc);
    vlTOPp->testbench__DOT__dmem_valid = ((IData)(vlTOPp->testbench__DOT__dut__DOT__mem_wr_enable) 
                                          | (IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable));
    vlTOPp->testbench__DOT__dmem_wstrb = ((IData)(vlTOPp->testbench__DOT__dut__DOT__mem_wr_enable)
                                           ? (IData)(vlTOPp->testbench__DOT__dut__DOT__mem_wr_strb)
                                           : 0U);
    vlTOPp->testbench__DOT__dmem_wdata = ((IData)(vlTOPp->testbench__DOT__dut__DOT__mem_wr_enable)
                                           ? vlTOPp->testbench__DOT__dut__DOT__mem_wr_data
                                           : 0U);
    vlTOPp->testbench__DOT__dmem_addr = ((IData)(vlTOPp->testbench__DOT__dut__DOT__mem_wr_enable)
                                          ? vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr
                                          : ((IData)(vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable)
                                              ? vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr
                                              : 0U));
}

void Vtestbench::_eval(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_eval\n"); );
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void Vtestbench::_eval_initial(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_eval_initial\n"); );
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->_initial__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
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
    vlTOPp->_settle__TOP__1(vlSymsp);
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
    testbench__DOT__imem_addr = VL_RAND_RESET_I(32);
    testbench__DOT__imem_data = VL_RAND_RESET_I(32);
    testbench__DOT__dmem_valid = VL_RAND_RESET_I(1);
    testbench__DOT__dmem_addr = VL_RAND_RESET_I(32);
    testbench__DOT__dmem_wstrb = VL_RAND_RESET_I(4);
    testbench__DOT__dmem_wdata = VL_RAND_RESET_I(32);
    testbench__DOT__dmem_rdata = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<65536; ++__Vi0) {
            testbench__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    testbench__DOT__out = VL_RAND_RESET_I(32);
    testbench__DOT__out_valid = VL_RAND_RESET_I(1);
    testbench__DOT__i = VL_RAND_RESET_I(32);
    testbench__DOT__cycles = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__mem_wr_enable = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__mem_wr_addr = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__mem_wr_data = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__mem_wr_strb = VL_RAND_RESET_I(4);
    testbench__DOT__dut__DOT__mem_rd_enable = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__mem_rd_addr = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__mem_rd_reg = VL_RAND_RESET_I(5);
    testbench__DOT__dut__DOT__mem_rd_func = VL_RAND_RESET_I(5);
    testbench__DOT__dut__DOT__mem_rd_enable_q = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__mem_rd_reg_q = VL_RAND_RESET_I(5);
    testbench__DOT__dut__DOT__mem_rd_func_q = VL_RAND_RESET_I(5);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            testbench__DOT__dut__DOT__regfile[__Vi0] = VL_RAND_RESET_I(32);
    }}
    testbench__DOT__dut__DOT__npc = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__pc = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__imem_addr_q = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__rs1_value = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__rs2_value = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__imm_s = VL_RAND_RESET_I(12);
    testbench__DOT__dut__DOT__imm_b = VL_RAND_RESET_I(13);
    testbench__DOT__dut__DOT__imm_j = VL_RAND_RESET_I(21);
    testbench__DOT__dut__DOT__next_wr = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__next_rd = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__illinsn = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__trapped = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__trapped_q = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__stage_1_en = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__stage_1_en_q = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__stage_1_ready = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__reset_q = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__mem_rdata = VL_RAND_RESET_I(32);
    __Vm_traceActivity = 0;
}
