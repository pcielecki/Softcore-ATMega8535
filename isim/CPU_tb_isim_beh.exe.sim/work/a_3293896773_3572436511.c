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
    char *t12;
    char *t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    static char *nl0[] = {&&LAB11, &&LAB13, &&LAB13, &&LAB13, &&LAB13, &&LAB12};

LAB0:    xsi_set_current_line(63, ng0);
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
LAB3:    t1 = (t0 + 4924);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 5064);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1972U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (t0 + 5100);
    t7 = (t2 + 32U);
    t8 = *((char **)t7);
    t12 = (t8 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t11;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB7:    t2 = (t0 + 684U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    goto LAB3;

LAB11:    xsi_set_current_line(68, ng0);
    t5 = (t0 + 776U);
    t6 = *((char **)t5);
    t5 = (t0 + 9604);
    t9 = 1;
    if (16U == 16U)
        goto LAB20;

LAB21:    t9 = 0;

LAB22:    if (t9 == 1)
        goto LAB17;

LAB18:    t13 = (t0 + 776U);
    t15 = *((char **)t13);
    t13 = (t0 + 2340U);
    t16 = *((char **)t13);
    t10 = 1;
    if (16U == 16U)
        goto LAB26;

LAB27:    t10 = 0;

LAB28:    t4 = t10;

LAB19:    if (t4 != 0)
        goto LAB14;

LAB16:    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t24 = (15 - 15);
    t14 = (t24 * -1);
    t17 = (1U * t14);
    t25 = (0 + t17);
    t1 = (t2 + t25);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB32;

LAB33:    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t14 = (15 - 15);
    t17 = (t14 * 1U);
    t25 = (0 + t17);
    t1 = (t2 + t25);
    t5 = (t0 + 9620);
    t3 = 1;
    if (4U == 4U)
        goto LAB36;

LAB37:    t3 = 0;

LAB38:    if (t3 != 0)
        goto LAB34;

LAB35:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 5064);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB15:    goto LAB10;

LAB12:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t1 = (t0 + 9624);
    t4 = 1;
    if (16U == 16U)
        goto LAB48;

LAB49:    t4 = 0;

LAB50:    if (t4 == 1)
        goto LAB45;

LAB46:    t8 = (t0 + 776U);
    t12 = *((char **)t8);
    t8 = (t0 + 2340U);
    t13 = *((char **)t8);
    t9 = 1;
    if (16U == 16U)
        goto LAB54;

LAB55:    t9 = 0;

LAB56:    t3 = t9;

LAB47:    if (t3 != 0)
        goto LAB42;

LAB44:    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t24 = (15 - 15);
    t14 = (t24 * -1);
    t17 = (1U * t14);
    t25 = (0 + t17);
    t1 = (t2 + t25);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB60;

LAB61:    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t14 = (15 - 15);
    t17 = (t14 * 1U);
    t25 = (0 + t17);
    t1 = (t2 + t25);
    t5 = (t0 + 9640);
    t3 = 1;
    if (4U == 4U)
        goto LAB64;

LAB65:    t3 = 0;

LAB66:    if (t3 != 0)
        goto LAB62;

LAB63:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 5064);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB43:    goto LAB10;

LAB13:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 5064);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB14:    xsi_set_current_line(69, ng0);
    t19 = (t0 + 5064);
    t20 = (t19 + 32U);
    t21 = *((char **)t20);
    t22 = (t21 + 40U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)0;
    xsi_driver_first_trans_fast(t19);
    goto LAB15;

LAB17:    t4 = (unsigned char)1;
    goto LAB19;

LAB20:    t14 = 0;

LAB23:    if (t14 < 16U)
        goto LAB24;
    else
        goto LAB22;

LAB24:    t8 = (t6 + t14);
    t12 = (t5 + t14);
    if (*((unsigned char *)t8) != *((unsigned char *)t12))
        goto LAB21;

