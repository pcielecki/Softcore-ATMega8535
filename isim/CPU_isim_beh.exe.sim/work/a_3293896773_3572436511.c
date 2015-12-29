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

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


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
    char *t12;
    char *t13;
    unsigned int t14;
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

LAB0:    xsi_set_current_line(70, ng0);
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
LAB3:    t1 = (t0 + 3064);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 3116);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(73, ng0);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t6 = t2;
    memset(t6, (unsigned char)4, 8U);
    t7 = (t0 + 3152);
    t8 = (t7 + 32U);
    t11 = *((char **)t8);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(74, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    memset(t2, (unsigned char)4, 16U);
    t5 = (t0 + 3188);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t11 = *((char **)t8);
    memcpy(t11, t1, 16U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(75, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)4, 8U);
    t5 = (t0 + 3224);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t11 = *((char **)t8);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 3260);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 3296);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 3332);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)6;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 3116);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t1 = (t0 + 6343);
    t3 = 1;
    if (16U == 16U)
        goto LAB13;

LAB14:    t3 = 0;

LAB15:    if (t3 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t16 = (15 - 15);
    t14 = (t16 * -1);
    t17 = (1U * t14);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB19;

LAB20:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 3116);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 3332);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t16 = (14 - 15);
    t14 = (t16 * -1);
    t17 = (1U * t14);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB28;

LAB30:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t14 = (15 - 7);
    t17 = (t14 * 1U);
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

