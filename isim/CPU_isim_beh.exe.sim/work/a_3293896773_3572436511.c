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
LAB3:    t1 = (t0 + 8188);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 8448);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2156U);
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

LAB11:    xsi_set_current_line(76, ng0);
    t7 = (t0 + 776U);
    t8 = *((char **)t7);
    t7 = (t0 + 15729);
    t14 = 1;
    if (16U == 16U)
        goto LAB22;

LAB23:    t14 = 0;

LAB24:    if (t14 == 1)
        goto LAB19;

LAB20:    t18 = (t0 + 776U);
    t19 = *((char **)t18);
    t18 = (t0 + 3260U);
    t20 = *((char **)t18);
    t21 = 1;
    if (16U == 16U)
        goto LAB28;

LAB29:    t21 = 0;

LAB30:    t12 = t21;

LAB21:    if (t12 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 8448);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB17:    goto LAB10;

LAB12:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 8448);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB13:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 8448);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB14:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 8448);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB15:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 8448);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB16:    xsi_set_current_line(77, ng0);
    t24 = (t0 + 8448);
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

static void work_a_3293896773_3572436511_p_1(char *t0)
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

LAB0:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2156U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)1);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t23 = (t0 + 2156U);
    t24 = *((char **)t23);
    t25 = *((unsigned char *)t24);
    t26 = (t25 == (unsigned char)1);
    if (t26 != 0)
        goto LAB8;

LAB9:
LAB2:    t44 = (t0 + 8196);
    *((int *)t44) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 776U);
    t14 = *((char **)t13);
    t15 = (15 - 8);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t13 = (t14 + t17);
    t18 = (t0 + 8484);
    t19 = (t18 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    memcpy(t22, t13, 5U);
    xsi_driver_first_trans_fast(t18);
    goto LAB2;

LAB5:    t2 = (t0 + 776U);
    t6 = *((char **)t2);
    t7 = (14 - 15);
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

LAB11:    t36 = (t0 + 8484);
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

static void work_a_3293896773_3572436511_p_2(char *t0)
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

LAB0:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 2156U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)1);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB2:    t29 = (t0 + 8204);
    *((int *)t29) = 1;

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

LAB6:    t21 = (t0 + 8520);
    t25 = (t21 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    memcpy(t28, t16, 5U);
    xsi_driver_first_trans_fast(t21);
    goto LAB2;

LAB5:    xsi_size_not_matching(5U, t23, 0);
    goto LAB6;

}

static void work_a_3293896773_3572436511_p_3(char *t0)
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

LAB0:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2156U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)1);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t36 = (t0 + 2156U);
    t37 = *((char **)t36);
    t38 = *((unsigned char *)t37);
    t39 = (t38 == (unsigned char)1);
    if (t39 != 0)
        goto LAB10;

LAB11:
LAB2:    t62 = (t0 + 8212);
    *((int *)t62) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 15745);
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

LAB9:    t29 = (t0 + 8556);
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

LAB10:    t36 = (t0 + 15757);
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

LAB13:    t55 = (t0 + 8556);
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

static void work_a_3293896773_3572436511_p_4(char *t0)
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
    t2 = (t0 + 2156U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)1);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t18 = (t0 + 2156U);
    t19 = *((char **)t18);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)1);
    if (t21 != 0)
        goto LAB8;

LAB9:
LAB2:    t26 = (t0 + 8220);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 8592);
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

LAB8:    t18 = (t0 + 8592);
    t22 = (t18 + 32U);
    t23 = *((char **)t22);
    t24 = (t23 + 40U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)3;
    xsi_driver_first_trans_fast(t18);
    goto LAB2;

}

static void work_a_3293896773_3572436511_p_5(char *t0)
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

LAB0:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2156U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)1);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t18 = (t0 + 2156U);
    t19 = *((char **)t18);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)1);
    if (t21 != 0)
        goto LAB8;

LAB9:
LAB2:    t26 = (t0 + 8228);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 8628);
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

LAB8:    t18 = (t0 + 8628);
    t22 = (t18 + 32U);
    t23 = *((char **)t22);
    t24 = (t23 + 40U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)2;
    xsi_driver_first_trans_fast(t18);
    goto LAB2;

}