LAB25:    t14 = (t14 + 1);
    goto LAB23;

LAB26:    t17 = 0;

LAB29:    if (t17 < 16U)
        goto LAB30;
    else
        goto LAB28;

LAB30:    t13 = (t15 + t17);
    t18 = (t16 + t17);
    if (*((unsigned char *)t13) != *((unsigned char *)t18))
        goto LAB27;

LAB31:    t17 = (t17 + 1);
    goto LAB29;

LAB32:    xsi_set_current_line(71, ng0);
    t5 = (t0 + 5064);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t12 = *((char **)t8);
    *((unsigned char *)t12) = (unsigned char)1;
    xsi_driver_first_trans_fast(t5);
    goto LAB15;

LAB34:    xsi_set_current_line(73, ng0);
    t12 = (t0 + 5064);
    t13 = (t12 + 32U);
    t15 = *((char **)t13);
    t16 = (t15 + 40U);
    t18 = *((char **)t16);
    *((unsigned char *)t18) = (unsigned char)4;
    xsi_driver_first_trans_fast(t12);
    goto LAB15;

LAB36:    t26 = 0;

LAB39:    if (t26 < 4U)
        goto LAB40;
    else
        goto LAB38;

LAB40:    t7 = (t1 + t26);
    t8 = (t5 + t26);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB37;

LAB41:    t26 = (t26 + 1);
    goto LAB39;

LAB42:    xsi_set_current_line(79, ng0);
    t16 = (t0 + 5064);
    t18 = (t16 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)0;
    xsi_driver_first_trans_fast(t16);
    goto LAB43;

LAB45:    t3 = (unsigned char)1;
    goto LAB47;

LAB48:    t14 = 0;

LAB51:    if (t14 < 16U)
        goto LAB52;
    else
        goto LAB50;

LAB52:    t6 = (t2 + t14);
    t7 = (t1 + t14);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB49;

LAB53:    t14 = (t14 + 1);
    goto LAB51;

LAB54:    t17 = 0;

LAB57:    if (t17 < 16U)
        goto LAB58;
    else
        goto LAB56;

LAB58:    t8 = (t12 + t17);
    t15 = (t13 + t17);
    if (*((unsigned char *)t8) != *((unsigned char *)t15))
        goto LAB55;

LAB59:    t17 = (t17 + 1);
    goto LAB57;

LAB60:    xsi_set_current_line(81, ng0);
    t5 = (t0 + 5064);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t12 = *((char **)t8);
    *((unsigned char *)t12) = (unsigned char)1;
    xsi_driver_first_trans_fast(t5);
    goto LAB43;

LAB62:    xsi_set_current_line(83, ng0);
    t12 = (t0 + 5064);
    t13 = (t12 + 32U);
    t15 = *((char **)t13);
    t16 = (t15 + 40U);
    t18 = *((char **)t16);
    *((unsigned char *)t18) = (unsigned char)4;
    xsi_driver_first_trans_fast(t12);
    goto LAB43;

LAB64:    t26 = 0;

LAB67:    if (t26 < 4U)
        goto LAB68;
    else
        goto LAB66;

LAB68:    t7 = (t1 + t26);
    t8 = (t5 + t26);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB65;

LAB69:    t26 = (t26 + 1);
    goto LAB67;

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

LAB0:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1972U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)1);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t23 = (t0 + 1972U);
    t24 = *((char **)t23);
    t25 = *((unsigned char *)t24);
    t26 = (t25 == (unsigned char)1);
    if (t26 != 0)
        goto LAB8;

