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
static const char *ng0 = "C:/Users/Lucas/Desktop/MIPS_MC_com_mult/mips_multiciclo.vhd";



static void work_a_1062181665_1062181665_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(560, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = (0 + 7U);
    t1 = (t2 + t3);
    t4 = *((unsigned char *)t1);
    t5 = (t0 + 2808);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast_port(t5);

LAB2:    t10 = (t0 + 2748);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1062181665_1062181665_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(561, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = (0 + 8U);
    t1 = (t2 + t3);
    t4 = *((unsigned char *)t1);
    t5 = (t0 + 2844);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast_port(t5);

LAB2:    t10 = (t0 + 2756);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1062181665_1062181665_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(562, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = (0 + 9U);
    t1 = (t2 + t3);
    t4 = *((unsigned char *)t1);
    t5 = (t0 + 2880);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast_port(t5);

LAB2:    t10 = (t0 + 2764);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1062181665_1062181665_init()
{
	static char *pe[] = {(void *)work_a_1062181665_1062181665_p_0,(void *)work_a_1062181665_1062181665_p_1,(void *)work_a_1062181665_1062181665_p_2};
	xsi_register_didat("work_a_1062181665_1062181665", "isim/MRstd_isim_beh.exe.sim/work/a_1062181665_1062181665.didat");
	xsi_register_executes(pe);
}
