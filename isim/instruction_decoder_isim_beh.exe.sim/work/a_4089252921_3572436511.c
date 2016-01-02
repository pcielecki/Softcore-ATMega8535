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



static void work_a_4089252921_3572436511_p_0(char *t0)
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
    static char *nl0[] = {&&LAB11, &&LAB12, &&LAB13, &&LAB14, &&LAB15};

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
LAB3:    t1 = (t0 + 5188);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 5312);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(72, ng0);
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

LAB11:    xsi_set_current_line(73, ng0);
    t7 = (t0 + 776U);
    t8 = *((char **)t7);
    t7 = (t0 + 10084);
    t14 = 1;
    if (16U == 16U)
        goto LAB22;

LAB23:    t14 = 0;

LAB24:    if (t14 == 1)
        goto LAB19;

LAB20:    t18 = (t0 + 776U);
    t19 = *((char **)t18);
    t18 = (t0 + 2800U);
    t20 = *((char **)t18);
    t21 = 1;
    if (16U == 16U)
        goto LAB28;

LAB29:    t21 = 0;

LAB30:    t12 = t21;

LAB21:    if (t12 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 5312);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB17:    goto LAB10;

LAB12:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 5312);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB13:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 5312);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB14:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 5312);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB15:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 5312);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB16:    xsi_set_current_line(74, ng0);
    t24 = (t0 + 5312);
    t25 = (t24 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = (unsigned char)0;
    xsi_driver_first_trans_fast(t24);
    goto LAB17;

LAB19:    t12 = (unsigned char)1;
    goto LAB21;

LAB22:    t15 = 0;

LAB25:    if (t15 < 16U)
        goto LAB26;
    else
        goto LAB24;

LAB26:    t16 = (t8 + t15);
    t17 = (t7 + t15);
    if (*((unsigned char *)t16) != *((unsigned char *)t17))
        goto LAB23;

LAB27:    t15 = (t15 + 1);
    goto LAB25;

LAB28:    t22 = 0;

LAB31:    if (t22 < 16U)
        goto LAB32;
    else
        goto LAB30;

LAB32:    t18 = (t19 + t22);
    t23 = (t20 + t22);
    if (*((unsigned char *)t18) != *((unsigned char *)t23))
        goto LAB29;

LAB33:    t22 = (t22 + 1);
    goto LAB31;

}

static void work_a_4089252921_3572436511_p_1(char *t0)
{
    char t32[16];
    char t34[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned char t25;
    unsigned char t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t33;
    char *t35;
    char *t36;
    int t37;
    unsigned int t38;
    unsigned char t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;

LAB0:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2064U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)1);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t23 = (t0 + 2064U);
    t24 = *((char **)t23);
    t25 = *((unsigned char *)t24);
    t26 = (t25 == (unsigned char)1);
    if (t26 != 0)
        goto LAB8;

