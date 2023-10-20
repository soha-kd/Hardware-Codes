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
static const char *ng0 = "C:/Users/matin/Desktop/Soroush_Jahanian_hw3/multiplier/multiplier.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1547198987_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_2053728113_1035706684(char *, char *, char *, char *, char *, char *);


static void work_a_0945777706_3212880686_p_0(char *t0)
{
    char t5[16];
    char t18[16];
    char t20[16];
    char t28[16];
    char t30[16];
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t17;
    char *t19;
    char *t21;
    char *t22;
    int t23;
    unsigned int t24;
    char *t26;
    char *t27;
    char *t29;
    char *t31;
    char *t32;
    int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned char t37;
    char *t38;
    int t39;
    int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 5783);
    *((int *)t1) = 0;
    t2 = (t0 + 5787);
    *((int *)t2) = 3;
    t3 = 0;
    t4 = 3;

LAB2:    if (t3 <= t4)
        goto LAB3;

LAB5:    t1 = (t0 + 3240);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(50, ng0);
    t6 = (t0 + 1192U);
    t7 = *((char **)t6);
    t6 = (t0 + 5783);
    t8 = *((int *)t6);
    t9 = (t8 - 4);
    t10 = (t9 * -1);
    xsi_vhdl_check_range_of_index(4, 0, -1, *((int *)t6));
    t11 = (1U * t10);
    t12 = (0 + t11);
    t13 = (t7 + t12);
    t14 = *((unsigned char *)t13);
    t15 = (t0 + 5791);
    t19 = ((IEEE_P_1242562249) + 3000);
    t21 = (t20 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 0;
    t22 = (t21 + 4U);
    *((int *)t22) = 3;
    t22 = (t21 + 8U);
    *((int *)t22) = 1;
    t23 = (3 - 0);
    t24 = (t23 * 1);
    t24 = (t24 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t24;
    t17 = xsi_base_array_concat(t17, t18, t19, (char)99, t14, (char)97, t15, t20, (char)101);
    t22 = (t0 + 5795);
    t26 = (t0 + 1032U);
    t27 = *((char **)t26);
    t29 = ((IEEE_P_1242562249) + 3000);
    t31 = (t30 + 0U);
    t32 = (t31 + 0U);
    *((int *)t32) = 0;
    t32 = (t31 + 4U);
    *((int *)t32) = 1;
    t32 = (t31 + 8U);
    *((int *)t32) = 1;
    t33 = (1 - 0);
    t24 = (t33 * 1);
    t24 = (t24 + 1);
    t32 = (t31 + 12U);
    *((unsigned int *)t32) = t24;
    t32 = (t0 + 5632U);
    t26 = xsi_base_array_concat(t26, t28, t29, (char)97, t22, t30, (char)97, t27, t32, (char)101);
    t34 = ieee_p_1242562249_sub_2053728113_1035706684(IEEE_P_1242562249, t5, t17, t18, t26, t28);
    t35 = (t5 + 12U);
    t24 = *((unsigned int *)t35);
    t36 = (1U * t24);
    t37 = (9U != t36);
    if (t37 == 1)
        goto LAB6;

LAB7:    t38 = (t0 + 5783);
    t39 = *((int *)t38);
    t40 = (t39 - 0);
    t41 = (t40 * 1);
    t42 = (9U * t41);
    t43 = (0U + t42);
    t44 = (t0 + 3336);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memcpy(t48, t34, 9U);
    xsi_driver_first_trans_delta(t44, t43, 9U, 0LL);

LAB4:    t1 = (t0 + 5783);
    t3 = *((int *)t1);
    t2 = (t0 + 5787);
    t4 = *((int *)t2);
    if (t3 == t4)
        goto LAB5;

LAB8:    t8 = (t3 + 1);
    t3 = t8;
    t6 = (t0 + 5783);
    *((int *)t6) = t3;
    goto LAB2;

LAB6:    xsi_size_not_matching(9U, t36, 0);
    goto LAB7;

}

static void work_a_0945777706_3212880686_p_1(char *t0)
{
    char t1[16];
    char t2[16];
    char t3[16];
    char t4[16];
    char t11[16];
    char t20[16];
    char t30[16];
    char t40[16];
    char t50[16];
    char *t5;
    char *t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    char *t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    char *t21;
    char *t22;
    int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    char *t31;
    char *t32;
    int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    char *t41;
    char *t42;
    int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    char *t51;
    char *t52;
    int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned char t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;

LAB0:    xsi_set_current_line(57, ng0);
    t5 = (t0 + 1512U);
    t6 = *((char **)t5);
    t7 = (4 - 0);
    t8 = (t7 * 1);
    t9 = (9U * t8);
    t10 = (0 + t9);
    t5 = (t6 + t10);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 8;
    t13 = (t12 + 4U);
    *((int *)t13) = 0;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t14 = (0 - 8);
    t15 = (t14 * -1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t13 = (t0 + 1512U);
    t16 = *((char **)t13);
    t17 = (3 - 0);
    t15 = (t17 * 1);
    t18 = (9U * t15);
    t19 = (0 + t18);
    t13 = (t16 + t19);
    t21 = (t20 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 8;
    t22 = (t21 + 4U);
    *((int *)t22) = 0;
    t22 = (t21 + 8U);
    *((int *)t22) = -1;
    t23 = (0 - 8);
    t24 = (t23 * -1);
    t24 = (t24 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t24;
    t22 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t4, t5, t11, t13, t20);
    t25 = (t0 + 1512U);
    t26 = *((char **)t25);
    t27 = (2 - 0);
    t24 = (t27 * 1);
    t28 = (9U * t24);
    t29 = (0 + t28);
    t25 = (t26 + t29);
    t31 = (t30 + 0U);
    t32 = (t31 + 0U);
    *((int *)t32) = 8;
    t32 = (t31 + 4U);
    *((int *)t32) = 0;
    t32 = (t31 + 8U);
    *((int *)t32) = -1;
    t33 = (0 - 8);
    t34 = (t33 * -1);
    t34 = (t34 + 1);
    t32 = (t31 + 12U);
    *((unsigned int *)t32) = t34;
    t32 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t3, t22, t4, t25, t30);
    t35 = (t0 + 1512U);
    t36 = *((char **)t35);
    t37 = (1 - 0);
    t34 = (t37 * 1);
    t38 = (9U * t34);
    t39 = (0 + t38);
    t35 = (t36 + t39);
    t41 = (t40 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = 8;
    t42 = (t41 + 4U);
    *((int *)t42) = 0;
    t42 = (t41 + 8U);
    *((int *)t42) = -1;
    t43 = (0 - 8);
    t44 = (t43 * -1);
    t44 = (t44 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t44;
    t42 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t2, t32, t3, t35, t40);
    t45 = (t0 + 1512U);
    t46 = *((char **)t45);
    t47 = (0 - 0);
    t44 = (t47 * 1);
    t48 = (9U * t44);
    t49 = (0 + t48);
    t45 = (t46 + t49);
    t51 = (t50 + 0U);
    t52 = (t51 + 0U);
    *((int *)t52) = 8;
    t52 = (t51 + 4U);
    *((int *)t52) = 0;
    t52 = (t51 + 8U);
    *((int *)t52) = -1;
    t53 = (0 - 8);
    t54 = (t53 * -1);
    t54 = (t54 + 1);
    t52 = (t51 + 12U);
    *((unsigned int *)t52) = t54;
    t52 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t1, t42, t2, t45, t50);
    t55 = (t1 + 12U);
    t54 = *((unsigned int *)t55);
    t56 = (1U * t54);
    t57 = (9U != t56);
    if (t57 == 1)
        goto LAB2;

LAB3:    t58 = (t0 + 3400);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    memcpy(t62, t52, 9U);
    xsi_driver_first_trans_fast_port(t58);
    t5 = (t0 + 3256);
    *((int *)t5) = 1;

LAB1:    return;
LAB2:    xsi_size_not_matching(9U, t56, 0);
    goto LAB3;

}


extern void work_a_0945777706_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0945777706_3212880686_p_0,(void *)work_a_0945777706_3212880686_p_1};
	xsi_register_didat("work_a_0945777706_3212880686", "isim/multiplier_tb_isim_beh.exe.sim/work/a_0945777706_3212880686.didat");
	xsi_register_executes(pe);
}