LAB9:
LAB2:    t44 = (t0 + 4932);
    *((int *)t44) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 776U);
    t14 = *((char **)t13);
    t15 = (15 - 8);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t13 = (t14 + t17);
    t18 = (t0 + 5136);
    t19 = (t18 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    memcpy(t22, t13, 5U);
    xsi_driver_first_trans_fast_port(t18);
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

LAB11:    t36 = (t0 + 5136);
    t40 = (t36 + 32U);
    t41 = *((char **)t40);
    t42 = (t41 + 40U);
    t43 = *((char **)t42);
    memcpy(t43, t31, 5U);
    xsi_driver_first_trans_fast_port(t36);
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

LAB0:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)1);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB2:    t29 = (t0 + 4940);
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

LAB6:    t21 = (t0 + 5172);
    t25 = (t21 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    memcpy(t28, t16, 5U);
    xsi_driver_first_trans_fast_port(t21);
    goto LAB2;

LAB5:    xsi_size_not_matching(5U, t23, 0);
    goto LAB6;

}

static void work_a_3293896773_3572436511_p_3(char *t0)
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

LAB0:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)1);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB2:    t30 = (t0 + 4948);
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

LAB6:    t23 = (t0 + 5208);
    t26 = (t23 + 32U);
    t27 = *((char **)t26);
    t28 = (t27 + 40U);
    t29 = *((char **)t28);
    memcpy(t29, t14, 8U);
    xsi_driver_first_trans_fast_port(t23);
    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t21, 0);
    goto LAB6;

}

static void work_a_3293896773_3572436511_p_4(char *t0)
{
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
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)1);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB2:    t16 = (t0 + 4956);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 776U);
    t5 = *((char **)t1);
    t6 = (14 - 15);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t5 + t9);
    t10 = *((unsigned char *)t1);
    t11 = (t0 + 5244);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t10;
    xsi_driver_first_trans_fast_port(t11);
    goto LAB2;

}

static void work_a_3293896773_3572436511_p_5(char *t0)
{
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
    unsigned char t11;
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
    char *t22;

LAB0:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)1);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t17 = (t0 + 5280);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t17);

LAB2:    t22 = (t0 + 4964);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 776U);
    t5 = *((char **)t1);
    t6 = (15 - 15);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t5 + t9);
    t10 = *((unsigned char *)t1);
    t11 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t10);
    t12 = (t0 + 5280);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_fast_port(t12);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3293896773_3572436511_p_6(char *t0)
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

LAB0:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)1);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB2:    t14 = (t0 + 4972);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 776U);
    t5 = *((char **)t1);
    t6 = (15 - 13);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t5 + t8);
    t9 = (t0 + 5316);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 4U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

}

static void work_a_3293896773_3572436511_p_7(char *t0)
{
    char t21[16];
    char t23[16];
    char t28[16];
    char t47[16];
    char t49[16];
    char t54[16];
    char t73[16];
    char t75[16];
    char t80[16];
    char t108[16];
    char t110[16];
    char t115[16];
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
    char *t63;
    unsigned char t64;
    unsigned char t65;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t74;
    char *t76;
    char *t77;
    int t78;
    unsigned int t79;
    char *t81;
    int t82;
    unsigned char t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    unsigned char t88;
    char *t89;
    char *t90;
    unsigned char t91;
    unsigned char t92;
    char *t93;
    int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned char t98;
    unsigned char t99;
    char *t100;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t109;
    char *t111;
    char *t112;
    int t113;
    unsigned int t114;
    char *t116;
    int t117;
    unsigned char t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;

LAB0:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1972U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)1);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t36 = (t0 + 1972U);
    t37 = *((char **)t36);
    t38 = *((unsigned char *)t37);
    t39 = (t38 == (unsigned char)1);
    if (t39 != 0)
        goto LAB10;

LAB11:    t62 = (t0 + 1972U);
    t63 = *((char **)t62);
    t64 = *((unsigned char *)t63);
    t65 = (t64 == (unsigned char)2);
    if (t65 != 0)
        goto LAB14;

LAB15:    t89 = (t0 + 1972U);
    t90 = *((char **)t89);
    t91 = *((unsigned char *)t90);
    t92 = (t91 == (unsigned char)3);
    if (t92 == 1)
        goto LAB20;