static void work_a_3293896773_3572436511_p_6(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned char t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2156U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)1);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t21 = (t0 + 2156U);
    t22 = *((char **)t21);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)1);
    if (t24 != 0)
        goto LAB14;

LAB15:
LAB2:    t29 = (t0 + 8236);
    *((int *)t29) = 1;

LAB1:    return;
LAB3:    t16 = (t0 + 8664);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast(t16);
    goto LAB2;

LAB5:    t2 = (t0 + 776U);
    t6 = *((char **)t2);
    t7 = (15 - 15);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t2 = (t6 + t9);
    t10 = (t0 + 15768);
    t12 = 1;
    if (4U == 4U)
        goto LAB8;

LAB9:    t12 = 0;

LAB10:    t1 = t12;
    goto LAB7;

LAB8:    t13 = 0;

LAB11:    if (t13 < 4U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t14 = (t2 + t13);
    t15 = (t10 + t13);
    if (*((unsigned char *)t14) != *((unsigned char *)t15))
        goto LAB9;

LAB13:    t13 = (t13 + 1);
    goto LAB11;

LAB14:    t21 = (t0 + 8664);
    t25 = (t21 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = (unsigned char)2;
    xsi_driver_first_trans_fast(t21);
    goto LAB2;

}

static void work_a_3293896773_3572436511_p_7(char *t0)
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

LAB0:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 2156U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)1);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB2:    t30 = (t0 + 8244);
    *((int *)t30) = 1;

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

LAB6:    t23 = (t0 + 8700);
    t26 = (t23 + 32U);
    t27 = *((char **)t26);
    t28 = (t27 + 40U);
    t29 = *((char **)t28);
    memcpy(t29, t14, 8U);
    xsi_driver_first_trans_fast(t23);
    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t21, 0);
    goto LAB6;

}

static void work_a_3293896773_3572436511_p_8(char *t0)
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

LAB0:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 2156U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)1);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB2:    t39 = (t0 + 8252);
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

LAB9:    t32 = (t0 + 8736);
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

static void work_a_3293896773_3572436511_p_9(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned char t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 2156U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)1);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t21 = (t0 + 2156U);
    t22 = *((char **)t21);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)1);
    if (t24 != 0)
        goto LAB14;

LAB15:
LAB2:    t29 = (t0 + 8260);
    *((int *)t29) = 1;

LAB1:    return;
LAB3:    t16 = (t0 + 8772);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast(t16);
    goto LAB2;

LAB5:    t2 = (t0 + 776U);
    t6 = *((char **)t2);
    t7 = (15 - 15);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t2 = (t6 + t9);
    t10 = (t0 + 15772);
    t12 = 1;
    if (2U == 2U)
        goto LAB8;

LAB9:    t12 = 0;

LAB10:    t1 = t12;
    goto LAB7;

LAB8:    t13 = 0;

LAB11:    if (t13 < 2U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t14 = (t2 + t13);
    t15 = (t10 + t13);
    if (*((unsigned char *)t14) != *((unsigned char *)t15))
        goto LAB9;

LAB13:    t13 = (t13 + 1);
    goto LAB11;

LAB14:    t21 = (t0 + 8772);
    t25 = (t21 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = (unsigned char)2;
    xsi_driver_first_trans_fast(t21);
    goto LAB2;

}

static void work_a_3293896773_3572436511_p_10(char *t0)
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

LAB0:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 2156U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)1);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB2:    t10 = (t0 + 8268);
    *((int *)t10) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 776U);
    t5 = *((char **)t1);
    t1 = (t0 + 8808);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 16U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

}

static void work_a_3293896773_3572436511_p_11(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    unsigned char t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned char t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned char t35;
    unsigned char t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;

LAB0:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 2156U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)1);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t33 = (t0 + 2156U);
    t34 = *((char **)t33);
    t35 = *((unsigned char *)t34);
    t36 = (t35 == (unsigned char)1);
    if (t36 != 0)
        goto LAB23;

LAB24:
LAB2:    t41 = (t0 + 8276);
    *((int *)t41) = 1;

