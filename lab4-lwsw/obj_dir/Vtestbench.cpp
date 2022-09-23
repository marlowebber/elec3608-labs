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
}

void Vtestbench::_initial__TOP__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_initial__TOP__2\n"); );
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

VL_INLINE_OPT void Vtestbench::_sequent__TOP__3(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_sequent__TOP__3\n"); );
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvdim0__testbench__DOT__dut__DOT__regfile__v0;
    CData/*0:0*/ __Vdlyvset__testbench__DOT__dut__DOT__regfile__v0;
    CData/*0:0*/ __Vdlyvset__testbench__DOT__dut__DOT__dmem__v0;
    SData/*9:0*/ __Vdlyvdim0__testbench__DOT__dut__DOT__dmem__v0;
    IData/*31:0*/ __Vdly__testbench__DOT__cycles;
    IData/*31:0*/ __Vdlyvval__testbench__DOT__dut__DOT__regfile__v0;
    IData/*31:0*/ __Vdlyvval__testbench__DOT__dut__DOT__dmem__v0;
    // Body
    __Vdly__testbench__DOT__cycles = vlTOPp->testbench__DOT__cycles;
    __Vdlyvset__testbench__DOT__dut__DOT__dmem__v0 = 0U;
    __Vdlyvset__testbench__DOT__dut__DOT__regfile__v0 = 0U;
    vlTOPp->testbench__DOT__dut__DOT__d_rd = (0x1fU 
                                              & (vlTOPp->testbench__DOT__imem_data 
                                                 >> 7U));
    if (VL_UNLIKELY((0x10000U <= vlTOPp->testbench__DOT__dut__DOT__pc))) {
        VL_WRITEF("Memory access out of range: imem_addr = 0x%08x\n",
                  32,vlTOPp->testbench__DOT__dut__DOT__pc);
    }
    __Vdly__testbench__DOT__cycles = ((IData)(1U) + vlTOPp->testbench__DOT__cycles);
    if (VL_UNLIKELY(vlTOPp->testbench__DOT__dut__DOT__trapped)) {
        VL_WRITEF("Simulated %0# cycles\n",32,vlTOPp->testbench__DOT__cycles);
        VL_FINISH_MT("testbench.sv", 82, "");
    }
    vlTOPp->testbench__DOT__dut__DOT__d_opcode = (0x7fU 
                                                  & vlTOPp->testbench__DOT__imem_data);
    if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->testbench__DOT__dut__DOT__trapped)) 
                           & (~ (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("pc = 0x%08x\n",32,vlTOPp->testbench__DOT__dut__DOT__pc);
        if (vlTOPp->testbench__DOT__dut__DOT__illegalinsn) {
            vlTOPp->testbench__DOT__dut__DOT__trapped = 1U;
        }
        if (((IData)(vlTOPp->testbench__DOT__dut__DOT__regwrite) 
             & (0U < (0x1fU & (vlTOPp->testbench__DOT__imem_data 
                               >> 7U))))) {
            vlTOPp->testbench__DOT__x10 = vlTOPp->testbench__DOT__dut__DOT__regfile
                [0xaU];
            __Vdlyvval__testbench__DOT__dut__DOT__regfile__v0 
                = vlTOPp->testbench__DOT__dut__DOT__rfilewdata;
            __Vdlyvset__testbench__DOT__dut__DOT__regfile__v0 = 1U;
            __Vdlyvdim0__testbench__DOT__dut__DOT__regfile__v0 
                = (0x1fU & (vlTOPp->testbench__DOT__imem_data 
                            >> 7U));
        }
        if ((0x23U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
            __Vdlyvval__testbench__DOT__dut__DOT__dmem__v0 
                = vlTOPp->testbench__DOT__dut__DOT__dmem_wr_data;
            __Vdlyvset__testbench__DOT__dut__DOT__dmem__v0 = 1U;
            __Vdlyvdim0__testbench__DOT__dut__DOT__dmem__v0 
                = (0x3ffU & vlTOPp->testbench__DOT__dut__DOT__dmem_wr_addr);
        }
        vlTOPp->testbench__DOT__dut__DOT__pc = vlTOPp->testbench__DOT__dut__DOT__npc;
    }
    if (vlTOPp->reset) {
        vlTOPp->testbench__DOT__dut__DOT__pc = 0U;
        vlTOPp->testbench__DOT__dut__DOT__trapped = 0U;
    }
    vlTOPp->testbench__DOT__dut__DOT__d_x0 = vlTOPp->testbench__DOT__dut__DOT__regfile
        [0U];
    vlTOPp->testbench__DOT__dut__DOT__d_x1 = vlTOPp->testbench__DOT__dut__DOT__regfile
        [1U];
    vlTOPp->testbench__DOT__dut__DOT__d_x2 = vlTOPp->testbench__DOT__dut__DOT__regfile
        [2U];
    vlTOPp->testbench__DOT__dut__DOT__d_x3 = vlTOPp->testbench__DOT__dut__DOT__regfile
        [3U];
    vlTOPp->testbench__DOT__dut__DOT__d_x4 = vlTOPp->testbench__DOT__dut__DOT__regfile
        [4U];
    vlTOPp->testbench__DOT__cycles = __Vdly__testbench__DOT__cycles;
    if (__Vdlyvset__testbench__DOT__dut__DOT__dmem__v0) {
        vlTOPp->testbench__DOT__dut__DOT__dmem[__Vdlyvdim0__testbench__DOT__dut__DOT__dmem__v0] 
            = __Vdlyvval__testbench__DOT__dut__DOT__dmem__v0;
    }
    if (__Vdlyvset__testbench__DOT__dut__DOT__regfile__v0) {
        vlTOPp->testbench__DOT__dut__DOT__regfile[__Vdlyvdim0__testbench__DOT__dut__DOT__regfile__v0] 
            = __Vdlyvval__testbench__DOT__dut__DOT__regfile__v0;
    }
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
    if ((0x13U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
        if ((1U & (~ ((((((((0U == (7U & ((0x3f8U & 
                                           (vlTOPp->testbench__DOT__imem_data 
                                            >> 0x16U)) 
                                          | (7U & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0xcU))))) 
                            | (2U == (7U & ((0x3f8U 
                                             & (vlTOPp->testbench__DOT__imem_data 
                                                >> 0x16U)) 
                                            | (7U & 
                                               (vlTOPp->testbench__DOT__imem_data 
                                                >> 0xcU)))))) 
                           | (3U == (7U & ((0x3f8U 
                                            & (vlTOPp->testbench__DOT__imem_data 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlTOPp->testbench__DOT__imem_data 
                                               >> 0xcU)))))) 
                          | (4U == (7U & ((0x3f8U & 
                                           (vlTOPp->testbench__DOT__imem_data 
                                            >> 0x16U)) 
                                          | (7U & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0xcU)))))) 
                         | (6U == (7U & ((0x3f8U & 
                                          (vlTOPp->testbench__DOT__imem_data 
                                           >> 0x16U)) 
                                         | (7U & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0xcU)))))) 
                        | (7U == (7U & ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0x16U)) 
                                        | (7U & (vlTOPp->testbench__DOT__imem_data 
                                                 >> 0xcU)))))) 
                       | (1U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                            >> 0x16U)) 
                                 | (7U & (vlTOPp->testbench__DOT__imem_data 
                                          >> 0xcU))))) 
                      | (5U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                           >> 0x16U)) 
                                | (7U & (vlTOPp->testbench__DOT__imem_data 
                                         >> 0xcU)))))))) {
            if ((0x105U != ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                       >> 0x16U)) | 
                            (7U & (vlTOPp->testbench__DOT__imem_data 
                                   >> 0xcU))))) {
                vlTOPp->testbench__DOT__dut__DOT__illegalinsn = 1U;
            }
        }
    } else {
        if ((0x33U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
            if ((1U & (~ ((((((((0U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0x16U)) 
                                        | (7U & (vlTOPp->testbench__DOT__imem_data 
                                                 >> 0xcU)))) 
                                | (0x100U == ((0x3f8U 
                                               & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0xcU))))) 
                               | (1U == ((0x3f8U & 
                                          (vlTOPp->testbench__DOT__imem_data 
                                           >> 0x16U)) 
                                         | (7U & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0xcU))))) 
                              | (2U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0x16U)) 
                                        | (7U & (vlTOPp->testbench__DOT__imem_data 
                                                 >> 0xcU))))) 
                             | (3U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0x16U)) 
                                       | (7U & (vlTOPp->testbench__DOT__imem_data 
                                                >> 0xcU))))) 
                            | (4U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                                 >> 0x16U)) 
                                      | (7U & (vlTOPp->testbench__DOT__imem_data 
                                               >> 0xcU))))) 
                           | (5U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                                >> 0x16U)) 
                                     | (7U & (vlTOPp->testbench__DOT__imem_data 
                                              >> 0xcU))))) 
                          | (0x105U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0x16U)) 
                                        | (7U & (vlTOPp->testbench__DOT__imem_data 
                                                 >> 0xcU)))))))) {
                if ((6U != ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                       >> 0x16U)) | 
                            (7U & (vlTOPp->testbench__DOT__imem_data 
                                   >> 0xcU))))) {
                    if ((7U != ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                           >> 0x16U)) 
                                | (7U & (vlTOPp->testbench__DOT__imem_data 
                                         >> 0xcU))))) {
                        vlTOPp->testbench__DOT__dut__DOT__illegalinsn = 1U;
                    }
                }
            }
        } else {
            if ((0x63U != (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
                vlTOPp->testbench__DOT__dut__DOT__illegalinsn = 1U;
            }
        }
    }
    vlTOPp->testbench__DOT__dut__DOT__alu_op_a = vlTOPp->testbench__DOT__dut__DOT__regfile
        [(0x1fU & (vlTOPp->testbench__DOT__imem_data 
                   >> 0xfU))];
    if ((0x13U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
        if (((((((((0U == (7U & ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                            >> 0x16U)) 
                                 | (7U & (vlTOPp->testbench__DOT__imem_data 
                                          >> 0xcU))))) 
                   | (2U == (7U & ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                              >> 0x16U)) 
                                   | (7U & (vlTOPp->testbench__DOT__imem_data 
                                            >> 0xcU)))))) 
                  | (3U == (7U & ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                             >> 0x16U)) 
                                  | (7U & (vlTOPp->testbench__DOT__imem_data 
                                           >> 0xcU)))))) 
                 | (4U == (7U & ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                            >> 0x16U)) 
                                 | (7U & (vlTOPp->testbench__DOT__imem_data 
                                          >> 0xcU)))))) 
                | (6U == (7U & ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                           >> 0x16U)) 
                                | (7U & (vlTOPp->testbench__DOT__imem_data 
                                         >> 0xcU)))))) 
               | (7U == (7U & ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                          >> 0x16U)) 
                               | (7U & (vlTOPp->testbench__DOT__imem_data 
                                        >> 0xcU)))))) 
              | (1U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                   >> 0x16U)) | (7U 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0xcU))))) 
             | (5U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                  >> 0x16U)) | (7U 
                                                & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0xcU)))))) {
            vlTOPp->testbench__DOT__dut__DOT__alu_op 
                = ((0U == (7U & ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                            >> 0x16U)) 
                                 | (7U & (vlTOPp->testbench__DOT__imem_data 
                                          >> 0xcU)))))
                    ? 1U : ((2U == (7U & ((0x3f8U & 
                                           (vlTOPp->testbench__DOT__imem_data 
                                            >> 0x16U)) 
                                          | (7U & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0xcU)))))
                             ? 7U : ((3U == (7U & (
                                                   (0x3f8U 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0xcU)))))
                                      ? 8U : ((4U == 
                                               (7U 
                                                & ((0x3f8U 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0xcU)))))
                                               ? 9U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & ((0x3f8U 
                                                        & (vlTOPp->testbench__DOT__imem_data 
                                                           >> 0x16U)) 
                                                       | (7U 
                                                          & (vlTOPp->testbench__DOT__imem_data 
                                                             >> 0xcU)))))
                                                   ? 0xaU
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
                                                    ? 0xbU
                                                    : 
                                                   ((1U 
                                                     == 
                                                     ((0x3f8U 
                                                       & (vlTOPp->testbench__DOT__imem_data 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlTOPp->testbench__DOT__imem_data 
                                                            >> 0xcU))))
                                                     ? 3U
                                                     : 4U)))))));
        } else {
            if ((0x105U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                       >> 0x16U)) | 
                            (7U & (vlTOPp->testbench__DOT__imem_data 
                                   >> 0xcU))))) {
                vlTOPp->testbench__DOT__dut__DOT__alu_op = 5U;
            }
        }
    } else {
        if ((0x33U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
            if (((((((((0U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                          >> 0x16U)) 
                               | (7U & (vlTOPp->testbench__DOT__imem_data 
                                        >> 0xcU)))) 
                       | (0x100U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                                >> 0x16U)) 
                                     | (7U & (vlTOPp->testbench__DOT__imem_data 
                                              >> 0xcU))))) 
                      | (1U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                           >> 0x16U)) 
                                | (7U & (vlTOPp->testbench__DOT__imem_data 
                                         >> 0xcU))))) 
                     | (2U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                          >> 0x16U)) 
                               | (7U & (vlTOPp->testbench__DOT__imem_data 
                                        >> 0xcU))))) 
                    | (3U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                         >> 0x16U)) 
                              | (7U & (vlTOPp->testbench__DOT__imem_data 
                                       >> 0xcU))))) 
                   | (4U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                        >> 0x16U)) 
                             | (7U & (vlTOPp->testbench__DOT__imem_data 
                                      >> 0xcU))))) 
                  | (5U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                       >> 0x16U)) | 
                            (7U & (vlTOPp->testbench__DOT__imem_data 
                                   >> 0xcU))))) | (0x105U 
                                                   == 
                                                   ((0x3f8U 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlTOPp->testbench__DOT__imem_data 
                                                          >> 0xcU)))))) {
                vlTOPp->testbench__DOT__dut__DOT__alu_op 
                    = ((0U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                          >> 0x16U)) 
                               | (7U & (vlTOPp->testbench__DOT__imem_data 
                                        >> 0xcU))))
                        ? 1U : ((0x100U == ((0x3f8U 
                                             & (vlTOPp->testbench__DOT__imem_data 
                                                >> 0x16U)) 
                                            | (7U & 
                                               (vlTOPp->testbench__DOT__imem_data 
                                                >> 0xcU))))
                                 ? 2U : ((1U == ((0x3f8U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0xcU))))
                                          ? 3U : ((2U 
                                                   == 
                                                   ((0x3f8U 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlTOPp->testbench__DOT__imem_data 
                                                          >> 0xcU))))
                                                   ? 7U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    ((0x3f8U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlTOPp->testbench__DOT__imem_data 
                                                           >> 0xcU))))
                                                    ? 8U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     ((0x3f8U 
                                                       & (vlTOPp->testbench__DOT__imem_data 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlTOPp->testbench__DOT__imem_data 
                                                            >> 0xcU))))
                                                     ? 9U
                                                     : 
                                                    ((5U 
                                                      == 
                                                      ((0x3f8U 
                                                        & (vlTOPp->testbench__DOT__imem_data 
                                                           >> 0x16U)) 
                                                       | (7U 
                                                          & (vlTOPp->testbench__DOT__imem_data 
                                                             >> 0xcU))))
                                                      ? 4U
                                                      : 5U)))))));
            } else {
                if ((6U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                       >> 0x16U)) | 
                            (7U & (vlTOPp->testbench__DOT__imem_data 
                                   >> 0xcU))))) {
                    vlTOPp->testbench__DOT__dut__DOT__alu_op = 0xaU;
                } else {
                    if ((7U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                           >> 0x16U)) 
                                | (7U & (vlTOPp->testbench__DOT__imem_data 
                                         >> 0xcU))))) {
                        vlTOPp->testbench__DOT__dut__DOT__alu_op = 0xbU;
                    }
                }
            }
        } else {
            if ((0x63U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
                if ((0U == (7U & (vlTOPp->testbench__DOT__imem_data 
                                  >> 0xcU)))) {
                    vlTOPp->testbench__DOT__dut__DOT__alu_op = 2U;
                } else {
                    if ((1U == (7U & (vlTOPp->testbench__DOT__imem_data 
                                      >> 0xcU)))) {
                        vlTOPp->testbench__DOT__dut__DOT__alu_op = 2U;
                    } else {
                        if ((4U == (7U & (vlTOPp->testbench__DOT__imem_data 
                                          >> 0xcU)))) {
                            vlTOPp->testbench__DOT__dut__DOT__alu_op = 7U;
                        } else {
                            if ((5U == (7U & (vlTOPp->testbench__DOT__imem_data 
                                              >> 0xcU)))) {
                                vlTOPp->testbench__DOT__dut__DOT__alu_op = 7U;
                            } else {
                                if ((6U == (7U & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0xcU)))) {
                                    vlTOPp->testbench__DOT__dut__DOT__alu_op = 8U;
                                } else {
                                    if ((7U == (7U 
                                                & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0xcU)))) {
                                        vlTOPp->testbench__DOT__dut__DOT__alu_op = 8U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->testbench__DOT__dut__DOT__imm_s_sext = 
        ((0xfe0U & (vlTOPp->testbench__DOT__imem_data 
                    >> 0x14U)) | (0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                           >> 7U)));
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
    vlTOPp->testbench__DOT__dut__DOT__imm_i_sext = 
        ((0xfffff000U & (VL_NEGATE_I((IData)((1U & 
                                              (vlTOPp->testbench__DOT__imem_data 
                                               >> 0x1fU)))) 
                         << 0xcU)) | (0xfffU & (vlTOPp->testbench__DOT__imem_data 
                                                >> 0x14U)));
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
                                                    : vlTOPp->testbench__DOT__dut__DOT__imm_i_sext)
                                                   : 
                                                  vlTOPp->testbench__DOT__dut__DOT__regfile
                                                  [
                                                  (0x1fU 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0x14U))]);
}

void Vtestbench::_settle__TOP__4(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_settle__TOP__4\n"); );
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
    if ((0x13U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
        if ((1U & (~ ((((((((0U == (7U & ((0x3f8U & 
                                           (vlTOPp->testbench__DOT__imem_data 
                                            >> 0x16U)) 
                                          | (7U & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0xcU))))) 
                            | (2U == (7U & ((0x3f8U 
                                             & (vlTOPp->testbench__DOT__imem_data 
                                                >> 0x16U)) 
                                            | (7U & 
                                               (vlTOPp->testbench__DOT__imem_data 
                                                >> 0xcU)))))) 
                           | (3U == (7U & ((0x3f8U 
                                            & (vlTOPp->testbench__DOT__imem_data 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlTOPp->testbench__DOT__imem_data 
                                               >> 0xcU)))))) 
                          | (4U == (7U & ((0x3f8U & 
                                           (vlTOPp->testbench__DOT__imem_data 
                                            >> 0x16U)) 
                                          | (7U & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0xcU)))))) 
                         | (6U == (7U & ((0x3f8U & 
                                          (vlTOPp->testbench__DOT__imem_data 
                                           >> 0x16U)) 
                                         | (7U & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0xcU)))))) 
                        | (7U == (7U & ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0x16U)) 
                                        | (7U & (vlTOPp->testbench__DOT__imem_data 
                                                 >> 0xcU)))))) 
                       | (1U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                            >> 0x16U)) 
                                 | (7U & (vlTOPp->testbench__DOT__imem_data 
                                          >> 0xcU))))) 
                      | (5U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                           >> 0x16U)) 
                                | (7U & (vlTOPp->testbench__DOT__imem_data 
                                         >> 0xcU)))))))) {
            if ((0x105U != ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                       >> 0x16U)) | 
                            (7U & (vlTOPp->testbench__DOT__imem_data 
                                   >> 0xcU))))) {
                vlTOPp->testbench__DOT__dut__DOT__illegalinsn = 1U;
            }
        }
    } else {
        if ((0x33U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
            if ((1U & (~ ((((((((0U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0x16U)) 
                                        | (7U & (vlTOPp->testbench__DOT__imem_data 
                                                 >> 0xcU)))) 
                                | (0x100U == ((0x3f8U 
                                               & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0xcU))))) 
                               | (1U == ((0x3f8U & 
                                          (vlTOPp->testbench__DOT__imem_data 
                                           >> 0x16U)) 
                                         | (7U & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0xcU))))) 
                              | (2U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0x16U)) 
                                        | (7U & (vlTOPp->testbench__DOT__imem_data 
                                                 >> 0xcU))))) 
                             | (3U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0x16U)) 
                                       | (7U & (vlTOPp->testbench__DOT__imem_data 
                                                >> 0xcU))))) 
                            | (4U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                                 >> 0x16U)) 
                                      | (7U & (vlTOPp->testbench__DOT__imem_data 
                                               >> 0xcU))))) 
                           | (5U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                                >> 0x16U)) 
                                     | (7U & (vlTOPp->testbench__DOT__imem_data 
                                              >> 0xcU))))) 
                          | (0x105U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0x16U)) 
                                        | (7U & (vlTOPp->testbench__DOT__imem_data 
                                                 >> 0xcU)))))))) {
                if ((6U != ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                       >> 0x16U)) | 
                            (7U & (vlTOPp->testbench__DOT__imem_data 
                                   >> 0xcU))))) {
                    if ((7U != ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                           >> 0x16U)) 
                                | (7U & (vlTOPp->testbench__DOT__imem_data 
                                         >> 0xcU))))) {
                        vlTOPp->testbench__DOT__dut__DOT__illegalinsn = 1U;
                    }
                }
            }
        } else {
            if ((0x63U != (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
                vlTOPp->testbench__DOT__dut__DOT__illegalinsn = 1U;
            }
        }
    }
    vlTOPp->testbench__DOT__dut__DOT__alu_op_a = vlTOPp->testbench__DOT__dut__DOT__regfile
        [(0x1fU & (vlTOPp->testbench__DOT__imem_data 
                   >> 0xfU))];
    if ((0x13U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
        if (((((((((0U == (7U & ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                            >> 0x16U)) 
                                 | (7U & (vlTOPp->testbench__DOT__imem_data 
                                          >> 0xcU))))) 
                   | (2U == (7U & ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                              >> 0x16U)) 
                                   | (7U & (vlTOPp->testbench__DOT__imem_data 
                                            >> 0xcU)))))) 
                  | (3U == (7U & ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                             >> 0x16U)) 
                                  | (7U & (vlTOPp->testbench__DOT__imem_data 
                                           >> 0xcU)))))) 
                 | (4U == (7U & ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                            >> 0x16U)) 
                                 | (7U & (vlTOPp->testbench__DOT__imem_data 
                                          >> 0xcU)))))) 
                | (6U == (7U & ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                           >> 0x16U)) 
                                | (7U & (vlTOPp->testbench__DOT__imem_data 
                                         >> 0xcU)))))) 
               | (7U == (7U & ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                          >> 0x16U)) 
                               | (7U & (vlTOPp->testbench__DOT__imem_data 
                                        >> 0xcU)))))) 
              | (1U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                   >> 0x16U)) | (7U 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0xcU))))) 
             | (5U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                  >> 0x16U)) | (7U 
                                                & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0xcU)))))) {
            vlTOPp->testbench__DOT__dut__DOT__alu_op 
                = ((0U == (7U & ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                            >> 0x16U)) 
                                 | (7U & (vlTOPp->testbench__DOT__imem_data 
                                          >> 0xcU)))))
                    ? 1U : ((2U == (7U & ((0x3f8U & 
                                           (vlTOPp->testbench__DOT__imem_data 
                                            >> 0x16U)) 
                                          | (7U & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0xcU)))))
                             ? 7U : ((3U == (7U & (
                                                   (0x3f8U 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0xcU)))))
                                      ? 8U : ((4U == 
                                               (7U 
                                                & ((0x3f8U 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0xcU)))))
                                               ? 9U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & ((0x3f8U 
                                                        & (vlTOPp->testbench__DOT__imem_data 
                                                           >> 0x16U)) 
                                                       | (7U 
                                                          & (vlTOPp->testbench__DOT__imem_data 
                                                             >> 0xcU)))))
                                                   ? 0xaU
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
                                                    ? 0xbU
                                                    : 
                                                   ((1U 
                                                     == 
                                                     ((0x3f8U 
                                                       & (vlTOPp->testbench__DOT__imem_data 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlTOPp->testbench__DOT__imem_data 
                                                            >> 0xcU))))
                                                     ? 3U
                                                     : 4U)))))));
        } else {
            if ((0x105U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                       >> 0x16U)) | 
                            (7U & (vlTOPp->testbench__DOT__imem_data 
                                   >> 0xcU))))) {
                vlTOPp->testbench__DOT__dut__DOT__alu_op = 5U;
            }
        }
    } else {
        if ((0x33U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
            if (((((((((0U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                          >> 0x16U)) 
                               | (7U & (vlTOPp->testbench__DOT__imem_data 
                                        >> 0xcU)))) 
                       | (0x100U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                                >> 0x16U)) 
                                     | (7U & (vlTOPp->testbench__DOT__imem_data 
                                              >> 0xcU))))) 
                      | (1U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                           >> 0x16U)) 
                                | (7U & (vlTOPp->testbench__DOT__imem_data 
                                         >> 0xcU))))) 
                     | (2U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                          >> 0x16U)) 
                               | (7U & (vlTOPp->testbench__DOT__imem_data 
                                        >> 0xcU))))) 
                    | (3U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                         >> 0x16U)) 
                              | (7U & (vlTOPp->testbench__DOT__imem_data 
                                       >> 0xcU))))) 
                   | (4U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                        >> 0x16U)) 
                             | (7U & (vlTOPp->testbench__DOT__imem_data 
                                      >> 0xcU))))) 
                  | (5U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                       >> 0x16U)) | 
                            (7U & (vlTOPp->testbench__DOT__imem_data 
                                   >> 0xcU))))) | (0x105U 
                                                   == 
                                                   ((0x3f8U 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlTOPp->testbench__DOT__imem_data 
                                                          >> 0xcU)))))) {
                vlTOPp->testbench__DOT__dut__DOT__alu_op 
                    = ((0U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                          >> 0x16U)) 
                               | (7U & (vlTOPp->testbench__DOT__imem_data 
                                        >> 0xcU))))
                        ? 1U : ((0x100U == ((0x3f8U 
                                             & (vlTOPp->testbench__DOT__imem_data 
                                                >> 0x16U)) 
                                            | (7U & 
                                               (vlTOPp->testbench__DOT__imem_data 
                                                >> 0xcU))))
                                 ? 2U : ((1U == ((0x3f8U 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlTOPp->testbench__DOT__imem_data 
                                                       >> 0xcU))))
                                          ? 3U : ((2U 
                                                   == 
                                                   ((0x3f8U 
                                                     & (vlTOPp->testbench__DOT__imem_data 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlTOPp->testbench__DOT__imem_data 
                                                          >> 0xcU))))
                                                   ? 7U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    ((0x3f8U 
                                                      & (vlTOPp->testbench__DOT__imem_data 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlTOPp->testbench__DOT__imem_data 
                                                           >> 0xcU))))
                                                    ? 8U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     ((0x3f8U 
                                                       & (vlTOPp->testbench__DOT__imem_data 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlTOPp->testbench__DOT__imem_data 
                                                            >> 0xcU))))
                                                     ? 9U
                                                     : 
                                                    ((5U 
                                                      == 
                                                      ((0x3f8U 
                                                        & (vlTOPp->testbench__DOT__imem_data 
                                                           >> 0x16U)) 
                                                       | (7U 
                                                          & (vlTOPp->testbench__DOT__imem_data 
                                                             >> 0xcU))))
                                                      ? 4U
                                                      : 5U)))))));
            } else {
                if ((6U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                       >> 0x16U)) | 
                            (7U & (vlTOPp->testbench__DOT__imem_data 
                                   >> 0xcU))))) {
                    vlTOPp->testbench__DOT__dut__DOT__alu_op = 0xaU;
                } else {
                    if ((7U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                           >> 0x16U)) 
                                | (7U & (vlTOPp->testbench__DOT__imem_data 
                                         >> 0xcU))))) {
                        vlTOPp->testbench__DOT__dut__DOT__alu_op = 0xbU;
                    }
                }
            }
        } else {
            if ((0x63U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
                if ((0U == (7U & (vlTOPp->testbench__DOT__imem_data 
                                  >> 0xcU)))) {
                    vlTOPp->testbench__DOT__dut__DOT__alu_op = 2U;
                } else {
                    if ((1U == (7U & (vlTOPp->testbench__DOT__imem_data 
                                      >> 0xcU)))) {
                        vlTOPp->testbench__DOT__dut__DOT__alu_op = 2U;
                    } else {
                        if ((4U == (7U & (vlTOPp->testbench__DOT__imem_data 
                                          >> 0xcU)))) {
                            vlTOPp->testbench__DOT__dut__DOT__alu_op = 7U;
                        } else {
                            if ((5U == (7U & (vlTOPp->testbench__DOT__imem_data 
                                              >> 0xcU)))) {
                                vlTOPp->testbench__DOT__dut__DOT__alu_op = 7U;
                            } else {
                                if ((6U == (7U & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0xcU)))) {
                                    vlTOPp->testbench__DOT__dut__DOT__alu_op = 8U;
                                } else {
                                    if ((7U == (7U 
                                                & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0xcU)))) {
                                        vlTOPp->testbench__DOT__dut__DOT__alu_op = 8U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->testbench__DOT__dut__DOT__imm_s_sext = 
        ((0xfe0U & (vlTOPp->testbench__DOT__imem_data 
                    >> 0x14U)) | (0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                           >> 7U)));
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
    vlTOPp->testbench__DOT__dut__DOT__imm_i_sext = 
        ((0xfffff000U & (VL_NEGATE_I((IData)((1U & 
                                              (vlTOPp->testbench__DOT__imem_data 
                                               >> 0x1fU)))) 
                         << 0xcU)) | (0xfffU & (vlTOPp->testbench__DOT__imem_data 
                                                >> 0x14U)));
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
                                                    : vlTOPp->testbench__DOT__dut__DOT__imm_i_sext)
                                                   : 
                                                  vlTOPp->testbench__DOT__dut__DOT__regfile
                                                  [
                                                  (0x1fU 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0x14U))]);
    vlTOPp->testbench__DOT__dut__DOT__illegalinsn = 0U;
    vlTOPp->testbench__DOT__dut__DOT__regwrite = 0U;
    vlTOPp->testbench__DOT__dut__DOT__npc = ((IData)(4U) 
                                             + vlTOPp->testbench__DOT__dut__DOT__pc);
    vlTOPp->testbench__DOT__dut__DOT__rfilewdata = vlTOPp->testbench__DOT__dut__DOT__alu_result;
    VL_WRITEF("x1 ra 0x%08x, x2 sp  0x%08x, x10 a0  0x%08x\n",
              32,vlTOPp->testbench__DOT__dut__DOT__regfile
              [1U],32,vlTOPp->testbench__DOT__dut__DOT__regfile
              [2U],32,vlTOPp->testbench__DOT__dut__DOT__regfile
              [0xaU]);
    if (((((((((0U == (0x7fU & vlTOPp->testbench__DOT__imem_data)) 
               | (0x23U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) 
              | (3U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) 
             | (0x13U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) 
            | (0x33U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) 
           | (0x6fU == (0x7fU & vlTOPp->testbench__DOT__imem_data))) 
          | (0x67U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) 
         | (0x63U == (0x7fU & vlTOPp->testbench__DOT__imem_data)))) {
        if ((0U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
            vlTOPp->testbench__DOT__dut__DOT__alu_op = 1U;
        } else {
            if ((0x23U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
                if (VL_UNLIKELY((2U == (7U & (vlTOPp->testbench__DOT__imem_data 
                                              >> 0xcU))))) {
                    vlTOPp->testbench__DOT__dut__DOT__dmem_wr_addr 
                        = (vlTOPp->testbench__DOT__dut__DOT__regfile
                           [(0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                      >> 0xfU))] + vlTOPp->testbench__DOT__dut__DOT__imm_s_sext);
                    vlTOPp->testbench__DOT__dut__DOT__dmem_wr_data 
                        = vlTOPp->testbench__DOT__dut__DOT__regfile
                        [(0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                   >> 0x14U))];
                    vlTOPp->testbench__DOT__dut__DOT__dmem[(0x3ffU 
                                                            & vlTOPp->testbench__DOT__dut__DOT__dmem_wr_addr)] 
                        = vlTOPp->testbench__DOT__dut__DOT__dmem_wr_data;
                    VL_WRITEF("sw 0x%08x to = 0x%08x. insn_rs1 0x%08x, insn_rs2 0x%08x, imm_s_sext 0x%08x \n",
                              32,vlTOPp->testbench__DOT__dut__DOT__dmem_wr_data,
                              32,vlTOPp->testbench__DOT__dut__DOT__dmem_wr_addr,
                              5,(0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                          >> 0xfU)),
                              5,(0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                          >> 0x14U)),
                              32,vlTOPp->testbench__DOT__dut__DOT__imm_s_sext);
                } else {
                    vlTOPp->testbench__DOT__dut__DOT__illegalinsn = 1U;
                }
            } else {
                if ((3U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
                    if (VL_UNLIKELY((2U == (7U & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0xcU))))) {
                        vlTOPp->testbench__DOT__dut__DOT__regwrite = 1U;
                        vlTOPp->testbench__DOT__dut__DOT__dmem_rd_addr 
                            = (vlTOPp->testbench__DOT__dut__DOT__regfile
                               [(0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                          >> 0xfU))] 
                               + vlTOPp->testbench__DOT__dut__DOT__imm_i_sext);
                        vlTOPp->testbench__DOT__dut__DOT__dmem_rd_data 
                            = vlTOPp->testbench__DOT__dut__DOT__dmem
                            [(0x3ffU & vlTOPp->testbench__DOT__dut__DOT__dmem_rd_addr)];
                        vlTOPp->testbench__DOT__dut__DOT__rfilewdata 
                            = vlTOPp->testbench__DOT__dut__DOT__dmem_rd_data;
                        VL_WRITEF("lw from 0x%08x = 0x%08x, to 0x%08x,.  insn_rs1 0x%08x, insn_rs2 0x%08x, imm_i_sext 0x%08x\n",
                                  32,vlTOPp->testbench__DOT__dut__DOT__dmem_rd_addr,
                                  32,vlTOPp->testbench__DOT__dut__DOT__dmem_rd_data,
                                  5,(0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                              >> 7U)),
                                  5,(0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                              >> 0xfU)),
                                  5,(0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                              >> 0x14U)),
                                  32,vlTOPp->testbench__DOT__dut__DOT__imm_i_sext);
                    } else {
                        vlTOPp->testbench__DOT__dut__DOT__illegalinsn = 1U;
                    }
                } else {
                    if ((0x13U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
                        vlTOPp->testbench__DOT__dut__DOT__regwrite = 1U;
                    } else {
                        if ((0x33U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
                            vlTOPp->testbench__DOT__dut__DOT__regwrite = 1U;
                        } else {
                            if ((0x6fU == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
                                vlTOPp->testbench__DOT__dut__DOT__regwrite = 1U;
                                vlTOPp->testbench__DOT__dut__DOT__rfilewdata 
                                    = vlTOPp->testbench__DOT__dut__DOT__npc;
                                vlTOPp->testbench__DOT__dut__DOT__npc 
                                    = (vlTOPp->testbench__DOT__dut__DOT__pc 
                                       + VL_EXTENDS_II(32,21, vlTOPp->testbench__DOT__dut__DOT__imm_j));
                            } else {
                                if ((0x67U == (0x7fU 
                                               & vlTOPp->testbench__DOT__imem_data))) {
                                    vlTOPp->testbench__DOT__dut__DOT__regwrite = 1U;
                                    vlTOPp->testbench__DOT__dut__DOT__rfilewdata 
                                        = vlTOPp->testbench__DOT__dut__DOT__npc;
                                    vlTOPp->testbench__DOT__dut__DOT__npc 
                                        = (0xfffffffeU 
                                           & (vlTOPp->testbench__DOT__dut__DOT__regfile
                                              [(0x1fU 
                                                & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0xfU))] 
                                              + vlTOPp->testbench__DOT__dut__DOT__imm_i_sext));
                                } else {
                                    if ((0x4000U & vlTOPp->testbench__DOT__imem_data)) {
                                        if ((0x2000U 
                                             & vlTOPp->testbench__DOT__imem_data)) {
                                            if ((0x1000U 
                                                 & vlTOPp->testbench__DOT__imem_data)) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_eq_zero)))) {
                                                    vlTOPp->testbench__DOT__dut__DOT__npc 
                                                        = 
                                                        (vlTOPp->testbench__DOT__dut__DOT__pc 
                                                         + 
                                                         VL_EXTENDS_II(32,13, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)));
                                                }
                                            } else {
                                                if (vlTOPp->testbench__DOT__dut__DOT__alu_eq_zero) {
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
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_eq_zero)))) {
                                                    vlTOPp->testbench__DOT__dut__DOT__npc 
                                                        = 
                                                        (vlTOPp->testbench__DOT__dut__DOT__pc 
                                                         + 
                                                         VL_EXTENDS_II(32,13, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)));
                                                }
                                            } else {
                                                if (vlTOPp->testbench__DOT__dut__DOT__alu_eq_zero) {
                                                    vlTOPp->testbench__DOT__dut__DOT__npc 
                                                        = 
                                                        (vlTOPp->testbench__DOT__dut__DOT__pc 
                                                         + 
                                                         VL_EXTENDS_II(32,13, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)));
                                                }
                                            }
                                        }
                                    } else {
                                        if ((0x2000U 
                                             & vlTOPp->testbench__DOT__imem_data)) {
                                            vlTOPp->testbench__DOT__dut__DOT__illegalinsn = 1U;
                                        } else {
                                            if ((0x1000U 
                                                 & vlTOPp->testbench__DOT__imem_data)) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_eq_zero)))) {
                                                    vlTOPp->testbench__DOT__dut__DOT__npc 
                                                        = 
                                                        (vlTOPp->testbench__DOT__dut__DOT__pc 
                                                         + 
                                                         VL_EXTENDS_II(32,13, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)));
                                                }
                                            } else {
                                                if (vlTOPp->testbench__DOT__dut__DOT__alu_eq_zero) {
                                                    vlTOPp->testbench__DOT__dut__DOT__npc 
                                                        = 
                                                        (vlTOPp->testbench__DOT__dut__DOT__pc 
                                                         + 
                                                         VL_EXTENDS_II(32,13, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->testbench__DOT__dut__DOT__illegalinsn = 1U;
    }
    if ((0U != (3U & vlTOPp->testbench__DOT__dut__DOT__npc))) {
        vlTOPp->testbench__DOT__dut__DOT__illegalinsn = 1U;
        vlTOPp->testbench__DOT__dut__DOT__npc = (0xfffffffcU 
                                                 & vlTOPp->testbench__DOT__dut__DOT__pc);
    }
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

VL_INLINE_OPT void Vtestbench::_combo__TOP__5(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_combo__TOP__5\n"); );
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->testbench__DOT__dut__DOT__illegalinsn = 0U;
    vlTOPp->testbench__DOT__dut__DOT__regwrite = 0U;
    vlTOPp->testbench__DOT__dut__DOT__npc = ((IData)(4U) 
                                             + vlTOPp->testbench__DOT__dut__DOT__pc);
    vlTOPp->testbench__DOT__dut__DOT__rfilewdata = vlTOPp->testbench__DOT__dut__DOT__alu_result;
    VL_WRITEF("x1 ra 0x%08x, x2 sp  0x%08x, x10 a0  0x%08x\n",
              32,vlTOPp->testbench__DOT__dut__DOT__regfile
              [1U],32,vlTOPp->testbench__DOT__dut__DOT__regfile
              [2U],32,vlTOPp->testbench__DOT__dut__DOT__regfile
              [0xaU]);
    if (((((((((0U == (0x7fU & vlTOPp->testbench__DOT__imem_data)) 
               | (0x23U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) 
              | (3U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) 
             | (0x13U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) 
            | (0x33U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) 
           | (0x6fU == (0x7fU & vlTOPp->testbench__DOT__imem_data))) 
          | (0x67U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) 
         | (0x63U == (0x7fU & vlTOPp->testbench__DOT__imem_data)))) {
        if ((0U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
            vlTOPp->testbench__DOT__dut__DOT__alu_op = 1U;
        } else {
            if ((0x23U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
                if (VL_UNLIKELY((2U == (7U & (vlTOPp->testbench__DOT__imem_data 
                                              >> 0xcU))))) {
                    vlTOPp->testbench__DOT__dut__DOT__dmem_wr_addr 
                        = (vlTOPp->testbench__DOT__dut__DOT__regfile
                           [(0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                      >> 0xfU))] + vlTOPp->testbench__DOT__dut__DOT__imm_s_sext);
                    vlTOPp->testbench__DOT__dut__DOT__dmem_wr_data 
                        = vlTOPp->testbench__DOT__dut__DOT__regfile
                        [(0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                   >> 0x14U))];
                    vlTOPp->testbench__DOT__dut__DOT__dmem[(0x3ffU 
                                                            & vlTOPp->testbench__DOT__dut__DOT__dmem_wr_addr)] 
                        = vlTOPp->testbench__DOT__dut__DOT__dmem_wr_data;
                    VL_WRITEF("sw 0x%08x to = 0x%08x. insn_rs1 0x%08x, insn_rs2 0x%08x, imm_s_sext 0x%08x \n",
                              32,vlTOPp->testbench__DOT__dut__DOT__dmem_wr_data,
                              32,vlTOPp->testbench__DOT__dut__DOT__dmem_wr_addr,
                              5,(0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                          >> 0xfU)),
                              5,(0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                          >> 0x14U)),
                              32,vlTOPp->testbench__DOT__dut__DOT__imm_s_sext);
                } else {
                    vlTOPp->testbench__DOT__dut__DOT__illegalinsn = 1U;
                }
            } else {
                if ((3U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
                    if (VL_UNLIKELY((2U == (7U & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0xcU))))) {
                        vlTOPp->testbench__DOT__dut__DOT__regwrite = 1U;
                        vlTOPp->testbench__DOT__dut__DOT__dmem_rd_addr 
                            = (vlTOPp->testbench__DOT__dut__DOT__regfile
                               [(0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                          >> 0xfU))] 
                               + vlTOPp->testbench__DOT__dut__DOT__imm_i_sext);
                        vlTOPp->testbench__DOT__dut__DOT__dmem_rd_data 
                            = vlTOPp->testbench__DOT__dut__DOT__dmem
                            [(0x3ffU & vlTOPp->testbench__DOT__dut__DOT__dmem_rd_addr)];
                        vlTOPp->testbench__DOT__dut__DOT__rfilewdata 
                            = vlTOPp->testbench__DOT__dut__DOT__dmem_rd_data;
                        VL_WRITEF("lw from 0x%08x = 0x%08x, to 0x%08x,.  insn_rs1 0x%08x, insn_rs2 0x%08x, imm_i_sext 0x%08x\n",
                                  32,vlTOPp->testbench__DOT__dut__DOT__dmem_rd_addr,
                                  32,vlTOPp->testbench__DOT__dut__DOT__dmem_rd_data,
                                  5,(0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                              >> 7U)),
                                  5,(0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                              >> 0xfU)),
                                  5,(0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                              >> 0x14U)),
                                  32,vlTOPp->testbench__DOT__dut__DOT__imm_i_sext);
                    } else {
                        vlTOPp->testbench__DOT__dut__DOT__illegalinsn = 1U;
                    }
                } else {
                    if ((0x13U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
                        vlTOPp->testbench__DOT__dut__DOT__regwrite = 1U;
                    } else {
                        if ((0x33U == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
                            vlTOPp->testbench__DOT__dut__DOT__regwrite = 1U;
                        } else {
                            if ((0x6fU == (0x7fU & vlTOPp->testbench__DOT__imem_data))) {
                                vlTOPp->testbench__DOT__dut__DOT__regwrite = 1U;
                                vlTOPp->testbench__DOT__dut__DOT__rfilewdata 
                                    = vlTOPp->testbench__DOT__dut__DOT__npc;
                                vlTOPp->testbench__DOT__dut__DOT__npc 
                                    = (vlTOPp->testbench__DOT__dut__DOT__pc 
                                       + VL_EXTENDS_II(32,21, vlTOPp->testbench__DOT__dut__DOT__imm_j));
                            } else {
                                if ((0x67U == (0x7fU 
                                               & vlTOPp->testbench__DOT__imem_data))) {
                                    vlTOPp->testbench__DOT__dut__DOT__regwrite = 1U;
                                    vlTOPp->testbench__DOT__dut__DOT__rfilewdata 
                                        = vlTOPp->testbench__DOT__dut__DOT__npc;
                                    vlTOPp->testbench__DOT__dut__DOT__npc 
                                        = (0xfffffffeU 
                                           & (vlTOPp->testbench__DOT__dut__DOT__regfile
                                              [(0x1fU 
                                                & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0xfU))] 
                                              + vlTOPp->testbench__DOT__dut__DOT__imm_i_sext));
                                } else {
                                    if ((0x4000U & vlTOPp->testbench__DOT__imem_data)) {
                                        if ((0x2000U 
                                             & vlTOPp->testbench__DOT__imem_data)) {
                                            if ((0x1000U 
                                                 & vlTOPp->testbench__DOT__imem_data)) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_eq_zero)))) {
                                                    vlTOPp->testbench__DOT__dut__DOT__npc 
                                                        = 
                                                        (vlTOPp->testbench__DOT__dut__DOT__pc 
                                                         + 
                                                         VL_EXTENDS_II(32,13, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)));
                                                }
                                            } else {
                                                if (vlTOPp->testbench__DOT__dut__DOT__alu_eq_zero) {
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
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_eq_zero)))) {
                                                    vlTOPp->testbench__DOT__dut__DOT__npc 
                                                        = 
                                                        (vlTOPp->testbench__DOT__dut__DOT__pc 
                                                         + 
                                                         VL_EXTENDS_II(32,13, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)));
                                                }
                                            } else {
                                                if (vlTOPp->testbench__DOT__dut__DOT__alu_eq_zero) {
                                                    vlTOPp->testbench__DOT__dut__DOT__npc 
                                                        = 
                                                        (vlTOPp->testbench__DOT__dut__DOT__pc 
                                                         + 
                                                         VL_EXTENDS_II(32,13, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)));
                                                }
                                            }
                                        }
                                    } else {
                                        if ((0x2000U 
                                             & vlTOPp->testbench__DOT__imem_data)) {
                                            vlTOPp->testbench__DOT__dut__DOT__illegalinsn = 1U;
                                        } else {
                                            if ((0x1000U 
                                                 & vlTOPp->testbench__DOT__imem_data)) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->testbench__DOT__dut__DOT__alu_eq_zero)))) {
                                                    vlTOPp->testbench__DOT__dut__DOT__npc 
                                                        = 
                                                        (vlTOPp->testbench__DOT__dut__DOT__pc 
                                                         + 
                                                         VL_EXTENDS_II(32,13, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)));
                                                }
                                            } else {
                                                if (vlTOPp->testbench__DOT__dut__DOT__alu_eq_zero) {
                                                    vlTOPp->testbench__DOT__dut__DOT__npc 
                                                        = 
                                                        (vlTOPp->testbench__DOT__dut__DOT__pc 
                                                         + 
                                                         VL_EXTENDS_II(32,13, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b)));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->testbench__DOT__dut__DOT__illegalinsn = 1U;
    }
    if ((0U != (3U & vlTOPp->testbench__DOT__dut__DOT__npc))) {
        vlTOPp->testbench__DOT__dut__DOT__illegalinsn = 1U;
        vlTOPp->testbench__DOT__dut__DOT__npc = (0xfffffffcU 
                                                 & vlTOPp->testbench__DOT__dut__DOT__pc);
    }
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
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void Vtestbench::_eval_initial(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_eval_initial\n"); );
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__2(vlSymsp);
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
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__4(vlSymsp);
}