LAB21:    t88 = (unsigned char)0;

LAB22:    if (t88 != 0)
        goto LAB18;

LAB19:
LAB2:    t123 = (t0 + 4980);
    *((int *)t123) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 9644);
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

LAB9:    t29 = (t0 + 5352);
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

LAB10:    t36 = (t0 + 9656);
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

LAB13:    t55 = (t0 + 5352);
    t58 = (t55 + 32U);
    t59 = *((char **)t58);
    t60 = (t59 + 40U);
    t61 = *((char **)t60);
    memcpy(t61, t46, 16U);
    xsi_driver_first_trans_fast(t55);
    goto LAB2;

LAB12:    xsi_size_not_matching(16U, t53, 0);
    goto LAB13;

LAB14:    t62 = (t0 + 9667);
    t67 = (t0 + 776U);
    t68 = *((char **)t67);
    t69 = (15 - 7);
    t70 = (t69 * 1U);
    t71 = (0 + t70);
    t67 = (t68 + t71);
    t74 = ((IEEE_P_2592010699) + 2332);
    t76 = (t75 + 0U);
    t77 = (t76 + 0U);
    *((int *)t77) = 0;
    t77 = (t76 + 4U);
    *((int *)t77) = 11;
    t77 = (t76 + 8U);
    *((int *)t77) = 1;
    t78 = (11 - 0);
    t79 = (t78 * 1);
    t79 = (t79 + 1);
    t77 = (t76 + 12U);
    *((unsigned int *)t77) = t79;
    t77 = (t80 + 0U);
    t81 = (t77 + 0U);
    *((int *)t81) = 7;
    t81 = (t77 + 4U);
    *((int *)t81) = 4;
    t81 = (t77 + 8U);
    *((int *)t81) = -1;
    t82 = (4 - 7);
    t79 = (t82 * -1);
    t79 = (t79 + 1);
    t81 = (t77 + 12U);
    *((unsigned int *)t81) = t79;
    t72 = xsi_base_array_concat(t72, t73, t74, (char)97, t62, t75, (char)97, t67, t80, (char)101);
    t79 = (12U + 4U);
    t83 = (16U != t79);
    if (t83 == 1)
        goto LAB16;

LAB17:    t81 = (t0 + 5352);
    t84 = (t81 + 32U);
    t85 = *((char **)t84);
    t86 = (t85 + 40U);
    t87 = *((char **)t86);
    memcpy(t87, t72, 16U);
    xsi_driver_first_trans_fast(t81);
    goto LAB2;

LAB16:    xsi_size_not_matching(16U, t79, 0);
    goto LAB17;

LAB18:    t100 = (t0 + 9679);
    t102 = (t0 + 776U);
    t103 = *((char **)t102);
    t104 = (15 - 8);
    t105 = (t104 * 1U);
    t106 = (0 + t105);
    t102 = (t103 + t106);
    t109 = ((IEEE_P_2592010699) + 2332);
    t111 = (t110 + 0U);
    t112 = (t111 + 0U);
    *((int *)t112) = 0;
    t112 = (t111 + 4U);
    *((int *)t112) = 10;
    t112 = (t111 + 8U);
    *((int *)t112) = 1;
    t113 = (10 - 0);
    t114 = (t113 * 1);
    t114 = (t114 + 1);
    t112 = (t111 + 12U);
    *((unsigned int *)t112) = t114;
    t112 = (t115 + 0U);
    t116 = (t112 + 0U);
    *((int *)t116) = 8;
    t116 = (t112 + 4U);
    *((int *)t116) = 4;
    t116 = (t112 + 8U);
    *((int *)t116) = -1;
    t117 = (4 - 8);
    t114 = (t117 * -1);
    t114 = (t114 + 1);
    t116 = (t112 + 12U);
    *((unsigned int *)t116) = t114;
    t107 = xsi_base_array_concat(t107, t108, t109, (char)97, t100, t110, (char)97, t102, t115, (char)101);
    t114 = (11U + 5U);
    t118 = (16U != t114);
    if (t118 == 1)
        goto LAB23;

