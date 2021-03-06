// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _TPG_HH_
#define _TPG_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "algo_unpacked_am_bkb.h"
#include "algo_unpacked_mulcud.h"

namespace ap_rtl {

struct TPG : public sc_module {
    // Port declarations 23
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_logic > ap_ce;
    sc_in< sc_lv<14> > data_int_V;
    sc_in< sc_lv<14> > r_0_shift_reg_V_i;
    sc_out< sc_lv<14> > r_0_shift_reg_V_o;
    sc_out< sc_logic > r_0_shift_reg_V_o_ap_vld;
    sc_in< sc_lv<14> > r_1_shift_reg_V_i;
    sc_out< sc_lv<14> > r_1_shift_reg_V_o;
    sc_out< sc_logic > r_1_shift_reg_V_o_ap_vld;
    sc_in< sc_lv<14> > r_2_shift_reg_V_i;
    sc_out< sc_lv<14> > r_2_shift_reg_V_o;
    sc_out< sc_logic > r_2_shift_reg_V_o_ap_vld;
    sc_in< sc_lv<14> > r_3_shift_reg_V_i;
    sc_out< sc_lv<14> > r_3_shift_reg_V_o;
    sc_out< sc_logic > r_3_shift_reg_V_o_ap_vld;
    sc_in< sc_lv<19> > r_0_peak_reg_V_read;
    sc_out< sc_lv<16> > ap_return_0;
    sc_out< sc_lv<19> > ap_return_1;


    // Module declarations
    TPG(sc_module_name name);
    SC_HAS_PROCESS(TPG);

    ~TPG();

    sc_trace_file* mVcdFile;