LAB1:    return;
LAB3:    t28 = (t0 + 8844);
    t29 = (t28 + 32U);
    t30 = *((char **)t29);
    t31 = (t30 + 40U);
    t32 = *((char **)t31);
    *((unsigned char *)t32) = (unsigned char)3;
    xsi_driver_first_trans_fast(t28);
    goto LAB2;

LAB5:    t2 = (t0 + 776U);
    t7 = *((char **)t2);
    t8 = (15 - 13);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t2 = (t7 + t10);
    t11 = (t0 + 15774);
    t13 = 1;
    if (4U == 4U)
        goto LAB11;

LAB12:    t13 = 0;

LAB13:    if (t13 == 1)
        goto LAB8;

LAB9:    t17 = (t0 + 776U);
    t18 = *((char **)t17);
    t19 = (15 - 13);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t17 = (t18 + t21);
    t22 = (t0 + 15778);
    t24 = 1;
    if (2U == 2U)
        goto LAB17;

LAB18:    t24 = 0;

LAB19:    t6 = t24;

LAB10:    t1 = t6;
    goto LAB7;

LAB8:    t6 = (unsigned char)1;
    goto LAB10;

LAB11:    t14 = 0;

LAB14:    if (t14 < 4U)
        goto LAB15;
    else
        goto LAB13;

LAB15:    t15 = (t2 + t14);
    t16 = (t11 + t14);
    if (*((unsigned char *)t15) != *((unsigned char *)t16))
        goto LAB12;

LAB16:    t14 = (t14 + 1);
    goto LAB14;

LAB17:    t25 = 0;

LAB20:    if (t25 < 2U)
        goto LAB21;
    else
        goto LAB19;

LAB21:    t26 = (t17 + t25);
    t27 = (t22 + t25);
    if (*((unsigned char *)t26) != *((unsigned char *)t27))
        goto LAB18;

LAB22:    t25 = (t25 + 1);
    goto LAB20;

LAB23:    t33 = (t0 + 8844);
    t37 = (t33 + 32U);
    t38 = *((char **)t37);
    t39 = (t38 + 40U);
    t40 = *((char **)t39);
    *((unsigned char *)t40) = (unsigned char)2;
    xsi_driver_first_trans_fast(t33);
    goto LAB2;

}

static void work_a_3293896773_3572436511_p_12(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned char t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 2156U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)1);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t21 = (t0 + 2156U);
    t22 = *((char **)t21);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)1);
    if (t24 != 0)
        goto LAB14;

LAB15:
LAB2:    t29 = (t0 + 8284);
    *((int *)t29) = 1;

LAB1:    return;
LAB3:    t16 = (t0 + 8880);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast(t16);
    goto LAB2;

LAB5:    t2 = (t0 + 776U);
    t6 = *((char **)t2);
    t7 = (15 - 13);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t2 = (t6 + t9);
    t10 = (t0 + 15780);
    t12 = 1;
    if (2U == 2U)
        goto LAB8;

LAB9:    t12 = 0;

LAB10:    t1 = t12;
    goto LAB7;

LAB8:    t13 = 0;

LAB11:    if (t13 < 2U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t14 = (t2 + t13);
    t15 = (t10 + t13);
    if (*((unsigned char *)t14) != *((unsigned char *)t15))
        goto LAB9;

LAB13:    t13 = (t13 + 1);
    goto LAB11;

LAB14:    t21 = (t0 + 8880);
    t25 = (t21 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = (unsigned char)2;
    xsi_driver_first_trans_fast(t21);
    goto LAB2;

}

static void work_a_3293896773_3572436511_p_13(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned char t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 2156U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)1);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t21 = (t0 + 2156U);
    t22 = *((char **)t21);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)1);
    if (t24 != 0)
        goto LAB14;

LAB15:
LAB2:    t29 = (t0 + 8292);
    *((int *)t29) = 1;

LAB1:    return;
LAB3:    t16 = (t0 + 8916);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast(t16);
    goto LAB2;

LAB5:    t2 = (t0 + 776U);
    t6 = *((char **)t2);
    t7 = (15 - 13);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t2 = (t6 + t9);
    t10 = (t0 + 15782);
    t12 = 1;
    if (4U == 4U)
        goto LAB8;

