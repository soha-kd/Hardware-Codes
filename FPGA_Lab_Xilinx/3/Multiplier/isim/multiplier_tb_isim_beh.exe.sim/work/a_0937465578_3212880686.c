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
static const char *ng0 = "C:/Users/matin/Desktop/Soroush_Jahanian_hw3/multiplier/tb.vhd";
extern char *IEEE_P_1242562249;

unsigned char ieee_p_1242562249_sub_2110375371_1035706684(char *, char *, char *, char *, char *);


static void work_a_0937465578_3212880686_p_0(char *t0)
{
    char t10[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    int t11;
    unsigned int t12;
    unsigned char t13;

LAB0:    t1 = (t0 + 2512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4886);
    t4 = (t0 + 2896);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4890);
    t4 = (t0 + 2960);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(39, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2320);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 4844U);
    t4 = (t0 + 4895);
    t6 = (t10 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 7;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t11 = (7 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t12;
    t13 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t3, t2, t4, t10);
    if (t13 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 4921);
    t4 = (t0 + 2896);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 4925);
    t4 = (t0 + 2960);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(47, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2320);
    xsi_process_wait(t2, t9);

LAB12:    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t7 = (t0 + 4903);
    xsi_report(t7, 18U, (unsigned char)2);
    goto LAB9;

LAB10:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 4844U);
    t4 = (t0 + 4930);
    t6 = (t10 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 7;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t11 = (7 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t12;
    t13 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t3, t2, t4, t10);
    if (t13 == 0)
        goto LAB14;

LAB15:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 4956);
    t4 = (t0 + 2896);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4960);
    t4 = (t0 + 2960);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(55, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2320);
    xsi_process_wait(t2, t9);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB11:    goto LAB10;

LAB13:    goto LAB11;

LAB14:    t7 = (t0 + 4938);
    xsi_report(t7, 18U, (unsigned char)2);
    goto LAB15;

LAB16:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 4844U);
    t4 = (t0 + 4965);
    t6 = (t10 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 7;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t11 = (7 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t12;
    t13 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t3, t2, t4, t10);
    if (t13 == 0)
        goto LAB20;

LAB21:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 4991);
    t4 = (t0 + 2896);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 4995);
    t4 = (t0 + 2960);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(63, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2320);
    xsi_process_wait(t2, t9);

LAB24:    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    t7 = (t0 + 4973);
    xsi_report(t7, 18U, (unsigned char)2);
    goto LAB21;

LAB22:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 4844U);
    t4 = (t0 + 5000);
    t6 = (t10 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 7;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t11 = (7 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t12;
    t13 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t3, t2, t4, t10);
    if (t13 == 0)
        goto LAB26;

LAB27:    xsi_set_current_line(68, ng0);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB23:    goto LAB22;

LAB25:    goto LAB23;

LAB26:    t7 = (t0 + 5008);
    xsi_report(t7, 18U, (unsigned char)2);
    goto LAB27;

LAB28:    goto LAB2;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

}


extern void work_a_0937465578_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0937465578_3212880686_p_0};
	xsi_register_didat("work_a_0937465578_3212880686", "isim/multiplier_tb_isim_beh.exe.sim/work/a_0937465578_3212880686.didat");
	xsi_register_executes(pe);
}
