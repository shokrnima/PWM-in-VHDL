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
static const char *ng0 = "C:/Users/Nima/Desktop/PP/pwm/pwm.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_2546454082_3965413181(char *, char *, char *, int );
unsigned char ieee_p_3620187407_sub_4060537613_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );


static void work_a_0097133789_3212880686_p_0(char *t0)
{
    char t6[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB16;

LAB17:
LAB3:    t1 = (t0 + 3632);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1312U);
    t5 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t5 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3840);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(50, ng0);
    t7 = (t0 + 1832U);
    t8 = *((char **)t7);
    t7 = (t0 + 5732U);
    t9 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t6, t8, t7, (unsigned char)3);
    t10 = (t6 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = (1U * t11);
    t13 = (8U != t12);
    if (t13 == 1)
        goto LAB8;

LAB9:    t14 = (t0 + 3712);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 8U);
    xsi_driver_first_trans_fast(t14);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 5732U);
    t3 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t2, t1, 193);
    if (t3 != 0)
        goto LAB10;

LAB12:
LAB11:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 5732U);
    t7 = (t0 + 1992U);
    t8 = *((char **)t7);
    t7 = (t0 + 5748U);
    t3 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t2, t1, t8, t7);
    if (t3 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 3776);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB14:    goto LAB6;

LAB8:    xsi_size_not_matching(8U, t12, 0);
    goto LAB9;

LAB10:    xsi_set_current_line(52, ng0);
    t7 = (t0 + 5800);
    t9 = (t0 + 3712);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 8U);
    xsi_driver_first_trans_fast(t9);
    goto LAB11;

LAB13:    xsi_set_current_line(55, ng0);
    t9 = (t0 + 3776);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);
    goto LAB14;

LAB16:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 5808);
    t8 = (t0 + 3712);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t1, 8U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 3776);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 3840);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1152U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB18;

LAB20:
LAB19:    goto LAB3;

LAB18:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1032U);
    t7 = *((char **)t2);
    t2 = (t0 + 3904);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t7, 8U);
    xsi_driver_first_trans_fast(t2);
    goto LAB19;

}


extern void work_a_0097133789_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0097133789_3212880686_p_0};
	xsi_register_didat("work_a_0097133789_3212880686", "isim/pwm_isim_beh.exe.sim/work/a_0097133789_3212880686.didat");
	xsi_register_executes(pe);
}
