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
    unsigned char t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned char t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;
    static char *nl0[] = {&&LAB11, &&LAB12, &&LAB13, &&LAB14, &&LAB15, &&LAB16};

LAB0:    xsi_set_current_line(64, ng0);
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
LAB3:    t1 = (t0 + 3876);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 3968);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2064U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (char *)((nl0) + t11);
    goto **((char **)t2);

LAB7:    t2 = (t0 + 684U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    goto LAB3;

LAB11:    xsi_set_current_line(67, ng0);
    t7 = (t0 + 776U);
    t8 = *((char **)t7);
    t7 = (t0 + 7479);
    t14 = 1;
    if (16U == 16U)
        goto LAB23;

LAB24:    t14 = 0;

LAB25:    if (t14 == 1)
        goto LAB20;

LAB21:    t18 = (t0 + 776U);
    t19 = *((char **)t18);
    t18 = (t0 + 2156U);
    t20 = *((char **)t18);
    t21 = 1;
    if (16U == 16U)
        goto LAB29;

LAB30:    t21 = 0;

LAB31:    t12 = t21;

LAB22:    if (t12 != 0)
        goto LAB17;

LAB19:    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t29 = (15 - 15);
    t15 = (t29 * -1);
    t22 = (1U * t15);
    t30 = (0 + t22);
    t1 = (t2 + t30);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB35;

LAB36:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 3968);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);

LAB18:    goto LAB10;

LAB12:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 3968);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB13:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 3968);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB14:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 3968);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB15:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 3968);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB16:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 3968);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB17:    xsi_set_current_line(68, ng0);
    t24 = (t0 + 3968);
    t25 = (t24 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = (unsigned char)0;
    xsi_driver_first_trans_fast(t24);
    goto LAB18;

LAB20:    t12 = (unsigned char)1;
    goto LAB22;

LAB23:    t15 = 0;

LAB26:    if (t15 < 16U)
        goto LAB27;
    else
        goto LAB25;

LAB27:    t16 = (t8 + t15);
    t17 = (t7 + t15);
    if (*((unsigned char *)t16) != *((unsigned char *)t17))
        goto LAB24;

LAB28:    t15 = (t15 + 1);
    goto LAB26;

LAB29:    t22 = 0;

LAB32:    if (t22 < 16U)
        goto LAB33;
    else
        goto LAB31;

LAB33:    t18 = (t19 + t22);
    t23 = (t20 + t22);
    if (*((unsigned char *)t18) != *((unsigned char *)t23))
        goto LAB30;

LAB34:    t22 = (t22 + 1);
    goto LAB32;

LAB35:    xsi_set_current_line(70, ng0);
    t5 = (t0 + 3968);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t13 = *((char **)t8);
    *((unsigned char *)t13) = (unsigned char)1;
    xsi_driver_first_trans_fast(t5);
    goto LAB18;

}

static void work_a_3293896773_3572436511_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)5);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 4004);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 3884);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 4004);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3293896773_3572436511_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)1);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t14 = xsi_get_transient_memory(5U);
    memset(t14, 0, 5U);
    t15 = t14;
    memset(t15, (unsigned char)2, 5U);
    t16 = (t0 + 4040);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t14, 5U);
    xsi_driver_first_trans_fast_port(t16);

LAB2:    t21 = (t0 + 3892);
    *((int *)t21) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 776U);
    t5 = *((char **)t1);
    t6 = (15 - 8);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t5 + t8);
    t9 = (t0 + 4040);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 5U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3293896773_3572436511_p_3(char *t0)
{
    char t17[16];
    char t19[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t18;
    char *t20;
    char *t21;
    int t22;
    unsigned int t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)1);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB7:    t29 = xsi_get_transient_memory(5U);
    memset(t29, 0, 5U);
    t30 = t29;
    memset(t30, (unsigned char)2, 5U);
    t31 = (t0 + 4076);
    t32 = (t31 + 32U);
    t33 = *((char **)t32);
    t34 = (t33 + 40U);
    t35 = *((char **)t34);
    memcpy(t35, t29, 5U);
    xsi_driver_first_trans_fast_port(t31);

LAB2:    t36 = (t0 + 3900);
    *((int *)t36) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 776U);
    t5 = *((char **)t1);
    t6 = (9 - 15);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t5 + t9);
    t10 = *((unsigned char *)t1);
    t11 = (t0 + 776U);
    t12 = *((char **)t11);
    t13 = (15 - 3);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t11 = (t12 + t15);
    t18 = ((IEEE_P_2592010699) + 2332);
    t20 = (t19 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 3;
    t21 = (t20 + 4U);
    *((int *)t21) = 0;
    t21 = (t20 + 8U);
    *((int *)t21) = -1;
    t22 = (0 - 3);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t23;
    t16 = xsi_base_array_concat(t16, t17, t18, (char)99, t10, (char)97, t11, t19, (char)101);
    t23 = (1U + 4U);
    t24 = (5U != t23);
    if (t24 == 1)
        goto LAB5;

LAB6:    t21 = (t0 + 4076);
    t25 = (t21 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    memcpy(t28, t16, 5U);
    xsi_driver_first_trans_fast_port(t21);
    goto LAB2;

LAB5:    xsi_size_not_matching(5U, t23, 0);
    goto LAB6;

LAB8:    goto LAB2;

}

static void work_a_3293896773_3572436511_p_4(char *t0)
{
    char t12[16];
    char t14[16];
    char t19[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t13;
    char *t15;
    char *t16;
    int t17;
    unsigned int t18;
    char *t20;
    int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    unsigned char t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)4);
    if (t4 != 0)
        goto LAB3;

LAB4:    t27 = (t0 + 2064U);
    t28 = *((char **)t27);
    t29 = *((unsigned char *)t28);
    t30 = (t29 == (unsigned char)0);
    if (t30 != 0)
        goto LAB7;

LAB8:
LAB2:    t37 = (t0 + 3908);
    *((int *)t37) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 7495);
    t6 = (t0 + 776U);
    t7 = *((char **)t6);
    t8 = (15 - 7);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t6 = (t7 + t10);
    t13 = ((IEEE_P_2592010699) + 2332);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 0;
    t16 = (t15 + 4U);
    *((int *)t16) = 11;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t17 = (11 - 0);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    t16 = (t19 + 0U);
    t20 = (t16 + 0U);
    *((int *)t20) = 7;
    t20 = (t16 + 4U);
    *((int *)t20) = 4;
    t20 = (t16 + 8U);
    *((int *)t20) = -1;
    t21 = (4 - 7);
    t18 = (t21 * -1);
    t18 = (t18 + 1);
    t20 = (t16 + 12U);
    *((unsigned int *)t20) = t18;
    t11 = xsi_base_array_concat(t11, t12, t13, (char)97, t1, t14, (char)97, t6, t19, (char)101);
    t18 = (12U + 4U);
    t22 = (16U != t18);
    if (t22 == 1)
        goto LAB5;

