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
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {67, 0};
static int ng3[] = {4, 0};
static int ng4[] = {1, 0};
static int ng5[] = {2, 0};
static int ng6[] = {3, 0};



static void Always_29_0(char *t0)
{
    char t4[24];
    char t8[8];
    char t17[8];
    char t25[8];
    char t50[8];
    char t60[8];
    char t69[8];
    char t84[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    unsigned int t92;
    int t93;

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
    t5 = ((char*)((ng1)));
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    xsi_vlogtype_concat(t4, 68, 68, 2U, t7, 64, t5, 4);
    t6 = (t0 + 1768);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 68);
    xsi_set_current_line(31, ng0);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_greatereq(t8, 32, t5, 32, t6, 32);
    t7 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB7;

LAB8:    goto LAB2;

LAB7:    xsi_set_current_line(32, ng0);

LAB9:    xsi_set_current_line(33, ng0);
    t14 = (t0 + 1768);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t18 = (t0 + 1768);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 1608);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    xsi_vlog_generic_get_index_select_value(t17, 32, t16, t20, 2, t23, 32, 1);
    t24 = ((char*)((ng4)));
    memset(t25, 0, 8);
    t26 = (t17 + 4);
    t27 = (t24 + 4);
    t28 = *((unsigned int *)t17);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = *((unsigned int *)t26);
    t32 = *((unsigned int *)t27);
    t33 = (t31 ^ t32);
    t34 = (t30 | t33);
    t35 = *((unsigned int *)t26);
    t36 = *((unsigned int *)t27);
    t37 = (t35 | t36);
    t38 = (~(t37));
    t39 = (t34 & t38);
    if (t39 != 0)
        goto LAB13;

LAB10:    if (t37 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t25) = 1;

LAB13:    t41 = (t25 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t25);
    t45 = (t44 & t43);
    t46 = (t45 != 0);
    if (t46 > 0)
        goto LAB14;

LAB15:
LAB16:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 32, t5, 32, t6, 32);
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB6;

LAB12:    t40 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(34, ng0);

LAB17:    xsi_set_current_line(35, ng0);
    t47 = (t0 + 1768);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t51 = (t0 + 1768);
    t52 = (t51 + 72U);
    t53 = *((char **)t52);
    t54 = (t0 + 1608);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    xsi_vlog_generic_get_index_select_value(t50, 1, t49, t53, 2, t56, 32, 1);
    t57 = (t0 + 1928);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    memset(t60, 0, 8);
    t61 = (t60 + 4);
    t62 = (t59 + 4);
    t63 = *((unsigned int *)t59);
    t64 = (t63 >> 4);
    t65 = (t64 & 1);
    *((unsigned int *)t60) = t65;
    t66 = *((unsigned int *)t62);
    t67 = (t66 >> 4);
    t68 = (t67 & 1);
    *((unsigned int *)t61) = t68;
    t70 = *((unsigned int *)t50);
    t71 = *((unsigned int *)t60);
    t72 = (t70 ^ t71);
    *((unsigned int *)t69) = t72;
    t73 = (t50 + 4);
    t74 = (t60 + 4);
    t75 = (t69 + 4);
    t76 = *((unsigned int *)t73);
    t77 = *((unsigned int *)t74);
    t78 = (t76 | t77);
    *((unsigned int *)t75) = t78;
    t79 = *((unsigned int *)t75);
    t80 = (t79 != 0);
    if (t80 == 1)
        goto LAB18;

LAB19:
LAB20:    t83 = (t0 + 1768);
    t85 = (t0 + 1768);
    t86 = (t85 + 72U);
    t87 = *((char **)t86);
    t88 = (t0 + 1608);
    t89 = (t88 + 56U);
    t90 = *((char **)t89);
    xsi_vlog_generic_convert_bit_index(t84, t87, 2, t90, 32, 1);
    t91 = (t84 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (!(t92));
    if (t93 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1768);
    t7 = (t6 + 72U);
    t14 = *((char **)t7);
    t15 = (t0 + 1608);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    t19 = ((char*)((ng4)));
    memset(t17, 0, 8);
    xsi_vlog_signed_minus(t17, 32, t18, 32, t19, 32);
    xsi_vlog_generic_get_index_select_value(t8, 1, t5, t14, 2, t17, 32, 1);
    t20 = (t0 + 1928);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t25, 0, 8);
    t23 = (t25 + 4);
    t24 = (t22 + 4);
    t9 = *((unsigned int *)t22);
    t10 = (t9 >> 3);
    t11 = (t10 & 1);
    *((unsigned int *)t25) = t11;
    t12 = *((unsigned int *)t24);
    t13 = (t12 >> 3);
    t28 = (t13 & 1);
    *((unsigned int *)t23) = t28;
    t29 = *((unsigned int *)t8);
    t30 = *((unsigned int *)t25);
    t31 = (t29 ^ t30);
    *((unsigned int *)t50) = t31;
    t26 = (t8 + 4);
    t27 = (t25 + 4);
    t40 = (t50 + 4);
    t32 = *((unsigned int *)t26);
    t33 = *((unsigned int *)t27);
    t34 = (t32 | t33);
    *((unsigned int *)t40) = t34;
    t35 = *((unsigned int *)t40);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB23;