LAB24:    t116 = (t0 + 5352);
    t119 = (t116 + 32U);
    t120 = *((char **)t119);
    t121 = (t120 + 40U);
    t122 = *((char **)t121);
    memcpy(t122, t107, 16U);
    xsi_driver_first_trans_fast(t116);
    goto LAB2;

LAB20:    t89 = (t0 + 776U);
    t93 = *((char **)t89);
    t94 = (11 - 15);
    t95 = (t94 * -1);
    t96 = (1U * t95);
    t97 = (0 + t96);
    t89 = (t93 + t97);
    t98 = *((unsigned char *)t89);
    t99 = (t98 == (unsigned char)3);
    t88 = t99;
    goto LAB22;

LAB23:    xsi_size_not_matching(16U, t114, 0);
    goto LAB24;

}

static void work_a_3293896773_3572436511_p_8(char *t0)
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

LAB0:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB2:    t30 = (t0 + 4988);
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

LAB6:    t23 = (t0 + 5388);
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

static void work_a_3293896773_3572436511_p_9(char *t0)
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

LAB0:    xsi_set_current_line(124, ng0);
    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)5);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = xsi_get_transient_memory(16U);
    memset(t10, 0, 16U);
    t11 = t10;
    memset(t11, (unsigned char)4, 16U);
    t12 = (t0 + 5424);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 16U);
    xsi_driver_first_trans_fast_port(t12);

LAB2:    t17 = (t0 + 4996);
    *((int *)t17) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 2156U);
    t5 = *((char **)t1);
    t1 = (t0 + 5424);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 16U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3293896773_3572436511_p_10(char *t0)
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

LAB0:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 1972U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)5);
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
    t16 = (t0 + 5460);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t14, 8U);
    xsi_driver_first_trans_fast_port(t16);

LAB2:    t21 = (t0 + 5004);
    *((int *)t21) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 2248U);
    t9 = *((char **)t2);
    t2 = (t0 + 5460);
    t10 = (t2 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t9, 8U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB2;

LAB5:    t2 = (t0 + 2064U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 != (unsigned char)1);
    t1 = t8;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_3293896773_3572436511_p_11(char *t0)
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

LAB0:    xsi_set_current_line(126, ng0);
    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)5);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 5496);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 5012);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 5496);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3293896773_3572436511_p_12(char *t0)
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

LAB0:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 1972U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)5);
    if (t5 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 1972U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)0);
    t1 = t8;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t13 = (t0 + 5532);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t13);

LAB2:    t18 = (t0 + 5020);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 5532);
    t9 = (t2 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB9:    goto LAB2;

}


extern void work_a_3293896773_3572436511_init()
{
	static char *pe[] = {(void *)work_a_3293896773_3572436511_p_0,(void *)work_a_3293896773_3572436511_p_1,(void *)work_a_3293896773_3572436511_p_2,(void *)work_a_3293896773_3572436511_p_3,(void *)work_a_3293896773_3572436511_p_4,(void *)work_a_3293896773_3572436511_p_5,(void *)work_a_3293896773_3572436511_p_6,(void *)work_a_3293896773_3572436511_p_7,(void *)work_a_3293896773_3572436511_p_8,(void *)work_a_3293896773_3572436511_p_9,(void *)work_a_3293896773_3572436511_p_10,(void *)work_a_3293896773_3572436511_p_11,(void *)work_a_3293896773_3572436511_p_12};
	xsi_register_didat("work_a_3293896773_3572436511", "isim/CPU_tb_isim_beh.exe.sim/work/a_3293896773_3572436511.didat");
	xsi_register_executes(pe);
}
