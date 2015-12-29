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
static const char *ng0 = "C:/Users/Piotr/workspace/vlsi/vlsi_mcu/VLSI_MCU/ALU.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0832606739_1223566296_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(49, ng0);

LAB3:    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t3 = (t0 + 2372);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0832606739_1223566296_p_1(char *t0)
{
    char t5[16];
    char t23[16];
    char t41[16];
    char t55[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned char t21;
    unsigned char t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned char t39;
    unsigned char t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned char t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned char t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;

LAB0:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:    t19 = (t0 + 1144U);
    t20 = *((char **)t19);
    t21 = *((unsigned char *)t20);
    t22 = (t21 == (unsigned char)3);
    if (t22 != 0)
        goto LAB7;

LAB8:    t37 = (t0 + 868U);
    t38 = *((char **)t37);
    t39 = *((unsigned char *)t38);
    t40 = (t39 == (unsigned char)3);
    if (t40 != 0)
        goto LAB11;

LAB12:
LAB15:    t56 = (t0 + 592U);
    t57 = *((char **)t56);
    t56 = (t0 + 4036U);
    t58 = (t0 + 684U);
    t59 = *((char **)t58);
    t58 = (t0 + 4052U);
    t60 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t55, t57, t56, t59, t58);
    t61 = (t55 + 12U);
    t62 = *((unsigned int *)t61);
    t63 = (1U * t62);
    t64 = (8U != t63);
    if (t64 == 1)
        goto LAB17;

LAB18:    t65 = (t0 + 2408);
    t66 = (t65 + 32U);
    t67 = *((char **)t66);
    t68 = (t67 + 40U);
    t69 = *((char **)t68);
    memcpy(t69, t60, 8U);
    xsi_driver_first_trans_fast_port(t65);

LAB2:    t70 = (t0 + 2328);
    *((int *)t70) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 592U);
    t6 = *((char **)t1);
    t1 = (t0 + 4036U);
    t7 = (t0 + 684U);
    t8 = *((char **)t7);
    t7 = (t0 + 4052U);
    t9 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t5, t6, t1, t8, t7);
    t10 = (t5 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = (1U * t11);
    t13 = (8U != t12);
    if (t13 == 1)
        goto LAB5;

LAB6:    t14 = (t0 + 2408);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 8U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t12, 0);
    goto LAB6;

LAB7:    t19 = (t0 + 592U);
    t24 = *((char **)t19);
    t19 = (t0 + 4036U);
    t25 = (t0 + 684U);
    t26 = *((char **)t25);
    t25 = (t0 + 4052U);
    t27 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t23, t24, t19, t26, t25);
    t28 = (t23 + 12U);
    t29 = *((unsigned int *)t28);
    t30 = (1U * t29);
    t31 = (8U != t30);
    if (t31 == 1)
        goto LAB9;

LAB10:    t32 = (t0 + 2408);
    t33 = (t32 + 32U);
    t34 = *((char **)t33);
    t35 = (t34 + 40U);
    t36 = *((char **)t35);
    memcpy(t36, t27, 8U);
    xsi_driver_first_trans_fast_port(t32);
    goto LAB2;

LAB9:    xsi_size_not_matching(8U, t30, 0);
    goto LAB10;

LAB11:    t37 = (t0 + 592U);
    t42 = *((char **)t37);
    t37 = (t0 + 4036U);
    t43 = (t0 + 684U);
    t44 = *((char **)t43);
    t43 = (t0 + 4052U);
    t45 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t41, t42, t37, t44, t43);
    t46 = (t41 + 12U);
    t47 = *((unsigned int *)t46);
    t48 = (1U * t47);
    t49 = (8U != t48);
    if (t49 == 1)
        goto LAB13;

LAB14:    t50 = (t0 + 2408);
    t51 = (t50 + 32U);
    t52 = *((char **)t51);
    t53 = (t52 + 40U);
    t54 = *((char **)t53);
    memcpy(t54, t45, 8U);
    xsi_driver_first_trans_fast_port(t50);
    goto LAB2;

LAB13:    xsi_size_not_matching(8U, t48, 0);
    goto LAB14;

LAB16:    goto LAB2;

LAB17:    xsi_size_not_matching(8U, t63, 0);
    goto LAB18;

}


extern void work_a_0832606739_1223566296_init()
{
	static char *pe[] = {(void *)work_a_0832606739_1223566296_p_0,(void *)work_a_0832606739_1223566296_p_1};
	xsi_register_didat("work_a_0832606739_1223566296", "isim/CPU_isim_beh.exe.sim/work/a_0832606739_1223566296.didat");
	xsi_register_executes(pe);
}
