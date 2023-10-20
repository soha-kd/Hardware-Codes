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
static const char *ng0 = "C:/Users/ASUS/Desktop/v2/v2/multiplier.vhd";



static void work_a_0945777706_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    char *t21;
    int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned char t28;
    unsigned char t29;
    char *t30;
    char *t31;
    char *t32;
    int t33;
    int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;

LAB0:    xsi_set_current_line(18, ng0);
    t1 = (t0 + 4726);
    *((int *)t1) = 0;
    t2 = (t0 + 4730);
    *((int *)t2) = 3;
    t3 = 0;
    t4 = 3;

LAB2:    if (t3 <= t4)
        goto LAB3;

LAB5:    xsi_set_current_line(25, ng0);
    t1 = (t0 + 1648U);
    t2 = *((char **)t1);
    t1 = (t0 + 3032);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 9U);
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 2952);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(19, ng0);
    t5 = (t0 + 4734);
    *((int *)t5) = 0;
    t6 = (t0 + 4738);
    *((int *)t6) = 4;
    t7 = 0;
    t8 = 4;

LAB6:    if (t7 <= t8)
        goto LAB7;

LAB9:
LAB4:    t1 = (t0 + 4726);
    t3 = *((int *)t1);
    t2 = (t0 + 4730);
    t4 = *((int *)t2);
    if (t3 == t4)
        goto LAB5;

LAB17:    t7 = (t3 + 1);
    t3 = t7;
    t5 = (t0 + 4726);
    *((int *)t5) = t3;
    goto LAB2;

LAB7:    xsi_set_current_line(20, ng0);
    t10 = (t0 + 1032U);
    t11 = *((char **)t10);
    t10 = (t0 + 4726);
    t12 = *((int *)t10);
    t13 = (t12 - 3);
    t14 = (t13 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, *((int *)t10));
    t15 = (1U * t14);
    t16 = (0 + t15);
    t17 = (t11 + t16);
    t18 = *((unsigned char *)t17);
    t19 = (t18 == (unsigned char)3);
    if (t19 == 1)
        goto LAB13;

LAB14:    t9 = (unsigned char)0;

LAB15:    if (t9 != 0)
        goto LAB10;

LAB12:
LAB11:
LAB8:    t1 = (t0 + 4734);
    t7 = *((int *)t1);
    t2 = (t0 + 4738);
    t8 = *((int *)t2);
    if (t7 == t8)
        goto LAB9;

LAB16:    t12 = (t7 + 1);
    t7 = t12;
    t5 = (t0 + 4734);
    *((int *)t5) = t7;
    goto LAB6;

LAB10:    xsi_set_current_line(21, ng0);
    t30 = (t0 + 1648U);
    t31 = *((char **)t30);
    t30 = (t0 + 4726);
    t32 = (t0 + 4734);
    t33 = *((int *)t30);
    t34 = *((int *)t32);
    t35 = (t33 + t34);
    t36 = (t35 - 8);
    t37 = (t36 * -1);
    xsi_vhdl_check_range_of_index(8, 0, -1, t35);
    t38 = (1U * t37);
    t39 = (0 + t38);
    t40 = (t31 + t39);
    *((unsigned char *)t40) = (unsigned char)3;
    goto LAB11;

LAB13:    t20 = (t0 + 1192U);
    t21 = *((char **)t20);
    t20 = (t0 + 4734);
    t22 = *((int *)t20);
    t23 = (t22 - 4);
    t24 = (t23 * -1);
    xsi_vhdl_check_range_of_index(4, 0, -1, *((int *)t20));
    t25 = (1U * t24);
    t26 = (0 + t25);
    t27 = (t21 + t26);
    t28 = *((unsigned char *)t27);
    t29 = (t28 == (unsigned char)3);
    t9 = t29;
    goto LAB15;

}


extern void work_a_0945777706_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0945777706_3212880686_p_0};
	xsi_register_didat("work_a_0945777706_3212880686", "isim/testbench_multiplier_isim_beh.exe.sim/work/a_0945777706_3212880686.didat");
	xsi_register_executes(pe);
}