LAB36:    t8 = (t0 + 3368);
    t11 = (t8 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t15 = *((char **)t13);
    memcpy(t15, t5, 5U);
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(104, ng0);
    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t2 = t1;
    memset(t2, (unsigned char)4, 5U);
    t5 = (t0 + 3404);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t11 = *((char **)t8);
    memcpy(t11, t1, 5U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t14 = (15 - 11);
    t17 = (t14 * 1U);
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
    t12 = (t11 + 0U);
    *((int *)t12) = 11;
    t12 = (t11 + 4U);
    *((int *)t12) = 8;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t16 = (8 - 11);
    t29 = (t16 * -1);
    t29 = (t29 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t29;
    t12 = (t22 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 3;
    t13 = (t12 + 4U);
    *((int *)t13) = 0;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t23 = (0 - 3);
    t29 = (t23 * -1);
    t29 = (t29 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t29;
    t7 = xsi_base_array_concat(t7, t19, t8, (char)97, t1, t20, (char)97, t5, t22, (char)101);
    t29 = (4U + 4U);
    t3 = (8U != t29);
    if (t3 == 1)
        goto LAB37;

LAB38:    t13 = (t0 + 3224);
    t15 = (t13 + 32U);
    t24 = *((char **)t15);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memcpy(t26, t7, 8U);
    xsi_driver_first_trans_fast_port(t13);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 3296);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 6382);
    t5 = (t0 + 776U);
    t6 = *((char **)t5);
    t14 = (15 - 7);
    t17 = (t14 * 1U);
    t18 = (0 + t17);
    t5 = (t6 + t18);
    t8 = ((IEEE_P_2592010699) + 2332);
    t11 = (t20 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 11;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t16 = (11 - 0);
    t21 = (t16 * 1);
    t21 = (t21 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t21;
    t12 = (t22 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 7;
    t13 = (t12 + 4U);
    *((int *)t13) = 4;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t23 = (4 - 7);
    t21 = (t23 * -1);
    t21 = (t21 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t21;
    t7 = xsi_base_array_concat(t7, t19, t8, (char)97, t1, t20, (char)97, t5, t22, (char)101);
    t21 = (12U + 4U);
    t3 = (16U != t21);
    if (t3 == 1)
        goto LAB39;

LAB40:    t13 = (t0 + 3188);
    t15 = (t13 + 32U);
    t24 = *((char **)t15);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memcpy(t26, t7, 16U);
    xsi_driver_first_trans_fast_port(t13);

LAB29:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 684U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(80, ng0);
    t8 = (t0 + 3332);
    t11 = (t8 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t15 = *((char **)t13);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB11;

LAB13:    t14 = 0;

LAB16:    if (t14 < 16U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t6 = (t2 + t14);
    t7 = (t1 + t14);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB14;

LAB18:    t14 = (t14 + 1);
    goto LAB16;

LAB19:    xsi_set_current_line(83, ng0);
    t5 = (t0 + 3116);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t16 = (13 - 15);
    t14 = (t16 * -1);
    t17 = (1U * t14);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB21;

LAB23:
LAB22:    goto LAB11;

LAB21:    xsi_set_current_line(85, ng0);
    t5 = (t0 + 3296);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 3332);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 6359);
    t5 = (t0 + 776U);
    t6 = *((char **)t5);
    t14 = (15 - 7);
    t17 = (t14 * 1U);
    t18 = (0 + t17);
    t5 = (t6 + t18);
    t8 = ((IEEE_P_2592010699) + 2332);
    t11 = (t20 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 11;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t16 = (11 - 0);
    t21 = (t16 * 1);
    t21 = (t21 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t21;
    t12 = (t22 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 7;
    t13 = (t12 + 4U);
    *((int *)t13) = 4;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t23 = (4 - 7);
    t21 = (t23 * -1);
    t21 = (t21 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t21;
    t7 = xsi_base_array_concat(t7, t19, t8, (char)97, t1, t20, (char)97, t5, t22, (char)101);
    t21 = (12U + 4U);
    t3 = (16U != t21);
    if (t3 == 1)
        goto LAB24;

LAB25:    t13 = (t0 + 3188);
    t15 = (t13 + 32U);
    t24 = *((char **)t15);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memcpy(t26, t7, 16U);
    xsi_driver_first_trans_fast_port(t13);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t14 = (15 - 11);
    t17 = (t14 * 1U);
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
    t12 = (t11 + 0U);
    *((int *)t12) = 11;
    t12 = (t11 + 4U);
    *((int *)t12) = 8;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t16 = (8 - 11);
    t29 = (t16 * -1);
    t29 = (t29 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t29;
    t12 = (t22 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 3;
    t13 = (t12 + 4U);
    *((int *)t13) = 0;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t23 = (0 - 3);
    t29 = (t23 * -1);
    t29 = (t29 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t29;
    t7 = xsi_base_array_concat(t7, t19, t8, (char)97, t1, t20, (char)97, t5, t22, (char)101);
    t29 = (4U + 4U);
    t3 = (8U != t29);
    if (t3 == 1)
        goto LAB26;

LAB27:    t13 = (t0 + 3152);
    t15 = (t13 + 32U);
    t24 = *((char **)t15);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memcpy(t26, t7, 8U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB22;

LAB24:    xsi_size_not_matching(16U, t21, 0);
    goto LAB25;

LAB26:    xsi_size_not_matching(8U, t29, 0);
    goto LAB27;

LAB28:    xsi_set_current_line(97, ng0);
    t5 = (t0 + 776U);
    t6 = *((char **)t5);
    t21 = (15 - 8);
    t27 = (t21 * 1U);
    t28 = (0 + t27);
    t5 = (t6 + t28);
    t7 = (t0 + 3368);
    t8 = (t7 + 32U);
    t11 = *((char **)t8);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 5U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t16 = (9 - 15);
    t14 = (t16 * -1);
    t17 = (1U * t14);
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
    t12 = (t11 + 0U);
    *((int *)t12) = 3;
    t12 = (t11 + 4U);
    *((int *)t12) = 0;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t23 = (0 - 3);
    t29 = (t23 * -1);
    t29 = (t29 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t29;
    t7 = xsi_base_array_concat(t7, t19, t8, (char)99, t3, (char)97, t5, t20, (char)101);
    t29 = (1U + 4U);
    t4 = (5U != t29);
    if (t4 == 1)
        goto LAB31;

LAB32:    t12 = (t0 + 3404);
    t13 = (t12 + 32U);
    t15 = *((char **)t13);
    t24 = (t15 + 40U);
    t25 = *((char **)t24);
    memcpy(t25, t7, 5U);
    xsi_driver_first_trans_fast_port(t12);
    xsi_set_current_line(99, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)4, 8U);
    t5 = (t0 + 3224);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t11 = *((char **)t8);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 6371);
    t5 = (t0 + 776U);
    t6 = *((char **)t5);
    t14 = (15 - 8);
    t17 = (t14 * 1U);
    t18 = (0 + t17);
    t5 = (t6 + t18);
    t8 = ((IEEE_P_2592010699) + 2332);
    t11 = (t20 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 10;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t16 = (10 - 0);
    t21 = (t16 * 1);
    t21 = (t21 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t21;
    t12 = (t22 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 8;
    t13 = (t12 + 4U);
    *((int *)t13) = 4;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t23 = (4 - 8);
    t21 = (t23 * -1);
    t21 = (t21 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t21;
    t7 = xsi_base_array_concat(t7, t19, t8, (char)97, t1, t20, (char)97, t5, t22, (char)101);
    t21 = (11U + 5U);
    t3 = (16U != t21);
    if (t3 == 1)
        goto LAB33;

LAB34:    t13 = (t0 + 3188);
    t15 = (t13 + 32U);
    t24 = *((char **)t15);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memcpy(t26, t7, 16U);
    xsi_driver_first_trans_fast_port(t13);
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

static void work_a_3293896773_3572436511_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(66, ng0);

LAB3:    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t3 = (15 - 15);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t7);
    t9 = (t0 + 3440);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t8;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 3072);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3293896773_3572436511_init()
{
	static char *pe[] = {(void *)work_a_3293896773_3572436511_p_0,(void *)work_a_3293896773_3572436511_p_1};
	xsi_register_didat("work_a_3293896773_3572436511", "isim/CPU_isim_beh.exe.sim/work/a_3293896773_3572436511.didat");
	xsi_register_executes(pe);
}
