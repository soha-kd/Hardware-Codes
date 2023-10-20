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
static const char *ng0 = "C:/Users/Fatima/Desktop/hw5/az5.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_3313655995_3212880686_p_0(char *t0)
{
    char t29[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    int t19;
    char *t20;
    int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t30;
    unsigned int t31;
    unsigned char t32;

LAB0:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 6341);
    t4 = xsi_mem_cmp(t1, t2, 3U);
    if (t4 == 1)
        goto LAB3;

LAB11:    t5 = (t0 + 6344);
    t7 = xsi_mem_cmp(t5, t2, 3U);
    if (t7 == 1)
        goto LAB4;

LAB12:    t8 = (t0 + 6347);
    t10 = xsi_mem_cmp(t8, t2, 3U);
    if (t10 == 1)
        goto LAB5;

LAB13:    t11 = (t0 + 6350);
    t13 = xsi_mem_cmp(t11, t2, 3U);
    if (t13 == 1)
        goto LAB6;

LAB14:    t14 = (t0 + 6353);
    t16 = xsi_mem_cmp(t14, t2, 3U);
    if (t16 == 1)
        goto LAB7;

LAB15:    t17 = (t0 + 6356);
    t19 = xsi_mem_cmp(t17, t2, 3U);
    if (t19 == 1)
        goto LAB8;

LAB16:    t20 = (t0 + 6359);
    t22 = xsi_mem_cmp(t20, t2, 3U);
    if (t22 == 1)
        goto LAB9;

LAB17:
LAB10:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 6362);
    t3 = (t0 + 4240);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:    t1 = (t0 + 4128);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(29, ng0);
    t23 = (t0 + 1032U);
    t24 = *((char **)t23);
    t23 = (t0 + 4240);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t24, 4U);
    xsi_driver_first_trans_fast_port(t23);
    goto LAB2;

LAB4:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 4240);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6224U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 6240U);
    t6 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t29, t2, t1, t5, t3);
    t8 = (t29 + 12U);
    t30 = *((unsigned int *)t8);
    t31 = (1U * t30);
    t32 = (4U != t31);
    if (t32 == 1)
        goto LAB19;

LAB20:    t9 = (t0 + 4240);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 4U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB6:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6224U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 6240U);
    t6 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t29, t2, t1, t5, t3);
    t8 = (t29 + 12U);
    t30 = *((unsigned int *)t8);
    t31 = (1U * t30);
    t32 = (4U != t31);
    if (t32 == 1)
        goto LAB21;

LAB22:    t9 = (t0 + 4240);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 4U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB7:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6224U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 6240U);
    t6 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t29, t2, t1, t5, t3);
    t8 = (t29 + 12U);
    t30 = *((unsigned int *)t8);
    t31 = (1U * t30);
    t32 = (4U != t31);
    if (t32 == 1)
        goto LAB23;

LAB24:    t9 = (t0 + 4240);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 4U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB8:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6224U);
    t3 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t29, t2, t1);
    t5 = (t29 + 12U);
    t30 = *((unsigned int *)t5);
    t31 = (1U * t30);
    t32 = (4U != t31);
    if (t32 == 1)
        goto LAB25;

LAB26:    t6 = (t0 + 4240);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 4U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB2;

LAB9:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 6240U);
    t3 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t29, t2, t1);
    t5 = (t29 + 12U);
    t30 = *((unsigned int *)t5);
    t31 = (1U * t30);
    t32 = (4U != t31);
    if (t32 == 1)
        goto LAB27;

LAB28:    t6 = (t0 + 4240);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 4U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB2;

LAB18:;
LAB19:    xsi_size_not_matching(4U, t31, 0);
    goto LAB20;

LAB21:    xsi_size_not_matching(4U, t31, 0);
    goto LAB22;

LAB23:    xsi_size_not_matching(4U, t31, 0);
    goto LAB24;

LAB25:    xsi_size_not_matching(4U, t31, 0);
    goto LAB26;

LAB27:    xsi_size_not_matching(4U, t31, 0);
    goto LAB28;

}

static void work_a_3313655995_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB5;

LAB6:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 6366);
    t5 = (t0 + 4304);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);

LAB3:    t1 = (t0 + 4144);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1032U);
    t5 = *((char **)t1);
    t6 = (0 - 3);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t5 + t9);
    t10 = *((unsigned char *)t1);
    t11 = (t0 + 4304);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t10;
    xsi_driver_first_trans_delta(t11, 3U, 1, 0LL);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t6 = (1 - 3);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 4304);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t3;
    xsi_driver_first_trans_delta(t5, 2U, 1, 0LL);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t6 = (2 - 3);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 4304);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t3;
    xsi_driver_first_trans_delta(t5, 1U, 1, 0LL);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t6 = (3 - 3);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 4304);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t3;
    xsi_driver_first_trans_delta(t5, 0U, 1, 0LL);
    goto LAB3;

LAB5:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 4304);
    t5 = (t1 + 56U);
    t11 = *((char **)t5);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t6 = (0 - 3);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 4304);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t3;
    xsi_driver_first_trans_delta(t5, 2U, 1, 0LL);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t6 = (1 - 3);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 4304);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t3;
    xsi_driver_first_trans_delta(t5, 1U, 1, 0LL);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t6 = (2 - 3);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 4304);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t3;
    xsi_driver_first_trans_delta(t5, 0U, 1, 0LL);
    goto LAB3;

}

static void work_a_3313655995_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    static char *nl0[] = {&&LAB5, &&LAB5, &&LAB3, &&LAB4, &&LAB5, &&LAB5, &&LAB5, &&LAB5, &&LAB5};

LAB0:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 4160);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(63, ng0);
    t4 = (t0 + 1512U);
    t5 = *((char **)t4);
    t4 = (t0 + 4368);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 4U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB4:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 4368);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 6370);
    t4 = (t0 + 4368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

}


extern void work_a_3313655995_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3313655995_3212880686_p_0,(void *)work_a_3313655995_3212880686_p_1,(void *)work_a_3313655995_3212880686_p_2};
	xsi_register_didat("work_a_3313655995_3212880686", "isim/hw5_test_isim_beh.exe.sim/work/a_3313655995_3212880686.didat");
	xsi_register_executes(pe);
}
