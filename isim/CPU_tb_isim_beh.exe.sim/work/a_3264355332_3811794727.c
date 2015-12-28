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
static const char *ng0 = "C:/Users/Piotr/workspace/vlsi/vlsi_mcu/VLSI_MCU/ALU_op_decoder.vhd";



static void work_a_3264355332_3811794727_p_0(char *t0)
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
    unsigned char t13;
    char *t14;
    char *t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 660U);
    t9 = xsi_signal_has_event(t1);
    if (t9 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 2092);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 2136);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 2172);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 2208);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 2244);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2136);
    t7 = (t2 + 32U);
    t8 = *((char **)t7);
    t14 = (t8 + 40U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 2172);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 2208);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 2244);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t1 = (t0 + 3887);
    t3 = 1;
    if (4U == 4U)
        goto LAB16;

LAB17:    t3 = 0;

LAB18:    if (t3 != 0)
        goto LAB13;

LAB15:    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t16 = (3 - 3);
    t19 = (t16 * 1U);
    t20 = (0 + t19);
    t1 = (t2 + t20);
    t5 = (t0 + 3891);
    t3 = 1;
    if (2U == 2U)
        goto LAB24;

LAB25:    t3 = 0;

LAB26:    if (t3 != 0)
        goto LAB22;

LAB23:    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t16 = (3 - 3);
    t19 = (t16 * 1U);
    t20 = (0 + t19);
    t1 = (t2 + t20);
    t5 = (t0 + 3893);
    t3 = 1;
    if (2U == 2U)
        goto LAB32;

LAB33:    t3 = 0;

LAB34:    if (t3 != 0)
        goto LAB30;

LAB31:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2208);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB14:    goto LAB3;

LAB7:    t2 = (t0 + 1236U);
    t6 = *((char **)t2);
    t12 = *((unsigned char *)t6);
    t13 = (t12 == (unsigned char)3);
    t3 = t13;
    goto LAB9;

LAB10:    t2 = (t0 + 684U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    t4 = t11;
    goto LAB12;

LAB13:    xsi_set_current_line(52, ng0);
    t8 = (t0 + 2136);
    t14 = (t8 + 32U);
    t15 = *((char **)t14);
    t17 = (t15 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB14;

LAB16:    t16 = 0;

LAB19:    if (t16 < 4U)
        goto LAB20;
    else
        goto LAB18;

LAB20:    t6 = (t2 + t16);
    t7 = (t1 + t16);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB17;

LAB21:    t16 = (t16 + 1);
    goto LAB19;

LAB22:    xsi_set_current_line(53, ng0);
    t14 = (t0 + 2244);
    t15 = (t14 + 32U);
    t17 = *((char **)t15);
    t18 = (t17 + 40U);
    t22 = *((char **)t18);
    *((unsigned char *)t22) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t14);
    goto LAB14;

LAB24:    t21 = 0;

LAB27:    if (t21 < 2U)
        goto LAB28;
    else
        goto LAB26;

LAB28:    t7 = (t1 + t21);
    t8 = (t5 + t21);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB25;

LAB29:    t21 = (t21 + 1);
    goto LAB27;

LAB30:    xsi_set_current_line(54, ng0);
    t14 = (t0 + 2172);
    t15 = (t14 + 32U);
    t17 = *((char **)t15);
    t18 = (t17 + 40U);
    t22 = *((char **)t18);
    *((unsigned char *)t22) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t14);
    goto LAB14;

LAB32:    t21 = 0;

LAB35:    if (t21 < 2U)
        goto LAB36;
    else
        goto LAB34;

LAB36:    t7 = (t1 + t21);
    t8 = (t5 + t21);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB33;

LAB37:    t21 = (t21 + 1);
    goto LAB35;

}


extern void work_a_3264355332_3811794727_init()
{
	static char *pe[] = {(void *)work_a_3264355332_3811794727_p_0};
	xsi_register_didat("work_a_3264355332_3811794727", "isim/CPU_tb_isim_beh.exe.sim/work/a_3264355332_3811794727.didat");
	xsi_register_executes(pe);
}