LAB9:    t12 = 0;

LAB10:    t1 = t12;
    goto LAB7;

LAB8:    t13 = 0;

LAB11:    if (t13 < 4U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t14 = (t2 + t13);
    t15 = (t10 + t13);
    if (*((unsigned char *)t14) != *((unsigned char *)t15))
        goto LAB9;

LAB13:    t13 = (t13 + 1);
    goto LAB11;

LAB14:    t21 = (t0 + 8916);
    t25 = (t21 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = (unsigned char)2;
    xsi_driver_first_trans_fast(t21);
    goto LAB2;

}

static void work_a_3293896773_3572436511_p_14(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned char t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2156U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)1);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t21 = (t0 + 2156U);
    t22 = *((char **)t21);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)1);
    if (t24 != 0)
        goto LAB14;

LAB15:
LAB2:    t29 = (t0 + 8300);
    *((int *)t29) = 1;

LAB1:    return;
LAB3:    t16 = (t0 + 8952);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast(t16);
    goto LAB2;

LAB5:    t2 = (t0 + 776U);
    t6 = *((char **)t2);
    t7 = (15 - 13);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t2 = (t6 + t9);
    t10 = (t0 + 15786);
    t12 = 1;
    if (2U == 2U)
        goto LAB8;

LAB9:    t12 = 0;

LAB10:    t1 = t12;
    goto LAB7;

LAB8:    t13 = 0;

LAB11:    if (t13 < 2U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t14 = (t2 + t13);
    t15 = (t10 + t13);
    if (*((unsigned char *)t14) != *((unsigned char *)t15))
        goto LAB9;

LAB13:    t13 = (t13 + 1);
    goto LAB11;

LAB14:    t21 = (t0 + 8952);
    t25 = (t21 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = (unsigned char)2;
    xsi_driver_first_trans_fast(t21);
    goto LAB2;

}

static void work_a_3293896773_3572436511_p_15(char *t0)
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

LAB0:    xsi_set_current_line(126, ng0);
    t1 = (t0 + 2156U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB2:    t10 = (t0 + 8308);
    *((int *)t10) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 2524U);
    t5 = *((char **)t1);
    t1 = (t0 + 8988);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 5U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

}

static void work_a_3293896773_3572436511_p_16(char *t0)
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

LAB0:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 2156U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB2:    t10 = (t0 + 8316);
    *((int *)t10) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 2616U);
    t5 = *((char **)t1);
    t1 = (t0 + 9024);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 5U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

}

static void work_a_3293896773_3572436511_p_17(char *t0)
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

LAB0:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 2156U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB2:    t10 = (t0 + 8324);
    *((int *)t10) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 2800U);
    t5 = *((char **)t1);
    t1 = (t0 + 9060);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

}

