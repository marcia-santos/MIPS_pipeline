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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/VIRTUAL-BOX/MIPS_MC_com_mult/MIPS_MC_com_mult/multi_div.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_1496620905533649268_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_2685166297_1516540902_p_0(char *t0)
{
    char t11[16];
    char t28[16];
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
    unsigned int t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    unsigned char t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned char t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1312U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB9;

LAB10:    t3 = (unsigned char)0;

LAB11:    if (t3 != 0)
        goto LAB7;

LAB8:
LAB3:    t1 = (t0 + 4312);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(38, ng0);
    t1 = xsi_get_transient_memory(33U);
    memset(t1, 0, 33U);
    t5 = t1;
    memset(t5, (unsigned char)2, 33U);
    t6 = (t0 + 4408);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 33U);
    xsi_driver_first_trans_delta(t6, 0U, 33U, 0LL);
    xsi_set_current_line(39, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 4408);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_delta(t1, 33U, 32U, 0LL);
    xsi_set_current_line(40, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t5 = ((IEEE_P_2592010699) + 4000);
    t6 = (t0 + 7336U);
    t1 = xsi_base_array_concat(t1, t11, t5, (char)99, (unsigned char)2, (char)97, t2, t6, (char)101);
    t12 = (1U + 32U);
    t3 = (33U != t12);
    if (t3 == 1)
        goto LAB5;

LAB6:    t7 = (t0 + 4472);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 33U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(41, ng0);
    t1 = (t0 + 4536);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 4600);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_size_not_matching(33U, t12, 0);
    goto LAB6;

LAB7:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1992U);
    t6 = *((char **)t2);
    t17 = *((unsigned char *)t6);
    t18 = (t17 == (unsigned char)2);
    if (t18 == 1)
        goto LAB15;

LAB16:    t16 = (unsigned char)0;

LAB17:    if (t16 != 0)
        goto LAB12;

LAB14:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)1);
    if (t4 != 0)
        goto LAB20;

LAB21:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB24;

LAB25:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)4);
    if (t4 != 0)
        goto LAB26;

LAB27:
LAB13:    goto LAB3;

LAB9:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t14 = *((unsigned char *)t5);
    t15 = (t14 == (unsigned char)3);
    t3 = t15;
    goto LAB11;

LAB12:    xsi_set_current_line(47, ng0);
    t8 = (t0 + 2152U);
    t9 = *((char **)t8);
    t24 = (32 * 2);
    t25 = (64 - t24);
    t26 = (t25 * 1U);
    t27 = (0 + t26);
    t8 = (t9 + t27);
    t10 = (t28 + 0U);
    t13 = (t10 + 0U);
    *((int *)t13) = 64;
    t13 = (t10 + 4U);
    *((int *)t13) = 32;
    t13 = (t10 + 8U);
    *((int *)t13) = -1;
    t29 = (32 - 64);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t13 = (t10 + 12U);
    *((unsigned int *)t13) = t30;
    t13 = (t0 + 2312U);
    t31 = *((char **)t13);
    t13 = (t0 + 7400U);
    t32 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t11, t8, t28, t31, t13);
    t33 = (t11 + 12U);
    t30 = *((unsigned int *)t33);
    t34 = (1U * t30);
    t35 = (33U != t34);
    if (t35 == 1)
        goto LAB18;

LAB19:    t36 = (t0 + 4408);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memcpy(t40, t32, 33U);
    xsi_driver_first_trans_delta(t36, 0U, 33U, 0LL);
    goto LAB13;

LAB15:    t2 = (t0 + 2152U);
    t7 = *((char **)t2);
    t19 = (0 - 64);
    t12 = (t19 * -1);
    t20 = (1U * t12);
    t21 = (0 + t20);
    t2 = (t7 + t21);
    t22 = *((unsigned char *)t2);
    t23 = (t22 == (unsigned char)3);
    t16 = t23;
    goto LAB17;

LAB18:    xsi_size_not_matching(33U, t34, 0);
    goto LAB19;

LAB20:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 2152U);
    t5 = *((char **)t1);
    t19 = (32 * 2);
    t12 = (64 - t19);
    t20 = (t12 * 1U);
    t21 = (0 + t20);
    t1 = (t5 + t21);
    t7 = ((IEEE_P_2592010699) + 4000);
    t8 = (t28 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 64;
    t9 = (t8 + 4U);
    *((int *)t9) = 1;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t24 = (1 - 64);
    t25 = (t24 * -1);
    t25 = (t25 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t25;
    t6 = xsi_base_array_concat(t6, t11, t7, (char)99, (unsigned char)2, (char)97, t1, t28, (char)101);
    t25 = (1U + 64U);
    t14 = (65U != t25);
    if (t14 == 1)
        goto LAB22;

LAB23:    t9 = (t0 + 4408);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t31 = (t13 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t6, 65U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t19 = *((int *)t2);
    t24 = (t19 + 1);
    t1 = (t0 + 4536);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t24;
    xsi_driver_first_trans_fast(t1);
    goto LAB13;

LAB22:    xsi_size_not_matching(65U, t25, 0);
    goto LAB23;

LAB24:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 2152U);
    t5 = *((char **)t1);
    t19 = (32 * 2);
    t24 = (t19 - 1);
    t12 = (64 - t24);
    t20 = (t12 * 1U);
    t21 = (0 + t20);
    t1 = (t5 + t21);
    t6 = (t0 + 4664);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 64U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 4600);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB13;

LAB26:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 4600);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB13;

}

static void work_a_2685166297_1516540902_p_1(char *t0)
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
    char *t14;
    int t15;
    static char *nl0[] = {&&LAB11, &&LAB13, &&LAB12, &&LAB14, &&LAB15};

LAB0:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1312U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4328);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 4728);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1992U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (char *)((nl0) + t11);
    goto **((char **)t2);

LAB7:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)2);
    t3 = t10;
    goto LAB9;

LAB10:    goto LAB3;

LAB11:    xsi_set_current_line(71, ng0);
    t7 = (t0 + 4728);
    t8 = (t7 + 56U);
    t12 = *((char **)t8);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    goto LAB10;

LAB12:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 4728);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB13:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t3 = (t15 == 32);
    if (t3 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 4728);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB17:    goto LAB10;

LAB14:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 4728);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB15:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 4728);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB16:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 4728);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

}


extern void work_a_2685166297_1516540902_init()
{
	static char *pe[] = {(void *)work_a_2685166297_1516540902_p_0,(void *)work_a_2685166297_1516540902_p_1};
	xsi_register_didat("work_a_2685166297_1516540902", "isim/CPU_tb_isim_beh.exe.sim/work/a_2685166297_1516540902.didat");
	xsi_register_executes(pe);
}