LAB24:
LAB25:    t41 = (t0 + 1768);
    t47 = (t0 + 1768);
    t48 = (t47 + 72U);
    t49 = *((char **)t48);
    t51 = (t0 + 1608);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    t54 = ((char*)((ng4)));
    memset(t69, 0, 8);
    xsi_vlog_signed_minus(t69, 32, t53, 32, t54, 32);
    xsi_vlog_generic_convert_bit_index(t60, t49, 2, t69, 32, 1);
    t55 = (t60 + 4);
    t39 = *((unsigned int *)t55);
    t93 = (!(t39));
    if (t93 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1768);
    t7 = (t6 + 72U);
    t14 = *((char **)t7);
    t15 = (t0 + 1608);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    t19 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_signed_minus(t17, 32, t18, 32, t19, 32);
    xsi_vlog_generic_get_index_select_value(t8, 1, t5, t14, 2, t17, 32, 1);
    t20 = (t0 + 1928);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t25, 0, 8);
    t23 = (t25 + 4);
    t24 = (t22 + 4);
    t9 = *((unsigned int *)t22);
    t10 = (t9 >> 2);
    t11 = (t10 & 1);
    *((unsigned int *)t25) = t11;
    t12 = *((unsigned int *)t24);
    t13 = (t12 >> 2);
    t28 = (t13 & 1);
    *((unsigned int *)t23) = t28;
    t29 = *((unsigned int *)t8);
    t30 = *((unsigned int *)t25);
    t31 = (t29 ^ t30);
    *((unsigned int *)t50) = t31;
    t26 = (t8 + 4);
    t27 = (t25 + 4);
    t40 = (t50 + 4);
    t32 = *((unsigned int *)t26);
    t33 = *((unsigned int *)t27);
    t34 = (t32 | t33);
    *((unsigned int *)t40) = t34;
    t35 = *((unsigned int *)t40);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB28;

LAB29:
LAB30:    t41 = (t0 + 1768);
    t47 = (t0 + 1768);
    t48 = (t47 + 72U);
    t49 = *((char **)t48);
    t51 = (t0 + 1608);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    t54 = ((char*)((ng5)));
    memset(t69, 0, 8);
    xsi_vlog_signed_minus(t69, 32, t53, 32, t54, 32);
    xsi_vlog_generic_convert_bit_index(t60, t49, 2, t69, 32, 1);
    t55 = (t60 + 4);
    t39 = *((unsigned int *)t55);
    t93 = (!(t39));
    if (t93 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1768);
    t7 = (t6 + 72U);
    t14 = *((char **)t7);
    t15 = (t0 + 1608);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    t19 = ((char*)((ng6)));
    memset(t17, 0, 8);
    xsi_vlog_signed_minus(t17, 32, t18, 32, t19, 32);
    xsi_vlog_generic_get_index_select_value(t8, 1, t5, t14, 2, t17, 32, 1);
    t20 = (t0 + 1928);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t25, 0, 8);
    t23 = (t25 + 4);
    t24 = (t22 + 4);
    t9 = *((unsigned int *)t22);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t25) = t11;
    t12 = *((unsigned int *)t24);
    t13 = (t12 >> 1);
    t28 = (t13 & 1);
    *((unsigned int *)t23) = t28;
    t29 = *((unsigned int *)t8);
    t30 = *((unsigned int *)t25);
    t31 = (t29 ^ t30);
    *((unsigned int *)t50) = t31;
    t26 = (t8 + 4);
    t27 = (t25 + 4);
    t40 = (t50 + 4);
    t32 = *((unsigned int *)t26);
    t33 = *((unsigned int *)t27);
    t34 = (t32 | t33);
    *((unsigned int *)t40) = t34;
    t35 = *((unsigned int *)t40);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB33;

