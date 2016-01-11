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
static const char *ng0 = "C:/Users/Piotr/workspace/vlsi/vlsi_mcu/VLSI_MCU/Program_counter.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_3430011751_2841268967_p_0(char *t0)
{
    char t16[16];
    char t17[16];
    char t18[16];
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
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned char t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1028U);
    t11 = xsi_signal_has_event(t1);
    if (t11 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 2144);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(49, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t5 = t1;
    memset(t5, (unsigned char)2, 16U);
    t6 = (t0 + 2196);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1144U);
    t7 = *((char **)t2);
    t2 = (t0 + 3908U);
    t8 = (t0 + 3968);
    t10 = (t18 + 0U);
    t19 = (t10 + 0U);
    *((int *)t19) = 0;
    t19 = (t10 + 4U);
    *((int *)t19) = 15;
    t19 = (t10 + 8U);
    *((int *)t19) = 1;
    t20 = (15 - 0);
    t21 = (t20 * 1);
    t21 = (t21 + 1);
    t19 = (t10 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t17, t7, t2, t8, t18);
    t22 = (t0 + 684U);
    t23 = *((char **)t22);
    t22 = (t0 + 3876U);
    t24 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t16, t19, t17, t23, t22);
    t25 = (t16 + 12U);
    t21 = *((unsigned int *)t25);
    t26 = (1U * t21);
    t27 = (16U != t26);
    if (t27 == 1)
        goto LAB13;

LAB14:    t28 = (t0 + 2196);
    t29 = (t28 + 32U);
    t30 = *((char **)t29);
    t31 = (t30 + 40U);
    t32 = *((char **)t31);
    memcpy(t32, t24, 16U);
    xsi_driver_first_trans_fast(t28);
    goto LAB3;

LAB7:    t2 = (t0 + 776U);
    t6 = *((char **)t2);
    t14 = *((unsigned char *)t6);
    t15 = (t14 == (unsigned char)3);
    t3 = t15;
    goto LAB9;

LAB10:    t2 = (t0 + 1052U);
    t5 = *((char **)t2);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)3);
    t4 = t13;
    goto LAB12;

LAB13:    xsi_size_not_matching(16U, t26, 0);
    goto LAB14;

}

static void work_a_3430011751_2841268967_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(56, ng0);

LAB3:    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t1 = (t0 + 2232);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 2152);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3430011751_2841268967_init()
{
	static char *pe[] = {(void *)work_a_3430011751_2841268967_p_0,(void *)work_a_3430011751_2841268967_p_1};
	xsi_register_didat("work_a_3430011751_2841268967", "isim/pc_test_isim_beh.exe.sim/work/a_3430011751_2841268967.didat");
	xsi_register_executes(pe);
}