LAB9:
LAB2:    t44 = (t0 + 5196);
    *((int *)t44) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 776U);
    t14 = *((char **)t13);
    t15 = (15 - 8);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t13 = (t14 + t17);
    t18 = (t0 + 5348);
    t19 = (t18 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    memcpy(t22, t13, 5U);
    xsi_driver_first_trans_fast(t18);
    goto LAB2;

LAB5:    t2 = (t0 + 776U);
    t6 = *((char **)t2);
    t7 = (13 - 15);
    t8 = (t7 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t2 = (t6 + t10);
    t11 = *((unsigned char *)t2);
    t12 = (t11 == (unsigned char)2);
    t1 = t12;
    goto LAB7;

LAB8:    t23 = (t0 + 776U);
    t27 = *((char **)t23);
    t28 = (15 - 7);
    t29 = (t28 * 1U);
    t30 = (0 + t29);
    t23 = (t27 + t30);
    t33 = ((IEEE_P_2592010699) + 2332);
    t35 = (t34 + 0U);
    t36 = (t35 + 0U);
    *((int *)t36) = 7;
    t36 = (t35 + 4U);
    *((int *)t36) = 4;
    t36 = (t35 + 8U);
    *((int *)t36) = -1;
    t37 = (4 - 7);
    t38 = (t37 * -1);
    t38 = (t38 + 1);
    t36 = (t35 + 12U);
    *((unsigned int *)t36) = t38;
    t31 = xsi_base_array_concat(t31, t32, t33, (char)99, (unsigned char)3, (char)97, t23, t34, (char)101);
    t38 = (1U + 4U);
    t39 = (5U != t38);
    if (t39 == 1)
        goto LAB10;

LAB11:    t36 = (t0 + 5348);
    t40 = (t36 + 32U);
    t41 = *((char **)t40);
    t42 = (t41 + 40U);
    t43 = *((char **)t42);
    memcpy(t43, t31, 5U);
    xsi_driver_first_trans_fast(t36);
    goto LAB2;

LAB10:    xsi_size_not_matching(5U, t38, 0);
    goto LAB11;

}

static void work_a_4089252921_3572436511_p_2(char *t0)
{
    char t26[16];
    char t28[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t27;
    char *t29;
    char *t30;
    int t31;
    unsigned int t32;
    unsigned char t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2064U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)1);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB2:    t38 = (t0 + 5204);
    *((int *)t38) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 776U);
    t14 = *((char **)t13);
    t15 = (9 - 15);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t13 = (t14 + t18);
    t19 = *((unsigned char *)t13);
    t20 = (t0 + 776U);
    t21 = *((char **)t20);
    t22 = (15 - 3);
    t23 = (t22 * 1U);
    t24 = (0 + t23);
    t20 = (t21 + t24);
    t27 = ((IEEE_P_2592010699) + 2332);
    t29 = (t28 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 3;
    t30 = (t29 + 4U);
    *((int *)t30) = 0;
    t30 = (t29 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - 3);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t32;
    t25 = xsi_base_array_concat(t25, t26, t27, (char)99, t19, (char)97, t20, t28, (char)101);
    t32 = (1U + 4U);
    t33 = (5U != t32);
    if (t33 == 1)
        goto LAB8;

LAB9:    t30 = (t0 + 5384);
    t34 = (t30 + 32U);
    t35 = *((char **)t34);
    t36 = (t35 + 40U);
    t37 = *((char **)t36);
    memcpy(t37, t25, 5U);
    xsi_driver_first_trans_fast(t30);
    goto LAB2;

LAB5:    t2 = (t0 + 776U);
    t6 = *((char **)t2);
    t7 = (13 - 15);
    t8 = (t7 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t2 = (t6 + t10);
    t11 = *((unsigned char *)t2);
    t12 = (t11 == (unsigned char)3);
    t1 = t12;
    goto LAB7;

LAB8:    xsi_size_not_matching(5U, t32, 0);
    goto LAB9;

}

static void work_a_4089252921_3572436511_p_3(char *t0)
{
    char t21[16];
    char t23[16];
    char t28[16];
    char t47[16];
    char t49[16];
    char t54[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t22;
    char *t24;
    char *t25;
    int t26;
    unsigned int t27;
    char *t29;
    int t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned char t38;
    unsigned char t39;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t48;
    char *t50;
    char *t51;
    int t52;
    unsigned int t53;
    char *t55;
    int t56;
    unsigned char t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;

LAB0:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2064U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)1);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t36 = (t0 + 2064U);
    t37 = *((char **)t36);
    t38 = *((unsigned char *)t37);
    t39 = (t38 == (unsigned char)1);
    if (t39 != 0)
        goto LAB10;

LAB11:
LAB2:    t62 = (t0 + 5212);
    *((int *)t62) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 10100);
    t15 = (t0 + 776U);
    t16 = *((char **)t15);
    t17 = (15 - 7);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t15 = (t16 + t19);
    t22 = ((IEEE_P_2592010699) + 2332);
    t24 = (t23 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = 0;
    t25 = (t24 + 4U);
    *((int *)t25) = 11;
    t25 = (t24 + 8U);
    *((int *)t25) = 1;
    t26 = (11 - 0);
    t27 = (t26 * 1);
    t27 = (t27 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t27;
    t25 = (t28 + 0U);
    t29 = (t25 + 0U);
    *((int *)t29) = 7;
    t29 = (t25 + 4U);
    *((int *)t29) = 4;
    t29 = (t25 + 8U);
    *((int *)t29) = -1;
    t30 = (4 - 7);
    t27 = (t30 * -1);
    t27 = (t27 + 1);
    t29 = (t25 + 12U);
    *((unsigned int *)t29) = t27;
    t20 = xsi_base_array_concat(t20, t21, t22, (char)97, t13, t23, (char)97, t15, t28, (char)101);
    t27 = (12U + 4U);
    t31 = (16U != t27);
    if (t31 == 1)
        goto LAB8;

LAB9:    t29 = (t0 + 5420);
    t32 = (t29 + 32U);
    t33 = *((char **)t32);
    t34 = (t33 + 40U);
    t35 = *((char **)t34);
    memcpy(t35, t20, 16U);
    xsi_driver_first_trans_fast(t29);
    goto LAB2;

LAB5:    t2 = (t0 + 776U);
    t6 = *((char **)t2);
    t7 = (13 - 15);
    t8 = (t7 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t2 = (t6 + t10);
    t11 = *((unsigned char *)t2);
    t12 = (t11 == (unsigned char)3);
    t1 = t12;
    goto LAB7;

LAB8:    xsi_size_not_matching(16U, t27, 0);
    goto LAB9;

LAB10:    t36 = (t0 + 10112);
    t41 = (t0 + 776U);
    t42 = *((char **)t41);
    t43 = (15 - 8);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t41 = (t42 + t45);
    t48 = ((IEEE_P_2592010699) + 2332);
    t50 = (t49 + 0U);
    t51 = (t50 + 0U);
    *((int *)t51) = 0;
    t51 = (t50 + 4U);
    *((int *)t51) = 10;
    t51 = (t50 + 8U);
    *((int *)t51) = 1;
    t52 = (10 - 0);
    t53 = (t52 * 1);
    t53 = (t53 + 1);
    t51 = (t50 + 12U);
    *((unsigned int *)t51) = t53;
    t51 = (t54 + 0U);
    t55 = (t51 + 0U);
    *((int *)t55) = 8;
    t55 = (t51 + 4U);
    *((int *)t55) = 4;
    t55 = (t51 + 8U);
    *((int *)t55) = -1;
    t56 = (4 - 8);
    t53 = (t56 * -1);
    t53 = (t53 + 1);
    t55 = (t51 + 12U);
    *((unsigned int *)t55) = t53;
    t46 = xsi_base_array_concat(t46, t47, t48, (char)97, t36, t49, (char)97, t41, t54, (char)101);
    t53 = (11U + 5U);
    t57 = (16U != t53);
    if (t57 == 1)
        goto LAB12;

LAB13:    t55 = (t0 + 5420);
    t58 = (t55 + 32U);
    t59 = *((char **)t58);
    t60 = (t59 + 40U);
    t61 = *((char **)t60);
    memcpy(t61, t46, 16U);
    xsi_driver_first_trans_fast(t55);
    goto LAB2;

LAB12:    xsi_size_not_matching(16U, t53, 0);
    goto LAB13;

}

static void work_a_4089252921_3572436511_p_4(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2064U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)1);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t18 = (t0 + 2064U);
    t19 = *((char **)t18);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)1);
    if (t21 != 0)
        goto LAB8;

