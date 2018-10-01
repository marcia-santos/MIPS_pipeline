/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2007 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

/* This file is designed for use with ISim build 0xef153c89 */

#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/calazans/Desktop/MIPS_MC_com_mult/multi_div.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_4215186851_3620187407(char *, char *, char *, char *, char *, char *);


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
    char *t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    int t18;
    unsigned int t19;
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
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 812U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 704U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 2320);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(38, ng0);
    t1 = xsi_get_transient_memory(33U);
    memset(t1, 0, 33U);
    t5 = t1;
    memset(t5, (unsigned char)2, 33U);
    t6 = (t0 + 2372);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 33U);
    xsi_driver_first_trans_delta(t6, 0U, 33U, 0LL);
    xsi_set_current_line(39, ng0);
    t1 = (t0 + 636U);
    t2 = *((char **)t1);
    t1 = (t0 + 2372);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_delta(t1, 33U, 32U, 0LL);
    xsi_set_current_line(40, ng0);
    t1 = (t0 + 548U);
    t2 = *((char **)t1);
    t5 = ((IEEE_P_2592010699) + 2244);
    t6 = (t0 + 3764U);
    t1 = xsi_base_array_concat(t1, t11, t5, (char)99, (unsigned char)2, (char)97, t2, t6, (char)101);
    t7 = (t0 + 2408);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t12 = *((char **)t10);
    memcpy(t12, t1, 33U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(41, ng0);
    t1 = (t0 + 2444);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 2480);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1076U);
    t6 = *((char **)t2);
    t16 = *((unsigned char *)t6);
    t17 = (t16 == (unsigned char)2);
    if (t17 == 1)
        goto LAB13;

LAB14:    t15 = (unsigned char)0;

LAB15:    if (t15 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 1076U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)1);
    if (t4 != 0)
        goto LAB16;

LAB17:    t1 = (t0 + 1076U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB18;

LAB19:    t1 = (t0 + 1076U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)4);
    if (t4 != 0)
        goto LAB20;

LAB21:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 724U);
    t5 = *((char **)t2);
    t13 = *((unsigned char *)t5);
    t14 = (t13 == (unsigned char)3);
    t3 = t14;
    goto LAB9;

LAB10:    xsi_set_current_line(47, ng0);
    t8 = (t0 + 1164U);
    t9 = *((char **)t8);
    t24 = (32 * 2);
    t25 = (64 - t24);
    t26 = (t25 * 1U);
    t27 = (0 + t26);
    t8 = (t9 + t27);
    t10 = (t28 + 0U);
    t12 = (t10 + 0U);
    *((int *)t12) = 64;
    t12 = (t10 + 4U);
    *((int *)t12) = 32;
    t12 = (t10 + 8U);
    *((int *)t12) = -1;
    t29 = (32 - 64);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t12 = (t10 + 12U);
    *((unsigned int *)t12) = t30;
    t12 = (t0 + 1252U);
    t31 = *((char **)t12);
    t12 = (t0 + 3828U);
    t32 = ieee_p_3620187407_sub_4215186851_3620187407(IEEE_P_3620187407, t11, t8, t28, t31, t12);
    t33 = (t0 + 2372);
    t34 = (t33 + 32U);
    t35 = *((char **)t34);
    t36 = (t35 + 40U);
    t37 = *((char **)t36);
    memcpy(t37, t32, 33U);
    xsi_driver_first_trans_delta(t33, 0U, 33U, 0LL);
    goto LAB11;

LAB13:    t2 = (t0 + 1164U);
    t7 = *((char **)t2);
    t18 = (0 - 64);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t2 = (t7 + t21);
    t22 = *((unsigned char *)t2);
    t23 = (t22 == (unsigned char)3);
    t15 = t23;
    goto LAB15;

LAB16:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1164U);
    t5 = *((char **)t1);
    t18 = (32 * 2);
    t19 = (64 - t18);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t1 = (t5 + t21);
    t7 = ((IEEE_P_2592010699) + 2244);
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
    t9 = (t0 + 2372);
    t10 = (t9 + 32U);
    t12 = *((char **)t10);
    t31 = (t12 + 40U);
    t32 = *((char **)t31);
    memcpy(t32, t6, 65U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1340U);
    t2 = *((char **)t1);
    t18 = *((int *)t2);
    t24 = (t18 + 1);
    t1 = (t0 + 2444);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = t24;
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

LAB18:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1164U);
    t5 = *((char **)t1);
    t18 = (32 * 2);
    t24 = (t18 - 1);
    t19 = (64 - t24);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t1 = (t5 + t21);
    t6 = (t0 + 2516);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 64U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2480);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB11;

LAB20:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 2480);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB11;

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
    t1 = (t0 + 812U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 704U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 2328);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 2552);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1076U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (char *)((nl0) + t11);
    goto **((char **)t2);

LAB7:    t2 = (t0 + 724U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)2);
    t3 = t10;
    goto LAB9;

LAB10:    goto LAB3;

LAB11:    xsi_set_current_line(71, ng0);
    t7 = (t0 + 2552);
    t8 = (t7 + 32U);
    t12 = *((char **)t8);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    goto LAB10;

LAB12:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 2552);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB13:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1340U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t3 = (t15 == 32);
    if (t3 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 2552);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB17:    goto LAB10;

LAB14:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 2552);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB15:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 2552);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB16:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 2552);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

}


extern void work_a_2685166297_1516540902_init()
{
	static char *pe[] = {(void *)work_a_2685166297_1516540902_p_0,(void *)work_a_2685166297_1516540902_p_1};
	xsi_register_didat("work_a_2685166297_1516540902", "isim/_tmp/work/a_2685166297_1516540902.didat");
	xsi_register_executes(pe);
}