static void work_a_3293896773_3572436511_p_18(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 2156U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB2:    t11 = (t0 + 8332);
    *((int *)t11) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 2708U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t1 = (t0 + 9096);
    t7 = (t1 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

}

static void work_a_3293896773_3572436511_p_19(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 2156U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB2:    t15 = (t0 + 8340);
    *((int *)t15) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 2892U);
    t9 = *((char **)t2);
    t10 = *((unsigned char *)t9);
    t2 = (t0 + 9132);
    t11 = (t2 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t10;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB2;

LAB5:    t2 = (t0 + 2432U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    t1 = t8;
    goto LAB7;

}

static void work_a_3293896773_3572436511_p_20(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 2156U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB2:    t15 = (t0 + 8348);
    *((int *)t15) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 2984U);
    t9 = *((char **)t2);
    t10 = *((unsigned char *)t9);
    t2 = (t0 + 9168);
    t11 = (t2 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t10;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB2;

LAB5:    t2 = (t0 + 2432U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    t1 = t8;
    goto LAB7;

}

static void work_a_3293896773_3572436511_p_21(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 2156U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB2:    t15 = (t0 + 8356);
    *((int *)t15) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 3076U);
    t9 = *((char **)t2);
    t10 = *((unsigned char *)t9);
    t2 = (t0 + 9204);
    t11 = (t2 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t10;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB2;

LAB5:    t2 = (t0 + 2432U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    t1 = t8;
    goto LAB7;

}

static void work_a_3293896773_3572436511_p_22(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 2156U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB2:    t15 = (t0 + 8364);
    *((int *)t15) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 3168U);
    t9 = *((char **)t2);
    t10 = *((unsigned char *)t9);
    t2 = (t0 + 9240);
    t11 = (t2 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t10;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB2;

LAB5:    t2 = (t0 + 2432U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    t1 = t8;
    goto LAB7;

}

static void work_a_3293896773_3572436511_p_23(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(136, ng0);
    t1 = (t0 + 2156U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t12 = (t0 + 9276);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t12);

LAB2:    t17 = (t0 + 8372);
    *((int *)t17) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 2432U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t6);
    t1 = (t0 + 9276);
    t8 = (t1 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3293896773_3572436511_p_24(char *t0)
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
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(139, ng0);
    t1 = (t0 + 2156U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)4);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = xsi_get_transient_memory(16U);
    memset(t10, 0, 16U);
    t11 = t10;
    memset(t11, (unsigned char)4, 16U);
    t12 = (t0 + 9312);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 16U);
    xsi_driver_first_trans_fast_port(t12);

LAB2:    t17 = (t0 + 8380);
    *((int *)t17) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 2248U);
    t5 = *((char **)t1);
    t1 = (t0 + 9312);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 16U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3293896773_3572436511_p_25(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
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

LAB0:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 2156U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)4);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t14 = xsi_get_transient_memory(8U);
    memset(t14, 0, 8U);
    t15 = t14;
    memset(t15, (unsigned char)4, 8U);
    t16 = (t0 + 9348);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t14, 8U);
    xsi_driver_first_trans_fast_port(t16);

LAB2:    t21 = (t0 + 8388);
    *((int *)t21) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 2340U);
    t9 = *((char **)t2);
    t2 = (t0 + 9348);
    t10 = (t2 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t9, 8U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB2;

LAB5:    t2 = (t0 + 2432U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t1 = t8;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_3293896773_3572436511_p_26(char *t0)
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

LAB0:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 2156U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)4);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 9384);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 8396);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 9384);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3293896773_3572436511_p_27(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 2156U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)4);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB2:    t11 = (t0 + 8404);
    *((int *)t11) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 3352U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t1 = (t0 + 9420);
    t7 = (t1 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

}


extern void work_a_3293896773_3572436511_init()
{
	static char *pe[] = {(void *)work_a_3293896773_3572436511_p_0,(void *)work_a_3293896773_3572436511_p_1,(void *)work_a_3293896773_3572436511_p_2,(void *)work_a_3293896773_3572436511_p_3,(void *)work_a_3293896773_3572436511_p_4,(void *)work_a_3293896773_3572436511_p_5,(void *)work_a_3293896773_3572436511_p_6,(void *)work_a_3293896773_3572436511_p_7,(void *)work_a_3293896773_3572436511_p_8,(void *)work_a_3293896773_3572436511_p_9,(void *)work_a_3293896773_3572436511_p_10,(void *)work_a_3293896773_3572436511_p_11,(void *)work_a_3293896773_3572436511_p_12,(void *)work_a_3293896773_3572436511_p_13,(void *)work_a_3293896773_3572436511_p_14,(void *)work_a_3293896773_3572436511_p_15,(void *)work_a_3293896773_3572436511_p_16,(void *)work_a_3293896773_3572436511_p_17,(void *)work_a_3293896773_3572436511_p_18,(void *)work_a_3293896773_3572436511_p_19,(void *)work_a_3293896773_3572436511_p_20,(void *)work_a_3293896773_3572436511_p_21,(void *)work_a_3293896773_3572436511_p_22,(void *)work_a_3293896773_3572436511_p_23,(void *)work_a_3293896773_3572436511_p_24,(void *)work_a_3293896773_3572436511_p_25,(void *)work_a_3293896773_3572436511_p_26,(void *)work_a_3293896773_3572436511_p_27};
	xsi_register_didat("work_a_3293896773_3572436511", "isim/CPU_isim_beh.exe.sim/work/a_3293896773_3572436511.didat");
	xsi_register_executes(pe);
}
