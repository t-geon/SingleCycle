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
static const char *ng0 = "C:/project/SingleCycle/tb_SingleCycle.v";
static unsigned int ng1[] = {0U, 0U};
static const char *ng2 = "mem_dump.txt";
static const char *ng3 = "w";
static int ng4[] = {0, 0};
static int ng5[] = {256, 0};
static const char *ng6 = "%b ";
static int ng7[] = {1, 0};
static int ng8[] = {2, 0};
static const char *ng9 = "%b : ";
static int ng10[] = {3, 0};
static const char *ng11 = "%h";
static const char *ng12 = "%h\n";
static int ng13[] = {4, 0};
static const char *ng14 = "reg_dump.txt";
static int ng15[] = {32, 0};
static const char *ng16 = "tb_SC.vcd";
static const char *ng17 = "SC_CPU";
static unsigned int ng18[] = {1U, 0U};



static void Always_24_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24, ng0);
    t4 = (t0 + 1448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1448);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Always_28_1(char *t0)
{
    char t6[8];
    char t28[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3664);
    *((int *)t2) = 1;
    t3 = (t0 + 3128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(29, ng0);

LAB13:    xsi_set_current_line(30, ng0);
    *((int *)t28) = xsi_vlogfile_file_open_of_cname_ctype(ng2, ng3);
    t29 = (t28 + 4);
    *((int *)t29) = 0;
    t30 = (t0 + 1768);
    xsi_vlogvar_assign_value(t30, t28, 0, 0, 32);
    xsi_set_current_line(31, ng0);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB14:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));
    xsi_set_current_line(42, ng0);
    *((int *)t6) = xsi_vlogfile_file_open_of_cname_ctype(ng14, ng3);
    t2 = (t6 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);
    xsi_set_current_line(43, ng0);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB18:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng15)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));
    goto LAB12;

LAB15:    xsi_set_current_line(31, ng0);