    algo_unpacked_am_bkb<1,1,8,12,9,21>* algo_unpacked_am_bkb_U1;
    algo_unpacked_mulcud<1,1,7,18,25>* algo_unpacked_mulcud_U2;
    sc_signal< sc_lv<1> > ap_CS_fsm;
    sc_signal< sc_lv<1> > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_lv<19> > r_0_peak_reg_V_read_1_reg_460;
    sc_signal< sc_lv<19> > ap_pipeline_reg_pp0_iter1_r_0_peak_reg_V_read_1_reg_460;
    sc_signal< sc_lv<14> > tmp_s_reg_467;
    sc_signal< sc_lv<14> > r_3_shift_reg_V_rea_reg_473;
    sc_signal< sc_lv<14> > r_0_shift_reg_V_rea_reg_479;
    sc_signal< sc_lv<19> > mul_V_reg_485;
    sc_signal< sc_lv<12> > tmp_6_reg_490;
    sc_signal< sc_lv<1> > icmp_fu_210_p2;
    sc_signal< sc_lv<1> > icmp_reg_495;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter1_icmp_reg_495;
    sc_signal< sc_lv<19> > r_0_peak_reg_V_writ_fu_388_p2;
    sc_signal< sc_lv<19> > r_0_peak_reg_V_writ_reg_500;
    sc_signal< sc_lv<12> > uncorrectedADC_V_fu_155_p1;
    sc_signal< sc_lv<21> > grp_fu_444_p3;
    sc_signal< sc_lv<18> > extLd3_fu_173_p1;
    sc_signal< sc_lv<25> > r_V_4_fu_453_p2;
    sc_signal< sc_lv<7> > tmp_15_fu_200_p4;
    sc_signal< sc_lv<19> > tmp_11_fu_219_p3;
    sc_signal< sc_lv<23> > p_shl_fu_226_p1;
    sc_signal< sc_lv<24> > p_shl_cast_fu_230_p1;
    sc_signal< sc_lv<24> > p_neg_fu_234_p2;
    sc_signal< sc_lv<16> > tmp_14_fu_244_p3;
    sc_signal< sc_lv<20> > p_shl1_fu_251_p1;
    sc_signal< sc_lv<25> > p_neg_cast_fu_240_p1;
    sc_signal< sc_lv<25> > p_shl1_cast_fu_255_p1;
    sc_signal< sc_lv<25> > r_V_2_fu_259_p2;
    sc_signal< sc_lv<16> > tmp_7_fu_275_p1;
    sc_signal< sc_lv<18> > extLd_fu_216_p1;
    sc_signal< sc_lv<19> > tmp_fu_286_p3;
    sc_signal< sc_lv<23> > p_shl2_fu_293_p1;
    sc_signal< sc_lv<24> > p_shl2_cast_fu_297_p1;
    sc_signal< sc_lv<24> > lhs_V_4_2_cast7_fu_282_p1;
    sc_signal< sc_lv<24> > r_V_4_2_fu_301_p2;
    sc_signal< sc_lv<18> > tmp_9_fu_307_p4;
    sc_signal< sc_lv<19> > tmp_4_fu_321_p3;
    sc_signal< sc_lv<23> > p_shl3_fu_328_p1;
    sc_signal< sc_lv<17> > tmp_5_fu_336_p3;
    sc_signal< sc_lv<21> > p_shl4_fu_343_p1;
    sc_signal< sc_lv<24> > p_shl3_cast_fu_332_p1;
    sc_signal< sc_lv<24> > p_shl4_cast_fu_347_p1;
    sc_signal< sc_lv<24> > r_V_4_3_fu_351_p2;
    sc_signal< sc_lv<18> > tmp_12_fu_357_p4;
    sc_signal< sc_lv<19> > tmp_22_1_cast_fu_278_p1;
    sc_signal< sc_lv<19> > tmp_10_fu_317_p1;
    sc_signal< sc_lv<19> > tmp_529_fu_265_p4;
    sc_signal< sc_lv<19> > tmp_13_fu_367_p1;
    sc_signal< sc_lv<19> > tmp5_fu_377_p2;
    sc_signal< sc_lv<19> > tmp4_fu_383_p2;
    sc_signal< sc_lv<19> > tmp3_fu_371_p2;
    sc_signal< sc_lv<1> > tmp_1_fu_394_p2;
    sc_signal< sc_lv<1> > tmp_2_fu_398_p2;
    sc_signal< sc_lv<16> > tmp_8_fu_409_p4;
    sc_signal< sc_lv<1> > or_cond_fu_403_p2;
    sc_signal< sc_lv<16> > tmpPeak_V_fu_418_p3;
    sc_signal< sc_lv<16> > agg_result_V_1_fu_425_p3;
    sc_signal< sc_lv<8> > grp_fu_444_p0;
    sc_signal< sc_lv<12> > grp_fu_444_p1;
    sc_signal< sc_lv<9> > grp_fu_444_p2;
    sc_signal< sc_lv<7> > r_V_4_fu_453_p0;
    sc_signal< sc_lv<18> > r_V_4_fu_453_p1;
    sc_signal< sc_lv<1> > ap_NS_fsm;
    sc_signal< sc_logic > ap_pipeline_idle_pp0;
    sc_signal< sc_logic > ap_pipeline_start_pp0;
    sc_signal< sc_lv<13> > grp_fu_444_p10;
    sc_signal< sc_lv<25> > r_V_4_fu_453_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<1> ap_ST_fsm_pp0_stage0;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<24> ap_const_lv24_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<19> ap_const_lv19_0;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<16> ap_const_lv16_3FF;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<13> ap_const_lv13_1F96;
    static const sc_lv<21> ap_const_lv21_B7;
    static const sc_lv<25> ap_const_lv25_1FFFFDD;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_agg_result_V_1_fu_425_p3();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_done();
    void thread_ap_enable_reg_pp0_iter0();
    void thread_ap_idle();
    void thread_ap_pipeline_idle_pp0();
    void thread_ap_pipeline_start_pp0();
    void thread_ap_ready();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_extLd3_fu_173_p1();
    void thread_extLd_fu_216_p1();
    void thread_grp_fu_444_p0();
    void thread_grp_fu_444_p1();
    void thread_grp_fu_444_p10();
    void thread_grp_fu_444_p2();
    void thread_icmp_fu_210_p2();
    void thread_lhs_V_4_2_cast7_fu_282_p1();
    void thread_or_cond_fu_403_p2();
    void thread_p_neg_cast_fu_240_p1();
    void thread_p_neg_fu_234_p2();
    void thread_p_shl1_cast_fu_255_p1();
    void thread_p_shl1_fu_251_p1();
    void thread_p_shl2_cast_fu_297_p1();
    void thread_p_shl2_fu_293_p1();
    void thread_p_shl3_cast_fu_332_p1();
    void thread_p_shl3_fu_328_p1();
    void thread_p_shl4_cast_fu_347_p1();
    void thread_p_shl4_fu_343_p1();
    void thread_p_shl_cast_fu_230_p1();
    void thread_p_shl_fu_226_p1();
    void thread_r_0_peak_reg_V_writ_fu_388_p2();
    void thread_r_0_shift_reg_V_o();
    void thread_r_0_shift_reg_V_o_ap_vld();
    void thread_r_1_shift_reg_V_o();
    void thread_r_1_shift_reg_V_o_ap_vld();
    void thread_r_2_shift_reg_V_o();
    void thread_r_2_shift_reg_V_o_ap_vld();
    void thread_r_3_shift_reg_V_o();
    void thread_r_3_shift_reg_V_o_ap_vld();
    void thread_r_V_2_fu_259_p2();
    void thread_r_V_4_2_fu_301_p2();
    void thread_r_V_4_3_fu_351_p2();
    void thread_r_V_4_fu_453_p0();
    void thread_r_V_4_fu_453_p1();
    void thread_r_V_4_fu_453_p10();
    void thread_tmp3_fu_371_p2();
    void thread_tmp4_fu_383_p2();
    void thread_tmp5_fu_377_p2();
    void thread_tmpPeak_V_fu_418_p3();
    void thread_tmp_10_fu_317_p1();
    void thread_tmp_11_fu_219_p3();
    void thread_tmp_12_fu_357_p4();
    void thread_tmp_13_fu_367_p1();
    void thread_tmp_14_fu_244_p3();
    void thread_tmp_15_fu_200_p4();
    void thread_tmp_1_fu_394_p2();
    void thread_tmp_22_1_cast_fu_278_p1();
    void thread_tmp_2_fu_398_p2();
    void thread_tmp_4_fu_321_p3();
    void thread_tmp_529_fu_265_p4();
    void thread_tmp_5_fu_336_p3();
    void thread_tmp_7_fu_275_p1();
    void thread_tmp_8_fu_409_p4();
    void thread_tmp_9_fu_307_p4();
    void thread_tmp_fu_286_p3();
    void thread_uncorrectedADC_V_fu_155_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