LAB6:    t20 = (t0 + 4112);
    t23 = (t20 + 32U);
    t24 = *((char **)t23);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memcpy(t26, t11, 16U);
    xsi_driver_first_trans_fast_port(t20);
    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t18, 0);
    goto LAB6;

LAB7:    t27 = xsi_get_transient_memory(16U);
    memset(t27, 0, 16U);
    t31 = t27;
    memset(t31, (unsigned char)4, 16U);
    t32 = (t0 + 4112);
    t33 = (t32 + 32U);
    t34 = *((char **)t33);
    t35 = (t34 + 40U);
    t36 = *((char **)t35);
    memcpy(t36, t27, 16U);
    xsi_driver_first_trans_fast_port(t32);
    goto LAB2;

}

static void work_a_3293896773_3572436511_p_5(char *t0)
{
    char t15[16];
    char t17[16];
    char t22[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t23;
    int t24;
    unsigned char t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned char t32;
    unsigned char t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)4);
    if (t4 != 0)
        goto LAB3;

LAB4:    t30 = (t0 + 2064U);
    t31 = *((char **)t30);
    t32 = *((unsigned char *)t31);
    t33 = (t32 == (unsigned char)0);
    if (t33 != 0)
        goto LAB7;

LAB8:
LAB2:    t40 = (t0 + 3916);
    *((int *)t40) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 776U);
    t5 = *((char **)t1);
    t6 = (15 - 11);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t5 + t8);
    t9 = (t0 + 776U);
    t10 = *((char **)t9);
    t11 = (15 - 3);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t9 = (t10 + t13);
    t16 = ((IEEE_P_2592010699) + 2332);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 11;
    t19 = (t18 + 4U);
    *((int *)t19) = 8;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (8 - 11);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t22 + 0U);
    t23 = (t19 + 0U);
    *((int *)t23) = 3;
    t23 = (t19 + 4U);
    *((int *)t23) = 0;
    t23 = (t19 + 8U);
    *((int *)t23) = -1;
    t24 = (0 - 3);
    t21 = (t24 * -1);
    t21 = (t21 + 1);
    t23 = (t19 + 12U);
    *((unsigned int *)t23) = t21;
    t14 = xsi_base_array_concat(t14, t15, t16, (char)97, t1, t17, (char)97, t9, t22, (char)101);
    t21 = (4U + 4U);
    t25 = (8U != t21);
    if (t25 == 1)
        goto LAB5;

LAB6:    t23 = (t0 + 4148);
    t26 = (t23 + 32U);
    t27 = *((char **)t26);
    t28 = (t27 + 40U);
    t29 = *((char **)t28);
    memcpy(t29, t14, 8U);
    xsi_driver_first_trans_fast_port(t23);
    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t21, 0);
    goto LAB6;

LAB7:    t30 = xsi_get_transient_memory(8U);
    memset(t30, 0, 8U);
    t34 = t30;
    memset(t34, (unsigned char)4, 8U);
    t35 = (t0 + 4148);
    t36 = (t35 + 32U);
    t37 = *((char **)t36);
    t38 = (t37 + 40U);
    t39 = *((char **)t38);
    memcpy(t39, t30, 8U);
    xsi_driver_first_trans_fast_port(t35);
    goto LAB2;

}

static void work_a_3293896773_3572436511_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)5);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB2:    t10 = (t0 + 3924);
    *((int *)t10) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 776U);
    t5 = *((char **)t1);
    t1 = (t0 + 4184);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 16U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

}


extern void work_a_3293896773_3572436511_init()
{
	static char *pe[] = {(void *)work_a_3293896773_3572436511_p_0,(void *)work_a_3293896773_3572436511_p_1,(void *)work_a_3293896773_3572436511_p_2,(void *)work_a_3293896773_3572436511_p_3,(void *)work_a_3293896773_3572436511_p_4,(void *)work_a_3293896773_3572436511_p_5,(void *)work_a_3293896773_3572436511_p_6};
	xsi_register_didat("work_a_3293896773_3572436511", "isim/idec_test_isim_beh.exe.sim/work/a_3293896773_3572436511.didat");
	xsi_register_executes(pe);
}
