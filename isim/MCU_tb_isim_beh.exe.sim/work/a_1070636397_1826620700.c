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
static const char *ng0 = "C:/Users/Piotr/workspace/vlsi/vlsi_mcu/VLSI_MCU/io_port.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_1070636397_1826620700_p_0(char *t0)
{
    char t14[16];
    char t17[16];
    char t25[16];
    char t31[16];
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
    int t13;
    char *t15;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    int t24;
    char *t26;
    char *t28;
    char *t29;
    char *t32;
    char *t33;
    int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    int t38;
    char *t39;
    char *t40;
    unsigned char t41;
    unsigned char t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;

LAB0:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1712U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1780U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4060);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(59, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t5 = t1;
    memset(t5, (unsigned char)2, 8U);
    t6 = (t0 + 4112);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(59, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 4148);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(59, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 4184);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1896U);
    t6 = *((char **)t2);
    t2 = (t0 + 8352);
    t13 = xsi_mem_cmp(t2, t6, 16U);
    if (t13 == 1)
        goto LAB11;

LAB15:    t8 = (t0 + 8368);
    t10 = (t0 + 8188U);
    t15 = (t0 + 8384);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 15;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t20 = (15 - 0);
    t21 = (t20 * 1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t14, t8, t10, t15, t17);
    t22 = (t14 + 12U);
    t21 = *((unsigned int *)t22);
    t23 = (1U * t21);
    t24 = xsi_mem_cmp(t19, t6, t23);
    if (t24 == 1)
        goto LAB12;

LAB16:    t26 = (t0 + 8400);
    t28 = (t0 + 8188U);
    t29 = (t0 + 8416);
    t32 = (t31 + 0U);
    t33 = (t32 + 0U);
    *((int *)t33) = 0;
    t33 = (t32 + 4U);
    *((int *)t33) = 15;
    t33 = (t32 + 8U);
    *((int *)t33) = 1;
    t34 = (15 - 0);
    t35 = (t34 * 1);
    t35 = (t35 + 1);
    t33 = (t32 + 12U);
    *((unsigned int *)t33) = t35;
    t33 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t25, t26, t28, t29, t31);
    t36 = (t25 + 12U);
    t35 = *((unsigned int *)t36);
    t37 = (1U * t35);
    t38 = xsi_mem_cmp(t33, t6, t37);
    if (t38 == 1)
        goto LAB13;

LAB17:
LAB14:    xsi_set_current_line(73, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)4, 8U);
    t5 = (t0 + 4220);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(73, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    memset(t2, (unsigned char)4, 16U);
    t5 = (t0 + 4256);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast_port(t5);

LAB10:    goto LAB3;

LAB7:    t2 = (t0 + 1804U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB11:    xsi_set_current_line(63, ng0);
    t39 = (t0 + 2080U);
    t40 = *((char **)t39);
    t41 = *((unsigned char *)t40);
    t42 = (t41 == (unsigned char)3);
    if (t42 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 2356U);
    t2 = *((char **)t1);
    t1 = (t0 + 4220);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB20:    goto LAB10;

LAB12:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2080U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 2448U);
    t2 = *((char **)t1);
    t1 = (t0 + 4220);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB23:    goto LAB10;

LAB13:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 2080U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 2264U);
    t2 = *((char **)t1);
    t1 = (t0 + 4220);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB26:    goto LAB10;

LAB18:;
LAB19:    xsi_set_current_line(63, ng0);
    t39 = (t0 + 1988U);
    t43 = *((char **)t39);
    t39 = (t0 + 4148);
    t44 = (t39 + 32U);
    t45 = *((char **)t44);
    t46 = (t45 + 40U);
    t47 = *((char **)t46);
    memcpy(t47, t43, 8U);
    xsi_driver_first_trans_fast(t39);
    goto LAB20;

LAB22:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1988U);
    t5 = *((char **)t1);
    t1 = (t0 + 4184);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB23;

LAB25:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1988U);
    t5 = *((char **)t1);
    t1 = (t0 + 4112);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB26;

}

static void work_a_1070636397_1826620700_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(90, ng0);

LAB3:    t1 = (t0 + 2172U);
    t2 = *((char **)t1);
    t1 = (t0 + 4292);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 4068);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1070636397_1826620700_init()
{
	static char *pe[] = {(void *)work_a_1070636397_1826620700_p_0,(void *)work_a_1070636397_1826620700_p_1};
	xsi_register_didat("work_a_1070636397_1826620700", "isim/MCU_tb_isim_beh.exe.sim/work/a_1070636397_1826620700.didat");
	xsi_register_executes(pe);
}
