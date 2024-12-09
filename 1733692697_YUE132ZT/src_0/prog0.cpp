#include"prog0.h"

int func_int_rand_1(int p_0,int p_1,int p_2,int p_3,int p_4)

{
    Container_4 var1(100, 200, 50.5f, 1.5f, 2.5f, 3.5f);
    Container_3 var2(400, 500, 60.5f);
    char var3 = 'A';
    float var4 = 25.5f;

    char var5 = var3;

    unsigned int var6 = 10;
    bool var7 = true;

    if (p_0 > 5)
    {
        Container_1* var8 = new Container_1(100, 200, 30.5f, 150, 10);
        unsigned long int var9 = 1000;
        Container_1 var10(200, 300, 40.5f, 250, 20);

        Container_4 var11(50, 60, 70.5f, 5.5f, 10.5f, 15.5f);
        double var12 = 50.0;
        char var13 = 'B';
        unsigned char var14 = 125;

        var14 = var13 + var3;
        var14 = var14 * p_1;

        var12 = var12 / p_2;
        var12 = var12 + p_4;

    }
    else
    {
        unsigned long var15 = var1.member_8;

        float var16 = 10.0f;
        char var17 = 'C';
        short int var18 = 20;

        long double var19 = 1000.0;

        var15 = var15 * p_0;
        var16 = var16 + p_3;

        if (var15 > 1000)
        {
            unsigned long var20 = var15;
            long double var21 = var19;
            long double var22 = var19;

        }
        else
        {
        }
    }
}


char func_char_rand_0(char p_0,char *p_1)

{
    Container_1 var23(10, 20, 30.0f, 40, 50);
    unsigned int var24 = 100;
    short int var25 = 5;
    double var26 = 15.0;

    Container_1* var27 = new Container_1(1, 2, 3.0f, 4, 5);

    unsigned long var28 = var27->member_3;

    if (var28 > 100) {
        short int var29 = var25;

        Container_0 var30(1, 2, 3.0f, true, 6.0f, 7, 8.0f);
        double var31 = 1.5;

        long double var32 = 2.5;
        unsigned int var33 = 3;
        unsigned int var34 = 4;

        var23.member_4 = var23.member_4 * var26;
        var29 = var29 + var23.member_4;
        var23.member_4 = var23.member_4 * var32;

        var27->member_3 = var27->member_3 + var28;
        var23.member_4 = var23.member_4 - var33;
    } else {
        unsigned long var35 = var28;
        unsigned int var36 = var24;

        short int var37 = 10;

        var23.member_4 = var23.member_4 + var24;
        var23.member_4 = var23.member_4 - var37;

        if (var35 < 50) {
            int var38 = 1;
            int var39 = 2;
            float var40 = 5.5f;
            Container_1 var41(10, 20, 30.0f, 40, 50);
            bool var42 = true;

            float var43 = var40;
            long double var44 = 3.5;

            var42 = var42 && var43 > var41.member_4;
            var43 = var43 + var44;
            var42 = var42 || var43 < var38;
        } else {
            // end if
        }
    }

    delete var27;
}