LAB9:
LAB2:    t26 = (t0 + 5220);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 5456);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast(t13);
    goto LAB2;

LAB5:    t2 = (t0 + 776U);
    t6 = *((char **)t2);
    t7 = (15 - 15);
    t8 = (t7 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t2 = (t6 + t10);
    t11 = *((unsigned char *)t2);
    t12 = (t11 == (unsigned char)2);
    t1 = t12;
    goto LAB7;

LAB8:    t18 = (t0 + 5456);
    t22 = (t18 + 32U);
    t23 = *((char **)t22);
    t24 = (t23 + 40U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)3;
    xsi_driver_first_trans_fast(t18);
    goto LAB2;

}

static void work_a_4089252921_3572436511_p_5(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2064U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)1);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t18 = (t0 + 2064U);
    t19 = *((char **)t18);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)1);
    if (t21 != 0)
        goto LAB8;

LAB9:
LAB2:    t26 = (t0 + 5228);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 5492);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast(t13);
    goto LAB2;

LAB5:    t2 = (t0 + 776U);
    t6 = *((char **)t2);
    t7 = (13 - 15);
    t8 = (t7 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t2 = (t6 + t10);
    t11 = *((unsigned char *)t2);
    t12 = (t11 == (unsigned char)3);
    t1 = t12;
    goto LAB7;

LAB8:    t18 = (t0 + 5492);
    t22 = (t18 + 32U);
    t23 = *((char **)t22);
    t24 = (t23 + 40U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)2;
    xsi_driver_first_trans_fast(t18);
    goto LAB2;

}

