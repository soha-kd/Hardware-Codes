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
static const char *ng0 = "C:/Users/ASUS/Desktop/BCD/BCD/BCD.vhd";



static void work_a_3807574445_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    int t10;
    int t11;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);

LAB6:    t2 = (t0 + 2792);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t6 = (t0 + 2792);
    *((int *)t6) = 0;
    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1488U);
    t4 = *((char **)t2);
    t10 = *((int *)t4);
    t11 = (t10 + 1);
    t2 = (t0 + 1488U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((int *)t2) = t11;
    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1488U);
    t4 = *((char **)t2);
    t10 = *((int *)t4);
    t3 = (t10 == 10);
    if (t3 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1488U);
    t4 = *((char **)t2);
    t10 = *((int *)t4);
    t2 = (t0 + 2872);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t12 = (t7 + 56U);
    t13 = *((char **)t12);
    *((int *)t13) = t10;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB2;

LAB5:    t4 = (t0 + 992U);
    t5 = xsi_signal_has_event(t4);
    if (t5 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t6 = (t0 + 1032U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    t3 = t9;
    goto LAB10;

LAB11:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1488U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((int *)t2) = 0;
    goto LAB12;

}


extern void work_a_3807574445_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3807574445_3212880686_p_0};
	xsi_register_didat("work_a_3807574445_3212880686", "isim/test_isim_beh.exe.sim/work/a_3807574445_3212880686.didat");
	xsi_register_executes(pe);
}
