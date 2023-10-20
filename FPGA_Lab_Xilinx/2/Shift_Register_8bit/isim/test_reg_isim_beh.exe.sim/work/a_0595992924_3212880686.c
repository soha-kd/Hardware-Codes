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
static const char *ng0 = "C:/Users/ASUS/Desktop/fpga - hw2/hw2/shiftRegister.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0595992924_3212880686_p_0(char *t0)
{
    char t18[16];
    char t19[16];
    char t27[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    xsi_set_current_line(23, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(36, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t6 = (t0 + 4136);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_fast(t6);

LAB3:    t1 = (t0 + 4040);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 992U);
    t5 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t5 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(25, ng0);
    t6 = (t0 + 1352U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB11;

LAB12:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB15;

LAB16:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB19;

LAB20:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(26, ng0);
    t6 = (t0 + 1992U);
    t10 = *((char **)t6);
    t6 = (t0 + 4136);
    t11 = (t6 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t10, 8U);
    xsi_driver_first_trans_fast(t6);
    goto LAB9;

LAB11:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 2312U);
    t6 = *((char **)t1);
    t15 = (7 - 6);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t1 = (t6 + t17);
    t10 = ((IEEE_P_2592010699) + 4024);
    t11 = (t19 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 6;
    t12 = (t11 + 4U);
    *((int *)t12) = 0;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t20 = (0 - 6);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t21;
    t7 = xsi_base_array_concat(t7, t18, t10, (char)97, t1, t19, (char)99, (unsigned char)2, (char)101);
    t21 = (7U + 1U);
    t5 = (8U != t21);
    if (t5 == 1)
        goto LAB13;

LAB14:    t12 = (t0 + 4136);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t22 = (t14 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t7, 8U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB13:    xsi_size_not_matching(8U, t21, 0);
    goto LAB14;

LAB15:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 2312U);
    t6 = *((char **)t1);
    t15 = (7 - 7);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t1 = (t6 + t17);
    t10 = ((IEEE_P_2592010699) + 4024);
    t11 = (t19 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 7;
    t12 = (t11 + 4U);
    *((int *)t12) = 1;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t20 = (1 - 7);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t21;
    t7 = xsi_base_array_concat(t7, t18, t10, (char)99, (unsigned char)2, (char)97, t1, t19, (char)101);
    t21 = (1U + 7U);
    t5 = (8U != t21);
    if (t5 == 1)
        goto LAB17;

LAB18:    t12 = (t0 + 4136);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t22 = (t14 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t7, 8U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB17:    xsi_size_not_matching(8U, t21, 0);
    goto LAB18;

LAB19:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 2312U);
    t6 = *((char **)t1);
    t15 = (7 - 4);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t1 = (t6 + t17);
    t7 = (t0 + 2312U);
    t10 = *((char **)t7);
    t21 = (7 - 7);
    t24 = (t21 * 1U);
    t25 = (0 + t24);
    t7 = (t10 + t25);
    t12 = ((IEEE_P_2592010699) + 4024);
    t13 = (t19 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 4;
    t14 = (t13 + 4U);
    *((int *)t14) = 0;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t20 = (0 - 4);
    t26 = (t20 * -1);
    t26 = (t26 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t26;
    t14 = (t27 + 0U);
    t22 = (t14 + 0U);
    *((int *)t22) = 7;
    t22 = (t14 + 4U);
    *((int *)t22) = 5;
    t22 = (t14 + 8U);
    *((int *)t22) = -1;
    t28 = (5 - 7);
    t26 = (t28 * -1);
    t26 = (t26 + 1);
    t22 = (t14 + 12U);
    *((unsigned int *)t22) = t26;
    t11 = xsi_base_array_concat(t11, t18, t12, (char)97, t1, t19, (char)97, t7, t27, (char)101);
    t26 = (5U + 3U);
    t5 = (8U != t26);
    if (t5 == 1)
        goto LAB21;

LAB22:    t22 = (t0 + 4136);
    t23 = (t22 + 56U);
    t29 = *((char **)t23);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t11, 8U);
    xsi_driver_first_trans_fast(t22);
    goto LAB9;

LAB21:    xsi_size_not_matching(8U, t26, 0);
    goto LAB22;

}

static void work_a_0595992924_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(40, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 4200);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4056);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0595992924_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0595992924_3212880686_p_0,(void *)work_a_0595992924_3212880686_p_1};
	xsi_register_didat("work_a_0595992924_3212880686", "isim/test_reg_isim_beh.exe.sim/work/a_0595992924_3212880686.didat");
	xsi_register_executes(pe);
}