static void work_a_4089252921_3572436511_p_6(char *t0)
{
    char t24[16];
    char t26[16];
    char t31[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;
    char *t32;
    int t33;
    unsigned char t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2064U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)1);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB2:    t39 = (t0 + 5236);
    *((int *)t39) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 776U);
    t14 = *((char **)t13);
    t15 = (15 - 11);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t13 = (t14 + t17);
    t18 = (t0 + 776U);
    t19 = *((char **)t18);
    t20 = (15 - 3);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t18 = (t19 + t22);
    t25 = ((IEEE_P_2592010699) + 2332);
    t27 = (t26 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = 11;
    t28 = (t27 + 4U);
    *((int *)t28) = 8;
    t28 = (t27 + 8U);
    *((int *)t28) = -1;
    t29 = (8 - 11);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;
    t28 = (t31 + 0U);
    t32 = (t28 + 0U);
    *((int *)t32) = 3;
    t32 = (t28 + 4U);
    *((int *)t32) = 0;
    t32 = (t28 + 8U);
    *((int *)t32) = -1;
    t33 = (0 - 3);
    t30 = (t33 * -1);
    t30 = (t30 + 1);
    t32 = (t28 + 12U);
    *((unsigned int *)t32) = t30;
    t23 = xsi_base_array_concat(t23, t24, t25, (char)97, t13, t26, (char)97, t18, t31, (char)101);
    t30 = (4U + 4U);
    t34 = (8U != t30);
    if (t34 == 1)
        goto LAB8;

LAB9:    t32 = (t0 + 5528);
    t35 = (t32 + 32U);
    t36 = *((char **)t35);
    t37 = (t36 + 40U);
    t38 = *((char **)t37);
    memcpy(t38, t23, 8U);
    xsi_driver_first_trans_fast_port(t32);
    goto LAB2;

LAB5:    t2 = (t0 + 776U);
    t6 = *((char **)t2);
    t7 = (13 - 15);
    t8 = (t7 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t2 = (t6 + t10);
    t11 = *((unsigned char *)t2);
    t12 = (t11 == (unsigned char)3);
    t1 = t12;
    goto LAB7;

LAB8:    xsi_size_not_matching(8U, t30, 0);
    goto LAB9;

}

static void work_a_4089252921_3572436511_p_7(char *t0)
{
    char t24[16];
    char t26[16];
    char t31[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;
    char *t32;
    int t33;
    unsigned char t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2064U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)1);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB2:    t39 = (t0 + 5244);
    *((int *)t39) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 776U);
    t14 = *((char **)t13);
    t15 = (15 - 11);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t13 = (t14 + t17);
    t18 = (t0 + 776U);
    t19 = *((char **)t18);
    t20 = (15 - 3);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t18 = (t19 + t22);
    t25 = ((IEEE_P_2592010699) + 2332);
    t27 = (t26 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = 11;
    t28 = (t27 + 4U);
    *((int *)t28) = 8;
    t28 = (t27 + 8U);
    *((int *)t28) = -1;
    t29 = (8 - 11);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;
    t28 = (t31 + 0U);
    t32 = (t28 + 0U);
    *((int *)t32) = 3;
    t32 = (t28 + 4U);
    *((int *)t32) = 0;
    t32 = (t28 + 8U);
    *((int *)t32) = -1;
    t33 = (0 - 3);
    t30 = (t33 * -1);
    t30 = (t30 + 1);
    t32 = (t28 + 12U);
    *((unsigned int *)t32) = t30;
    t23 = xsi_base_array_concat(t23, t24, t25, (char)97, t13, t26, (char)97, t18, t31, (char)101);
    t30 = (4U + 4U);
    t34 = (8U != t30);
    if (t34 == 1)
        goto LAB8;

LAB9:    t32 = (t0 + 5564);
    t35 = (t32 + 32U);
    t36 = *((char **)t35);
    t37 = (t36 + 40U);
    t38 = *((char **)t37);
    memcpy(t38, t23, 8U);
    xsi_driver_first_trans_fast(t32);
    goto LAB2;

LAB5:    t2 = (t0 + 776U);
    t6 = *((char **)t2);
    t7 = (15 - 15);
    t8 = (t7 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t2 = (t6 + t10);
    t11 = *((unsigned char *)t2);
    t12 = (t11 == (unsigned char)3);
    t1 = t12;
    goto LAB7;

LAB8:    xsi_size_not_matching(8U, t30, 0);
    goto LAB9;

}

static void work_a_4089252921_3572436511_p_8(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2064U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)1);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t18 = (t0 + 2064U);
    t19 = *((char **)t18);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)1);
    if (t21 != 0)
        goto LAB8;