VL_INLINE_OPT QData Vtestbench::_change_request(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_change_request\n"); );
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->testbench__DOT__dut__DOT__alu_eq_zero ^ vlTOPp->__Vchglast__TOP__testbench__DOT__dut__DOT__alu_eq_zero)
         | (vlTOPp->testbench__DOT__dut__DOT__alu_result ^ vlTOPp->__Vchglast__TOP__testbench__DOT__dut__DOT__alu_result));
    VL_DEBUG_IF( if(__req && ((vlTOPp->testbench__DOT__dut__DOT__alu_eq_zero ^ vlTOPp->__Vchglast__TOP__testbench__DOT__dut__DOT__alu_eq_zero))) VL_DBG_MSGF("        CHANGE: rv3608c.sv:116: testbench.dut.alu_eq_zero\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->testbench__DOT__dut__DOT__alu_result ^ vlTOPp->__Vchglast__TOP__testbench__DOT__dut__DOT__alu_result))) VL_DBG_MSGF("        CHANGE: rv3608c.sv:117: testbench.dut.alu_result\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__testbench__DOT__dut__DOT__alu_eq_zero 
        = vlTOPp->testbench__DOT__dut__DOT__alu_eq_zero;
    vlTOPp->__Vchglast__TOP__testbench__DOT__dut__DOT__alu_result 
        = vlTOPp->testbench__DOT__dut__DOT__alu_result;
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
    testbench__DOT__x10 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<65536; ++__Vi0) {
            testbench__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    testbench__DOT__cycles = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
            testbench__DOT__dut__DOT__dmem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    testbench__DOT__dut__DOT__dmem_wr_enable = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__dmem_wr_addr = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__dmem_wr_data = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__dmem_rd_addr = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__dmem_rd_data = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__d_rd = VL_RAND_RESET_I(5);
    testbench__DOT__dut__DOT__d_x0 = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__d_x1 = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__d_x2 = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__d_x3 = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__d_x4 = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__d_opcode = VL_RAND_RESET_I(7);
    testbench__DOT__dut__DOT__illegalinsn = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__trapped = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            testbench__DOT__dut__DOT__regfile[__Vi0] = VL_RAND_RESET_I(32);
    }}
    testbench__DOT__dut__DOT__pc = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__imm_i_sext = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__imm_s_sext = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__imm_b = VL_RAND_RESET_I(13);
    testbench__DOT__dut__DOT__imm_j = VL_RAND_RESET_I(21);
    testbench__DOT__dut__DOT__alu_eq_zero = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__alu_result = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__alu_eq = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__alu_op_a = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__alu_op_b = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__alu_op = VL_RAND_RESET_I(5);
    testbench__DOT__dut__DOT__regwrite = VL_RAND_RESET_I(1);
    testbench__DOT__dut__DOT__npc = VL_RAND_RESET_I(32);
    testbench__DOT__dut__DOT__rfilewdata = VL_RAND_RESET_I(32);
    __Vchglast__TOP__testbench__DOT__dut__DOT__alu_eq_zero = VL_RAND_RESET_I(1);
    __Vchglast__TOP__testbench__DOT__dut__DOT__alu_result = VL_RAND_RESET_I(32);
    __Vm_traceActivity = 0;
}
