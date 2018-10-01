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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_3620187407;
char *IEEE_P_3499444699;
char *WORK_P_0599277782;
char *IEEE_P_0774719531;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    work_p_0599277782_init();
    ieee_p_3499444699_init();
    ieee_p_0774719531_init();
    ieee_p_3620187407_init();
    work_a_0989759141_2164148148_init();
    work_a_2097847708_2164148148_init();
    work_a_3199023679_2995317124_init();
    work_a_0832606739_2725559894_init();
    work_a_2685166297_1516540902_init();
    work_a_3628672710_2164148148_init();
    work_a_2399776393_3027548060_init();
    work_a_3853510154_1351276808_init();
    work_a_1062181665_1062181665_init();


    xsi_register_tops("work_a_1062181665_1062181665");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    WORK_P_0599277782 = xsi_get_engine_memory("work_p_0599277782");
    IEEE_P_0774719531 = xsi_get_engine_memory("ieee_p_0774719531");

    return xsi_run_simulation(argc, argv);

}