LAB9:
LAB2:    t26 = (t0 + 5252);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 5600);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast(t13);
    goto LAB2;

LAB5:    t2 = (t0 + 776U);
    t6 = *((char **)t2);
    t7 = (15 - 15);
    t8 = (t7 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t2 = (t6 + t10);
    t11 = *((unsigned char *)t2);
    t12 = (t11 == (unsigned char)3);
    t1 = t12;
    goto LAB7;

LAB8:    t18 = (t0 + 5600);
    t22 = (t18 + 32U);
    t23 = *((char **)t22);
    t24 = (t23 + 40U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)2;
    xsi_driver_first_trans_fast(t18);
    goto LAB2;

}

static void work_a_4089252921_3572436511_p_9(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 2064U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)1);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t18 = (t0 + 2064U);
    t19 = *((char **)t18);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)1);
    if (t21 != 0)
        goto LAB8;

LAB9:
LAB2:    t26 = (t0 + 5260);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 5636);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast(t13);
    goto LAB2;

LAB5:    t2 = (t0 + 776U);
    t6 = *((char **)t2);
    t7 = (14 - 15);
    t8 = (t7 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t2 = (t6 + t10);
    t11 = *((unsigned char *)t2);
    t12 = (t11 == (unsigned char)3);
    t1 = t12;
    goto LAB7;

LAB8:    t18 = (t0 + 5636);
    t22 = (t18 + 32U);
    t23 = *((char **)t22);
    t24 = (t23 + 40U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)2;
    xsi_driver_first_trans_fast(t18);
    goto LAB2;

}

static void work_a_4089252921_3572436511_p_10(char *t0)
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

LAB0:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)4);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB2:    t10 = (t0 + 5268);
    *((int *)t10) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 776U);
    t5 = *((char **)t1);
    t1 = (t0 + 5672);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 16U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

}


extern void work_a_4089252921_3572436511_init()
{
	static char *pe[] = {(void *)work_a_4089252921_3572436511_p_0,(void *)work_a_4089252921_3572436511_p_1,(void *)work_a_4089252921_3572436511_p_2,(void *)work_a_4089252921_3572436511_p_3,(void *)work_a_4089252921_3572436511_p_4,(void *)work_a_4089252921_3572436511_p_5,(void *)work_a_4089252921_3572436511_p_6,(void *)work_a_4089252921_3572436511_p_7,(void *)work_a_4089252921_3572436511_p_8,(void *)work_a_4089252921_3572436511_p_9,(void *)work_a_4089252921_3572436511_p_10};
	xsi_register_didat("work_a_4089252921_3572436511", "isim/instruction_decoder_isim_beh.exe.sim/work/a_4089252921_3572436511.didat");
	xsi_register_executes(pe);
}
