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
static const char *ng0 = "C:/Users/Piotr/workspace/vlsi/vlsi_mcu/VLSI_MCU/gp_registerss.vhd";
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);


static void work_a_3433016680_3626903770_p_0(char *t0)
{
    char t13[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 936U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 2512);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 1512U);
    t8 = *((char **)t4);
    t4 = (t0 + 592U);
    t9 = *((char **)t4);
    t10 = (4 - 4);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t4 = (t9 + t12);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 4;
    t15 = (t14 + 4U);
    *((int *)t15) = 0;
    t15 = (t14 + 8U);
    *((int *)t15) = -1;
    t16 = (0 - 4);
    t17 = (t16 * -1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t18 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t4, t13);
    t19 = (t18 - 0);
    t17 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t18);
    t20 = (8U * t17);
    t21 = (0 + t20);
    t15 = (t8 + t21);
    t22 = (t0 + 2564);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memcpy(t26, t15, 8U);
    xsi_driver_first_trans_fast_port(t22);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 684U);
    t5 = *((char **)t2);
    t10 = (4 - 4);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t2 = (t5 + t12);
    t8 = (t13 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 4;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t16 = (0 - 4);
    t17 = (t16 * -1);
    t17 = (t17 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t17;
    t18 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t2, t13);
    t19 = (t18 - 0);
    t17 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t18);
    t20 = (8U * t17);
    t21 = (0 + t20);
    t9 = (t4 + t21);
    t14 = (t0 + 2600);
    t15 = (t14 + 32U);
    t22 = *((char **)t15);
    t23 = (t22 + 40U);
    t24 = *((char **)t23);
    memcpy(t24, t9, 8U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB3;

LAB5:    t4 = (t0 + 960U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void work_a_3433016680_3626903770_p_1(char *t0)
{
    char t22[16];
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
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t23;
    char *t24;
    int t25;
    unsigned int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 936U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 2520);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(59, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t5 = t1;
    memset(t5, (unsigned char)4, 16U);
    t6 = (t0 + 2636);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(59, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)4, 8U);
    t5 = (t0 + 2672);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(62, ng0);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t6 = t2;
    memset(t6, (unsigned char)4, 8U);
    t7 = (t0 + 2672);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t13 = *((char **)t10);
    memcpy(t13, t2, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(62, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    memset(t2, (unsigned char)4, 16U);
    t5 = (t0 + 2636);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB13;

LAB14:    t3 = (unsigned char)0;

LAB15:    if (t3 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB22;

LAB23:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 960U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(65, ng0);
    t10 = (t0 + 1144U);
    t13 = *((char **)t10);
    t10 = (t0 + 1236U);
    t18 = *((char **)t10);
    t19 = (15 - 4);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t10 = (t18 + t21);
    t23 = (t22 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 4;
    t24 = (t23 + 4U);
    *((int *)t24) = 0;
    t24 = (t23 + 8U);
    *((int *)t24) = -1;
    t25 = (0 - 4);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t26;
    t27 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t10, t22);
    t28 = (t27 - 0);
    t26 = (t28 * 1);
    t29 = (8U * t26);
    t30 = (0U + t29);
    t24 = (t0 + 2708);
    t31 = (t24 + 32U);
    t32 = *((char **)t31);
    t33 = (t32 + 40U);
    t34 = *((char **)t33);
    memcpy(t34, t13, 8U);
    xsi_driver_first_trans_delta(t24, t30, 8U, 0LL);
    goto LAB11;

LAB13:    t1 = (t0 + 1236U);
    t5 = *((char **)t1);
    t14 = (15 - 15);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t1 = (t5 + t16);
    t6 = (t0 + 5238);
    t12 = 1;
    if (11U == 10U)
        goto LAB16;

LAB17:    t12 = 0;

LAB18:    t3 = t12;
    goto LAB15;

LAB16:    t17 = 0;

LAB19:    if (t17 < 11U)
        goto LAB20;
    else
        goto LAB18;

LAB20:    t8 = (t1 + t17);
    t9 = (t6 + t17);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB17;

LAB21:    t17 = (t17 + 1);
    goto LAB19;

LAB22:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t1 = (t0 + 1236U);
    t6 = *((char **)t1);
    t14 = (15 - 4);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t1 = (t6 + t16);
    t7 = (t22 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 4;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t25 = (0 - 4);
    t17 = (t25 * -1);
    t17 = (t17 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t17;
    t27 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t1, t22);
    t28 = (t27 - 0);
    t17 = (t28 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t27);
    t19 = (8U * t17);
    t20 = (0 + t19);
    t8 = (t5 + t20);
    t9 = (t0 + 2672);
    t10 = (t9 + 32U);
    t13 = *((char **)t10);
    t18 = (t13 + 40U);
    t23 = *((char **)t18);
    memcpy(t23, t8, 8U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB11;

}


extern void work_a_3433016680_3626903770_init()
{
	static char *pe[] = {(void *)work_a_3433016680_3626903770_p_0,(void *)work_a_3433016680_3626903770_p_1};
	xsi_register_didat("work_a_3433016680_3626903770", "isim/gp_registerss_isim_beh.exe.sim/work/a_3433016680_3626903770.didat");
	xsi_register_executes(pe);
}