LAB17:    xsi_set_current_line(32, ng0);
    t8 = (t0 + 1768);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    t29 = (t0 + 5324);
    t30 = *((char **)t29);
    t31 = ((((char*)(t30))) + 56U);
    t32 = *((char **)t31);
    t33 = (t0 + 5356);
    t34 = *((char **)t33);
    t35 = ((((char*)(t34))) + 72U);
    t36 = *((char **)t35);
    t37 = (t0 + 5388);
    t38 = *((char **)t37);
    t39 = ((((char*)(t38))) + 64U);
    t40 = *((char **)t39);
    t41 = (t0 + 1928);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    xsi_vlog_generic_get_array_select_value(t28, 8, t32, t36, t40, 2, 1, t43, 32, 1);
    xsi_vlogfile_fwrite(*((unsigned int *)t22), 0, 0, 1, ng6, 2, t0, (char)118, t28, 8);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5420);
    t7 = *((char **)t5);
    t8 = ((((char*)(t7))) + 56U);
    t21 = *((char **)t8);
    t22 = (t0 + 5452);
    t29 = *((char **)t22);
    t30 = ((((char*)(t29))) + 72U);
    t31 = *((char **)t30);
    t32 = (t0 + 5484);
    t33 = *((char **)t32);
    t34 = ((((char*)(t33))) + 64U);
    t35 = *((char **)t34);
    t36 = (t0 + 1928);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng7)));
    memset(t28, 0, 8);
    xsi_vlog_signed_add(t28, 32, t38, 32, t39, 32);
    xsi_vlog_generic_get_array_select_value(t6, 8, t21, t31, t35, 2, 1, t28, 32, 1);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng6, 2, t0, (char)118, t6, 8);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5516);
    t7 = *((char **)t5);
    t8 = ((((char*)(t7))) + 56U);
    t21 = *((char **)t8);
    t22 = (t0 + 5548);
    t29 = *((char **)t22);
    t30 = ((((char*)(t29))) + 72U);
    t31 = *((char **)t30);
    t32 = (t0 + 5580);
    t33 = *((char **)t32);
    t34 = ((((char*)(t33))) + 64U);
    t35 = *((char **)t34);
    t36 = (t0 + 1928);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng8)));
    memset(t28, 0, 8);
    xsi_vlog_signed_add(t28, 32, t38, 32, t39, 32);
    xsi_vlog_generic_get_array_select_value(t6, 8, t21, t31, t35, 2, 1, t28, 32, 1);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng6, 2, t0, (char)118, t6, 8);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5612);
    t7 = *((char **)t5);
    t8 = ((((char*)(t7))) + 56U);
    t21 = *((char **)t8);
    t22 = (t0 + 5644);
    t29 = *((char **)t22);
    t30 = ((((char*)(t29))) + 72U);
    t31 = *((char **)t30);
    t32 = (t0 + 5676);
    t33 = *((char **)t32);
    t34 = ((((char*)(t33))) + 64U);
    t35 = *((char **)t34);
    t36 = (t0 + 1928);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng10)));
    memset(t28, 0, 8);
    xsi_vlog_signed_add(t28, 32, t38, 32, t39, 32);
    xsi_vlog_generic_get_array_select_value(t6, 8, t21, t31, t35, 2, 1, t28, 32, 1);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng9, 2, t0, (char)118, t6, 8);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5708);
    t7 = *((char **)t5);
    t8 = ((((char*)(t7))) + 56U);
    t21 = *((char **)t8);
    t22 = (t0 + 5740);
    t29 = *((char **)t22);
    t30 = ((((char*)(t29))) + 72U);
    t31 = *((char **)t30);
    t32 = (t0 + 5772);
    t33 = *((char **)t32);
    t34 = ((((char*)(t33))) + 64U);
    t35 = *((char **)t34);
    t36 = (t0 + 1928);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    xsi_vlog_generic_get_array_select_value(t6, 8, t21, t31, t35, 2, 1, t38, 32, 1);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng11, 2, t0, (char)118, t6, 8);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5804);
    t7 = *((char **)t5);
    t8 = ((((char*)(t7))) + 56U);
    t21 = *((char **)t8);
    t22 = (t0 + 5836);
    t29 = *((char **)t22);
    t30 = ((((char*)(t29))) + 72U);
    t31 = *((char **)t30);
    t32 = (t0 + 5868);
    t33 = *((char **)t32);
    t34 = ((((char*)(t33))) + 64U);
    t35 = *((char **)t34);
    t36 = (t0 + 1928);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng7)));
    memset(t28, 0, 8);
    xsi_vlog_signed_add(t28, 32, t38, 32, t39, 32);
    xsi_vlog_generic_get_array_select_value(t6, 8, t21, t31, t35, 2, 1, t28, 32, 1);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng11, 2, t0, (char)118, t6, 8);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5900);
    t7 = *((char **)t5);
    t8 = ((((char*)(t7))) + 56U);
    t21 = *((char **)t8);
    t22 = (t0 + 5932);
    t29 = *((char **)t22);
    t30 = ((((char*)(t29))) + 72U);
    t31 = *((char **)t30);
    t32 = (t0 + 5964);
    t33 = *((char **)t32);
    t34 = ((((char*)(t33))) + 64U);
    t35 = *((char **)t34);
    t36 = (t0 + 1928);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng8)));
    memset(t28, 0, 8);
    xsi_vlog_signed_add(t28, 32, t38, 32, t39, 32);
    xsi_vlog_generic_get_array_select_value(t6, 8, t21, t31, t35, 2, 1, t28, 32, 1);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng11, 2, t0, (char)118, t6, 8);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5996);
    t7 = *((char **)t5);
    t8 = ((((char*)(t7))) + 56U);
    t21 = *((char **)t8);
    t22 = (t0 + 6028);
    t29 = *((char **)t22);
    t30 = ((((char*)(t29))) + 72U);
    t31 = *((char **)t30);
    t32 = (t0 + 6060);
    t33 = *((char **)t32);
    t34 = ((((char*)(t33))) + 64U);
    t35 = *((char **)t34);
    t36 = (t0 + 1928);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng10)));
    memset(t28, 0, 8);
    xsi_vlog_signed_add(t28, 32, t38, 32, t39, 32);
    xsi_vlog_generic_get_array_select_value(t6, 8, t21, t31, t35, 2, 1, t28, 32, 1);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng12, 2, t0, (char)118, t6, 8);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng13)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB14;

LAB19:    xsi_set_current_line(43, ng0);

