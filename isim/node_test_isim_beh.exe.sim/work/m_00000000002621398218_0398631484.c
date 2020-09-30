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
static const char *ng0 = "D:/com/fpga project/fpga_project/CRC.v";
static int ng1[] = {63, 0};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};



static void Always_29_0(char *t0)
{
    char t6[8];
    char t16[8];
    char t26[8];
    char t35[8];
    char t50[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    int t57;
    unsigned int t58;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3416);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 64);
    xsi_set_current_line(31, ng0);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    goto LAB2;

LAB7:    xsi_set_current_line(32, ng0);

LAB9:    xsi_set_current_line(33, ng0);
    t13 = (t0 + 1768);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 1768);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 1608);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_index_select_value(t16, 1, t15, t19, 2, t22, 32, 1);
    t23 = (t0 + 1928);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t26, 0, 8);
    t27 = (t26 + 4);
    t28 = (t25 + 4);
    t29 = *((unsigned int *)t25);
    t30 = (t29 >> 3);
    t31 = (t30 & 1);
    *((unsigned int *)t26) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 >> 3);
    t34 = (t33 & 1);
    *((unsigned int *)t27) = t34;
    t36 = *((unsigned int *)t16);
    t37 = *((unsigned int *)t26);
    t38 = (t36 ^ t37);
    *((unsigned int *)t35) = t38;
    t39 = (t16 + 4);
    t40 = (t26 + 4);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t40);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB10;

LAB11:
LAB12:    t49 = (t0 + 1928);
    t51 = (t0 + 1928);
    t52 = (t51 + 72U);
    t53 = *((char **)t52);
    t54 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t50, t53, 2, t54, 32, 1);
    t55 = (t50 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (!(t56));
    if (t57 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t29 = (t12 & 1);
    *((unsigned int *)t5) = t29;
    t13 = (t0 + 1928);
    t14 = (t0 + 1928);
    t15 = (t14 + 72U);
    t17 = *((char **)t15);
    t18 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t16, t17, 2, t18, 32, 1);
    t19 = (t16 + 4);
    t30 = *((unsigned int *)t19);
    t57 = (!(t30));
    if (t57 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    t29 = (t12 & 1);
    *((unsigned int *)t5) = t29;
    t13 = (t0 + 1928);
    t14 = (t0 + 1928);
    t15 = (t14 + 72U);
    t17 = *((char **)t15);
    t18 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t16, t17, 2, t18, 32, 1);
    t19 = (t16 + 4);
    t30 = *((unsigned int *)t19);
    t57 = (!(t30));
    if (t57 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 2);
    t29 = (t12 & 1);
    *((unsigned int *)t5) = t29;
    t13 = (t0 + 1928);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t16, 0, 8);
    t17 = (t16 + 4);
    t18 = (t15 + 4);
    t30 = *((unsigned int *)t15);
    t31 = (t30 >> 0);
    t32 = (t31 & 1);
    *((unsigned int *)t16) = t32;
    t33 = *((unsigned int *)t18);
    t34 = (t33 >> 0);
    t36 = (t34 & 1);
    *((unsigned int *)t17) = t36;
    t37 = *((unsigned int *)t6);
    t38 = *((unsigned int *)t16);
    t42 = (t37 ^ t38);
    *((unsigned int *)t26) = t42;
    t19 = (t6 + 4);
    t20 = (t16 + 4);
    t21 = (t26 + 4);
    t43 = *((unsigned int *)t19);
    t44 = *((unsigned int *)t20);
    t45 = (t43 | t44);
    *((unsigned int *)t21) = t45;
    t46 = *((unsigned int *)t21);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB19;

LAB20:
LAB21:    t22 = (t0 + 1928);
    t23 = (t0 + 1928);
    t24 = (t23 + 72U);
    t25 = *((char **)t24);
    t27 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t35, t25, 2, t27, 32, 1);
    t28 = (t35 + 4);
    t58 = *((unsigned int *)t28);
    t57 = (!(t58));
    if (t57 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB10:    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t35) = (t47 | t48);
    goto LAB12;

LAB13:    xsi_vlogvar_assign_value(t49, t35, 0, *((unsigned int *)t50), 1);
    goto LAB14;

LAB15:    xsi_vlogvar_assign_value(t13, t6, 0, *((unsigned int *)t16), 1);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t13, t6, 0, *((unsigned int *)t16), 1);
    goto LAB18;

LAB19:    t48 = *((unsigned int *)t26);
    t56 = *((unsigned int *)t21);
    *((unsigned int *)t26) = (t48 | t56);
    goto LAB21;

LAB22:    xsi_vlogvar_assign_value(t22, t26, 0, *((unsigned int *)t35), 1);
    goto LAB23;

}

static void Always_40_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3432);
    *((int *)t2) = 1;
    t3 = (t0 + 3128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1448);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB2;

}


extern void work_m_00000000002621398218_0398631484_init()
{
	static char *pe[] = {(void *)Always_29_0,(void *)Always_40_1};
	xsi_register_didat("work_m_00000000002621398218_0398631484", "isim/node_test_isim_beh.exe.sim/work/m_00000000002621398218_0398631484.didat");
	xsi_register_executes(pe);
}