LAB34:
LAB35:    t41 = (t0 + 1768);
    t47 = (t0 + 1768);
    t48 = (t47 + 72U);
    t49 = *((char **)t48);
    t51 = (t0 + 1608);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    t54 = ((char*)((ng6)));
    memset(t69, 0, 8);
    xsi_vlog_signed_minus(t69, 32, t53, 32, t54, 32);
    xsi_vlog_generic_convert_bit_index(t60, t49, 2, t69, 32, 1);
    t55 = (t60 + 4);
    t39 = *((unsigned int *)t55);
    t93 = (!(t39));
    if (t93 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1768);
    t7 = (t6 + 72U);
    t14 = *((char **)t7);
    t15 = (t0 + 1608);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    t19 = ((char*)((ng3)));
    memset(t17, 0, 8);
    xsi_vlog_signed_minus(t17, 32, t18, 32, t19, 32);
    xsi_vlog_generic_get_index_select_value(t8, 1, t5, t14, 2, t17, 32, 1);
    t20 = (t0 + 1928);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t25, 0, 8);
    t23 = (t25 + 4);
    t24 = (t22 + 4);
    t9 = *((unsigned int *)t22);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t25) = t11;
    t12 = *((unsigned int *)t24);
    t13 = (t12 >> 0);
    t28 = (t13 & 1);
    *((unsigned int *)t23) = t28;
    t29 = *((unsigned int *)t8);
    t30 = *((unsigned int *)t25);
    t31 = (t29 ^ t30);
    *((unsigned int *)t50) = t31;
    t26 = (t8 + 4);
    t27 = (t25 + 4);
    t40 = (t50 + 4);
    t32 = *((unsigned int *)t26);
    t33 = *((unsigned int *)t27);
    t34 = (t32 | t33);
    *((unsigned int *)t40) = t34;
    t35 = *((unsigned int *)t40);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB38;

LAB39:
LAB40:    t41 = (t0 + 1768);
    t47 = (t0 + 1768);
    t48 = (t47 + 72U);
    t49 = *((char **)t48);
    t51 = (t0 + 1608);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    t54 = ((char*)((ng3)));
    memset(t69, 0, 8);
    xsi_vlog_signed_minus(t69, 32, t53, 32, t54, 32);
    xsi_vlog_generic_convert_bit_index(t60, t49, 2, t69, 32, 1);
    t55 = (t60 + 4);
    t39 = *((unsigned int *)t55);
    t93 = (!(t39));
    if (t93 == 1)
        goto LAB41;

LAB42:    goto LAB16;

LAB18:    t81 = *((unsigned int *)t69);
    t82 = *((unsigned int *)t75);
    *((unsigned int *)t69) = (t81 | t82);
    goto LAB20;

LAB21:    xsi_vlogvar_assign_value(t83, t69, 0, *((unsigned int *)t84), 1);
    goto LAB22;

LAB23:    t37 = *((unsigned int *)t50);
    t38 = *((unsigned int *)t40);
    *((unsigned int *)t50) = (t37 | t38);
    goto LAB25;

LAB26:    xsi_vlogvar_assign_value(t41, t50, 0, *((unsigned int *)t60), 1);
    goto LAB27;

LAB28:    t37 = *((unsigned int *)t50);
    t38 = *((unsigned int *)t40);
    *((unsigned int *)t50) = (t37 | t38);
    goto LAB30;

LAB31:    xsi_vlogvar_assign_value(t41, t50, 0, *((unsigned int *)t60), 1);
    goto LAB32;

LAB33:    t37 = *((unsigned int *)t50);
    t38 = *((unsigned int *)t40);
    *((unsigned int *)t50) = (t37 | t38);
    goto LAB35;

LAB36:    xsi_vlogvar_assign_value(t41, t50, 0, *((unsigned int *)t60), 1);
    goto LAB37;

LAB38:    t37 = *((unsigned int *)t50);
    t38 = *((unsigned int *)t40);
    *((unsigned int *)t50) = (t37 | t38);
    goto LAB40;

LAB41:    xsi_vlogvar_assign_value(t41, t50, 0, *((unsigned int *)t60), 1);
    goto LAB42;

}

static void Always_44_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3432);
    *((int *)t2) = 1;
    t3 = (t0 + 3128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t5 = (t0 + 1768);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 15U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 15U);
    t16 = (t0 + 1448);
    xsi_vlogvar_assign_value(t16, t4, 0, 0, 4);
    goto LAB2;

}


extern void work_m_00000000002621398218_0398631484_init()
{
	static char *pe[] = {(void *)Always_29_0,(void *)Always_44_1};
	xsi_register_didat("work_m_00000000002621398218_0398631484", "isim/main_test_isim_beh.exe.sim/work/m_00000000002621398218_0398631484.didat");
	xsi_register_executes(pe);
}