LAB21:    xsi_set_current_line(44, ng0);
    t8 = (t0 + 1768);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    t29 = (t0 + 6092);
    t30 = *((char **)t29);
    t31 = ((((char*)(t30))) + 56U);
    t32 = *((char **)t31);
    t33 = (t0 + 6124);
    t34 = *((char **)t33);
    t35 = ((((char*)(t34))) + 72U);
    t36 = *((char **)t35);
    t37 = (t0 + 6156);
    t38 = *((char **)t37);
    t39 = ((((char*)(t38))) + 64U);
    t40 = *((char **)t39);
    t41 = (t0 + 1928);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    xsi_vlog_generic_get_array_select_value(t28, 32, t32, t36, t40, 2, 1, t43, 32, 1);
    memset(t44, 0, 8);
    t45 = (t44 + 4);
    t46 = (t28 + 4);
    t14 = *((unsigned int *)t28);
    t15 = (t14 >> 24);
    *((unsigned int *)t44) = t15;
    t16 = *((unsigned int *)t46);
    t17 = (t16 >> 24);
    *((unsigned int *)t45) = t17;
    t18 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t18 & 255U);
    t19 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t19 & 255U);
    xsi_vlogfile_fwrite(*((unsigned int *)t22), 0, 0, 1, ng6, 2, t0, (char)118, t44, 8);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6188);
    t7 = *((char **)t5);
    t8 = ((((char*)(t7))) + 56U);
    t21 = *((char **)t8);
    t22 = (t0 + 6220);
    t29 = *((char **)t22);
    t30 = ((((char*)(t29))) + 72U);
    t31 = *((char **)t30);
    t32 = (t0 + 6252);
    t33 = *((char **)t32);
    t34 = ((((char*)(t33))) + 64U);
    t35 = *((char **)t34);
    t36 = (t0 + 1928);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    xsi_vlog_generic_get_array_select_value(t6, 32, t21, t31, t35, 2, 1, t38, 32, 1);
    memset(t28, 0, 8);
    t39 = (t28 + 4);
    t40 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 16);
    *((unsigned int *)t28) = t10;
    t11 = *((unsigned int *)t40);
    t12 = (t11 >> 16);
    *((unsigned int *)t39) = t12;
    t13 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t13 & 255U);
    t14 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t14 & 255U);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng6, 2, t0, (char)118, t28, 8);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6284);
    t7 = *((char **)t5);
    t8 = ((((char*)(t7))) + 56U);
    t21 = *((char **)t8);
    t22 = (t0 + 6316);
    t29 = *((char **)t22);
    t30 = ((((char*)(t29))) + 72U);
    t31 = *((char **)t30);
    t32 = (t0 + 6348);
    t33 = *((char **)t32);
    t34 = ((((char*)(t33))) + 64U);
    t35 = *((char **)t34);
    t36 = (t0 + 1928);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    xsi_vlog_generic_get_array_select_value(t6, 32, t21, t31, t35, 2, 1, t38, 32, 1);
    memset(t28, 0, 8);
    t39 = (t28 + 4);
    t40 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 8);
    *((unsigned int *)t28) = t10;
    t11 = *((unsigned int *)t40);
    t12 = (t11 >> 8);
    *((unsigned int *)t39) = t12;
    t13 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t13 & 255U);
    t14 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t14 & 255U);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng6, 2, t0, (char)118, t28, 8);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6380);
    t7 = *((char **)t5);
    t8 = ((((char*)(t7))) + 56U);
    t21 = *((char **)t8);
    t22 = (t0 + 6412);
    t29 = *((char **)t22);
    t30 = ((((char*)(t29))) + 72U);
    t31 = *((char **)t30);
    t32 = (t0 + 6444);
    t33 = *((char **)t32);
    t34 = ((((char*)(t33))) + 64U);
    t35 = *((char **)t34);
    t36 = (t0 + 1928);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    xsi_vlog_generic_get_array_select_value(t6, 32, t21, t31, t35, 2, 1, t38, 32, 1);
    memset(t28, 0, 8);
    t39 = (t28 + 4);
    t40 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t28) = t10;
    t11 = *((unsigned int *)t40);
    t12 = (t11 >> 0);
    *((unsigned int *)t39) = t12;
    t13 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t13 & 255U);
    t14 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t14 & 255U);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng9, 2, t0, (char)118, t28, 8);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6476);
    t7 = *((char **)t5);
    t8 = ((((char*)(t7))) + 56U);
    t21 = *((char **)t8);
    t22 = (t0 + 6508);
    t29 = *((char **)t22);
    t30 = ((((char*)(t29))) + 72U);
    t31 = *((char **)t30);
    t32 = (t0 + 6540);
    t33 = *((char **)t32);
    t34 = ((((char*)(t33))) + 64U);
    t35 = *((char **)t34);
    t36 = (t0 + 1928);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    xsi_vlog_generic_get_array_select_value(t6, 32, t21, t31, t35, 2, 1, t38, 32, 1);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng12, 2, t0, (char)118, t6, 32);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB18;

}

static void Initial_54_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 3344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);

LAB4:    xsi_set_current_line(55, ng0);
    xsi_vcd_dumpfile(ng16);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng4)));
    xsi_vcd_dumpvars_args(*((unsigned int *)t2), t0, (char)115, ng17, (char)101);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3152);
    xsi_process_wait(t2, 7000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3152);
    xsi_process_wait(t2, 300000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(66, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000001000236741_0963843407_init()
{
	static char *pe[] = {(void *)Always_24_0,(void *)Always_28_1,(void *)Initial_54_2};
	xsi_register_didat("work_m_00000000001000236741_0963843407", "isim/tb_SingleCycle_isim_beh.exe.sim/work/m_00000000001000236741_0963843407.didat");
	xsi_register_executes(pe);
}
