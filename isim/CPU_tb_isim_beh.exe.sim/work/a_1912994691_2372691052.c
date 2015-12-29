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
static const char *ng0 = "C:/Users/Piotr/workspace/vlsi/vlsi_mcu/VLSI_MCU/CPU_tb.vhd";
extern char *STD_TEXTIO;
extern char *IEEE_P_3564397177;

void ieee_p_3564397177_sub_3988856810_91900896(char *, char *, char *, char *, char *);


static void work_a_1912994691_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 2156U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2684);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1224U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2056);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2684);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1224U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2056);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1912994691_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int64 t5;
    int64 t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 2300U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1360U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((unsigned char *)t2) = (unsigned char)1;
    t4 = (t0 + 1324U);
    xsi_variable_act(t4);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 1224U);
    t3 = *((char **)t2);
    t5 = *((int64 *)t3);
    t6 = (1.2000000000000000 * t5);
    t2 = (t0 + 2200);
    xsi_process_wait(t2, t6);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2720);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 5608);
    t4 = (t0 + 2756);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1224U);
    t3 = *((char **)t2);
    t5 = *((int64 *)t3);
    t6 = (2 * t5);
    t2 = (t0 + 2200);
    xsi_process_wait(t2, t6);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 5624);
    t4 = (t0 + 2756);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1224U);
    t3 = *((char **)t2);
    t5 = *((int64 *)t3);
    t6 = (2 * t5);
    t2 = (t0 + 2200);
    xsi_process_wait(t2, t6);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 5640);
    t4 = (t0 + 2756);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 1224U);
    t3 = *((char **)t2);
    t5 = *((int64 *)t3);
    t6 = (2 * t5);
    t2 = (t0 + 2200);
    xsi_process_wait(t2, t6);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 5656);
    t4 = (t0 + 2756);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 1224U);
    t3 = *((char **)t2);
    t5 = *((int64 *)t3);
    t6 = (2 * t5);
    t2 = (t0 + 2200);
    xsi_process_wait(t2, t6);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(119, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t3 = t2;
    memset(t3, (unsigned char)2, 16U);
    t4 = (t0 + 2756);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 1224U);
    t3 = *((char **)t2);
    t5 = *((int64 *)t3);
    t6 = (5 * t5);
    t2 = (t0 + 2200);
    xsi_process_wait(t2, t6);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    xsi_set_current_line(125, ng0);
    if ((unsigned char)0 == 0)
        goto LAB28;

LAB29:    goto LAB2;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    t2 = (t0 + 5672);
    xsi_report(t2, 19U, (unsigned char)3);
    goto LAB29;

}

static void work_a_1912994691_2372691052_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    int t13;
    unsigned int t14;
    int t15;
    int t16;
    int t17;
    unsigned int t18;
    unsigned int t19;

LAB0:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 1360U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)1);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2640);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(136, ng0);
    t1 = (t0 + 2344);
    t5 = (t0 + 1684U);
    t6 = (t0 + 1788U);
    std_textio_readline(STD_TEXTIO, t1, t5, t6);
    xsi_set_current_line(137, ng0);
    t1 = (t0 + 5692);
    *((int *)t1) = 4;
    t2 = (t0 + 5696);
    *((int *)t2) = 1;
    t7 = 4;
    t8 = 1;

LAB5:    if (t7 >= t8)
        goto LAB6;

LAB8:    xsi_set_current_line(143, ng0);
    t1 = (t0 + 1360U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)0;
    t5 = (t0 + 1324U);
    xsi_variable_act(t5);
    goto LAB3;

LAB6:    xsi_set_current_line(139, ng0);
    t5 = (t0 + 2344);
    t6 = (t0 + 1788U);
    t9 = (t0 + 1428U);
    t10 = *((char **)t9);
    t9 = (t0 + 5340U);
    ieee_p_3564397177_sub_3988856810_91900896(IEEE_P_3564397177, t5, t6, t10, t9);
    xsi_set_current_line(140, ng0);
    t1 = (t0 + 1428U);
    t2 = *((char **)t1);
    t1 = (t0 + 1496U);
    t5 = *((char **)t1);
    t1 = (t0 + 5692);
    t11 = *((int *)t1);
    t12 = (4 * t11);
    t13 = (t12 - 1);
    t14 = (15 - t13);
    t6 = (t0 + 5692);
    t15 = *((int *)t6);
    t16 = (4 * t15);
    t17 = (t16 - 4);
    xsi_vhdl_check_range_of_slice(15, 0, -1, t13, t17, -1);
    t18 = (t14 * 1U);
    t19 = (0 + t18);
    t9 = (t5 + t19);
    memcpy(t9, t2, 4U);

LAB7:    t1 = (t0 + 5692);
    t7 = *((int *)t1);
    t2 = (t0 + 5696);
    t8 = *((int *)t2);
    if (t7 == t8)
        goto LAB8;

LAB9:    t11 = (t7 + -1);
    t7 = t11;
    t5 = (t0 + 5692);
    *((int *)t5) = t7;
    goto LAB5;

}


extern void work_a_1912994691_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1912994691_2372691052_p_0,(void *)work_a_1912994691_2372691052_p_1,(void *)work_a_1912994691_2372691052_p_2};
	xsi_register_didat("work_a_1912994691_2372691052", "isim/CPU_tb_isim_beh.exe.sim/work/a_1912994691_2372691052.didat");
	xsi_register_executes(pe);
}
