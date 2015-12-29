/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Piotr/workspace/vlsi/vlsi_mcu/VLSI_MCU/instruction_decoder.vhd";
extern char *IEEE_P_2592010699;



static void work_a_3293896773_3572436511_p_0(char *t0)
{
    char t19[16];
    char t20[16];
    char t22[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t21;
    int t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;

LAB0:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 660U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 3012);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 3056);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3092);
    t6 = (t2 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t1 = (t0 + 6299);
    t3 = 1;
    if (16U == 16U)
        goto LAB13;

LAB14:    t3 = 0;

LAB15:    if (t3 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t16 = (15 - 15);
    t12 = (t16 * -1);
    t17 = (1U * t12);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB19;

LAB20:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 3164);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 3128);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(97, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t12 = (15 - 13);
    t17 = (t12 * 1U);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t5 = (t0 + 3308);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t11 = *((char **)t8);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t16 = (14 - 15);
    t12 = (t16 * -1);
    t17 = (1U * t12);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB28;

LAB30:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t12 = (15 - 7);
    t17 = (t12 * 1U);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t6 = ((IEEE_P_2592010699) + 2332);
    t7 = (t20 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 7;
    t8 = (t7 + 4U);
    *((int *)t8) = 4;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t16 = (4 - 7);
    t21 = (t16 * -1);
    t21 = (t21 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t21;
    t5 = xsi_base_array_concat(t5, t19, t6, (char)99, (unsigned char)3, (char)97, t1, t20, (char)101);
    t21 = (1U + 4U);
    t3 = (5U != t21);
    if (t3 == 1)
        goto LAB35;

LAB36:    t8 = (t0 + 3344);
    t11 = (t8 + 32U);
    t13 = *((char **)t11);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t5, 5U);
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(108, ng0);
    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t2 = t1;
    memset(t2, (unsigned char)4, 5U);
    t5 = (t0 + 3380);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t11 = *((char **)t8);
    memcpy(t11, t1, 5U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(109, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t12 = (15 - 11);
    t17 = (t12 * 1U);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t5 = (t0 + 776U);
    t6 = *((char **)t5);
    t21 = (15 - 3);
    t27 = (t21 * 1U);
    t28 = (0 + t27);
    t5 = (t6 + t28);
    t8 = ((IEEE_P_2592010699) + 2332);
    t11 = (t20 + 0U);
    t13 = (t11 + 0U);
    *((int *)t13) = 11;
    t13 = (t11 + 4U);
    *((int *)t13) = 8;
    t13 = (t11 + 8U);
    *((int *)t13) = -1;
    t16 = (8 - 11);
    t29 = (t16 * -1);
    t29 = (t29 + 1);
    t13 = (t11 + 12U);
    *((unsigned int *)t13) = t29;
    t13 = (t22 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 3;
    t14 = (t13 + 4U);
    *((int *)t14) = 0;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t23 = (0 - 3);
    t29 = (t23 * -1);
    t29 = (t29 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t29;
    t7 = xsi_base_array_concat(t7, t19, t8, (char)97, t1, t20, (char)97, t5, t22, (char)101);
    t29 = (4U + 4U);
    t3 = (8U != t29);
    if (t3 == 1)
        goto LAB37;

LAB38:    t14 = (t0 + 3416);
    t15 = (t14 + 32U);
    t24 = *((char **)t15);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memcpy(t26, t7, 8U);
    xsi_driver_first_trans_fast_port(t14);
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 3200);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(111, ng0);
    t1 = (t0 + 6338);
    t5 = (t0 + 776U);
    t6 = *((char **)t5);
    t12 = (15 - 7);
    t17 = (t12 * 1U);
    t18 = (0 + t17);
    t5 = (t6 + t18);
    t8 = ((IEEE_P_2592010699) + 2332);
    t11 = (t20 + 0U);
    t13 = (t11 + 0U);
    *((int *)t13) = 0;
    t13 = (t11 + 4U);
    *((int *)t13) = 11;
    t13 = (t11 + 8U);
    *((int *)t13) = 1;
    t16 = (11 - 0);
    t21 = (t16 * 1);
    t21 = (t21 + 1);
    t13 = (t11 + 12U);
    *((unsigned int *)t13) = t21;
    t13 = (t22 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 7;
    t14 = (t13 + 4U);
    *((int *)t14) = 4;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t23 = (4 - 7);
    t21 = (t23 * -1);
    t21 = (t21 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t21;
    t7 = xsi_base_array_concat(t7, t19, t8, (char)97, t1, t20, (char)97, t5, t22, (char)101);
    t21 = (12U + 4U);
    t3 = (16U != t21);
    if (t3 == 1)
        goto LAB39;

LAB40:    t14 = (t0 + 3236);
    t15 = (t14 + 32U);
    t24 = *((char **)t15);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memcpy(t26, t7, 16U);
    xsi_driver_first_trans_fast_port(t14);

LAB29:
LAB11:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 2156U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3056);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB7:    t2 = (t0 + 684U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(83, ng0);
    t8 = (t0 + 3128);
    t11 = (t8 + 32U);
    t13 = *((char **)t11);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB11;

LAB13:    t12 = 0;

LAB16:    if (t12 < 16U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t6 = (t2 + t12);
    t7 = (t1 + t12);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB14;

LAB18:    t12 = (t12 + 1);
    goto LAB16;

LAB19:    xsi_set_current_line(86, ng0);
    t5 = (t0 + 3164);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t16 = (13 - 15);
    t12 = (t16 * -1);
    t17 = (1U * t12);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB21;

LAB23:
LAB22:    goto LAB11;

LAB21:    xsi_set_current_line(88, ng0);
    t5 = (t0 + 3200);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 3128);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(90, ng0);
    t1 = (t0 + 6315);
    t5 = (t0 + 776U);
    t6 = *((char **)t5);
    t12 = (15 - 7);
    t17 = (t12 * 1U);
    t18 = (0 + t17);
    t5 = (t6 + t18);
    t8 = ((IEEE_P_2592010699) + 2332);
    t11 = (t20 + 0U);
    t13 = (t11 + 0U);
    *((int *)t13) = 0;
    t13 = (t11 + 4U);
    *((int *)t13) = 11;
    t13 = (t11 + 8U);
    *((int *)t13) = 1;
    t16 = (11 - 0);
    t21 = (t16 * 1);
    t21 = (t21 + 1);
    t13 = (t11 + 12U);
    *((unsigned int *)t13) = t21;
    t13 = (t22 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 7;
    t14 = (t13 + 4U);
    *((int *)t14) = 4;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t23 = (4 - 7);
    t21 = (t23 * -1);
    t21 = (t21 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t21;
    t7 = xsi_base_array_concat(t7, t19, t8, (char)97, t1, t20, (char)97, t5, t22, (char)101);
    t21 = (12U + 4U);
    t3 = (16U != t21);
    if (t3 == 1)
        goto LAB24;

LAB25:    t14 = (t0 + 3236);
    t15 = (t14 + 32U);
    t24 = *((char **)t15);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memcpy(t26, t7, 16U);
    xsi_driver_first_trans_fast_port(t14);
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t12 = (15 - 11);
    t17 = (t12 * 1U);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t5 = (t0 + 776U);
    t6 = *((char **)t5);
    t21 = (15 - 3);
    t27 = (t21 * 1U);
    t28 = (0 + t27);
    t5 = (t6 + t28);
    t8 = ((IEEE_P_2592010699) + 2332);
    t11 = (t20 + 0U);
    t13 = (t11 + 0U);
    *((int *)t13) = 11;
    t13 = (t11 + 4U);
    *((int *)t13) = 8;
    t13 = (t11 + 8U);
    *((int *)t13) = -1;
    t16 = (8 - 11);
    t29 = (t16 * -1);
    t29 = (t29 + 1);
    t13 = (t11 + 12U);
    *((unsigned int *)t13) = t29;
    t13 = (t22 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 3;
    t14 = (t13 + 4U);
    *((int *)t14) = 0;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t23 = (0 - 3);
    t29 = (t23 * -1);
    t29 = (t29 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t29;
    t7 = xsi_base_array_concat(t7, t19, t8, (char)97, t1, t20, (char)97, t5, t22, (char)101);
    t29 = (4U + 4U);
    t3 = (8U != t29);
    if (t3 == 1)
        goto LAB26;

LAB27:    t14 = (t0 + 3272);
    t15 = (t14 + 32U);
    t24 = *((char **)t15);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memcpy(t26, t7, 8U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB22;

LAB24:    xsi_size_not_matching(16U, t21, 0);
    goto LAB25;

LAB26:    xsi_size_not_matching(8U, t29, 0);
    goto LAB27;

LAB28:    xsi_set_current_line(100, ng0);
    t5 = (t0 + 776U);
    t6 = *((char **)t5);
    t21 = (15 - 8);
    t27 = (t21 * 1U);
    t28 = (0 + t27);
    t5 = (t6 + t28);
    t7 = (t0 + 3344);
    t8 = (t7 + 32U);
    t11 = *((char **)t8);
    t13 = (t11 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t5, 5U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t16 = (9 - 15);
    t12 = (t16 * -1);
    t17 = (1U * t12);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 776U);
    t6 = *((char **)t5);
    t21 = (15 - 3);
    t27 = (t21 * 1U);
    t28 = (0 + t27);
    t5 = (t6 + t28);
    t8 = ((IEEE_P_2592010699) + 2332);
    t11 = (t20 + 0U);
    t13 = (t11 + 0U);
    *((int *)t13) = 3;
    t13 = (t11 + 4U);
    *((int *)t13) = 0;
    t13 = (t11 + 8U);
    *((int *)t13) = -1;
    t23 = (0 - 3);
    t29 = (t23 * -1);
    t29 = (t29 + 1);
    t13 = (t11 + 12U);
    *((unsigned int *)t13) = t29;
    t7 = xsi_base_array_concat(t7, t19, t8, (char)99, t3, (char)97, t5, t20, (char)101);
    t29 = (1U + 4U);
    t4 = (5U != t29);
    if (t4 == 1)
        goto LAB31;

LAB32:    t13 = (t0 + 3380);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t24 = (t15 + 40U);
    t25 = *((char **)t24);
    memcpy(t25, t7, 5U);
    xsi_driver_first_trans_fast_port(t13);
    xsi_set_current_line(102, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)4, 8U);
    t5 = (t0 + 3416);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t11 = *((char **)t8);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(103, ng0);
    t1 = (t0 + 3200);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(104, ng0);
    t1 = (t0 + 6327);
    t5 = (t0 + 776U);
    t6 = *((char **)t5);
    t12 = (15 - 8);
    t17 = (t12 * 1U);
    t18 = (0 + t17);
    t5 = (t6 + t18);
    t8 = ((IEEE_P_2592010699) + 2332);
    t11 = (t20 + 0U);
    t13 = (t11 + 0U);
    *((int *)t13) = 0;
    t13 = (t11 + 4U);
    *((int *)t13) = 10;
    t13 = (t11 + 8U);
    *((int *)t13) = 1;
    t16 = (10 - 0);
    t21 = (t16 * 1);
    t21 = (t21 + 1);
    t13 = (t11 + 12U);
    *((unsigned int *)t13) = t21;
    t13 = (t22 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 8;
    t14 = (t13 + 4U);
    *((int *)t14) = 4;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t23 = (4 - 8);
    t21 = (t23 * -1);
    t21 = (t21 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t21;
    t7 = xsi_base_array_concat(t7, t19, t8, (char)97, t1, t20, (char)97, t5, t22, (char)101);
    t21 = (11U + 5U);
    t3 = (16U != t21);
    if (t3 == 1)
        goto LAB33;

LAB34:    t14 = (t0 + 3236);
    t15 = (t14 + 32U);
    t24 = *((char **)t15);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memcpy(t26, t7, 16U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB29;

LAB31:    xsi_size_not_matching(5U, t29, 0);
    goto LAB32;

LAB33:    xsi_size_not_matching(16U, t21, 0);
    goto LAB34;

LAB35:    xsi_size_not_matching(5U, t21, 0);
    goto LAB36;

LAB37:    xsi_size_not_matching(8U, t29, 0);
    goto LAB38;

LAB39:    xsi_size_not_matching(16U, t21, 0);
    goto LAB40;

}


extern void work_a_3293896773_3572436511_init()
{
	static char *pe[] = {(void *)work_a_3293896773_3572436511_p_0};
	xsi_register_didat("work_a_3293896773_3572436511", "isim/CPU_tb_isim_beh.exe.sim/work/a_3293896773_3572436511.didat");
	xsi_register_executes(pe);
}
