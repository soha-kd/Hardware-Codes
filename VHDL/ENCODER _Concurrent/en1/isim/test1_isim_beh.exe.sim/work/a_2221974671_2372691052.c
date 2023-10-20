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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/ASUS/Desktop/ENCODER 1/en1/test1.vhd";



static void work_a_2221974671_2372691052_p_0(char *t0)
{
    int64 t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(26, ng0);

LAB3:    t1 = (0 * 1000000LL);
    t2 = (t0 + 4367);
    t4 = (t0 + 2736);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_delta(t4, 0U, 8U, t1);
    t9 = (100 * 1000000LL);
    t10 = (t0 + 4375);
    t12 = (t0 + 2736);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 8U);
    xsi_driver_subsequent_trans_delta(t12, 0U, 8U, t9);
    t17 = (t0 + 2736);
    xsi_driver_intertial_reject(t17, t1, t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2221974671_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2221974671_2372691052_p_0};
	xsi_register_didat("work_a_2221974671_2372691052", "isim/test1_isim_beh.exe.sim/work/a_2221974671_2372691052.didat");
	xsi_register_executes(pe);
}
