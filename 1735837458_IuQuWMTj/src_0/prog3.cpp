#include"prog3.h"

char func10(short int p_0,double p_1)

{
    short int var72 = p_0 + static_cast<short int>(p_1);
    double var73 = p_1 + var72;
    double var74 = p_1 * p_1 + p_0;

    var72 += p_0 * 2;
    var73 *= 2.0;
    var74 -= p_1 / 2.0;

    if (p_0 > 0) {
        short int var75 = p_0 * p_0;
        double* var76 = &p_1;

        Container_1* var77 = new Container_1();
        var77->member_3 = var72 + p_0;
        var77->member_4 = static_cast<unsigned char>(var72 % 256);

        var77->member_5 = var73 * 1.5;
        var77->member_6 = var74 - p_1;

        var77->member_7 = static_cast<float>(var73 / 3.0);
        var77->member_10.member_1 = var77->member_5 + var77->member_6;
        var77->member_10.member_2 = var77->member_7 - var72;

        var77->member_4 += static_cast<unsigned char>(var77->member_6);
        var77->member_6 -= var72 * 0.5;

    } else {
        unsigned long int var78 = 100000;
        unsigned long int var79 = 200000;

        Container_2* var80 = new Container_2();
        Container_1* var81 = new Container_1();

        if (p_0 != 0) {
            short int var82 = p_0 + var72;
            double var83 = var81->member_1 + var73;

            Container_1* var84 = new Container_1();
            var84->member_5 = var83 + var73;

            var81->member_4 = static_cast<unsigned char>(p_0 * var72);
            var81->member_6 = var74 + var82;
        } else {
            // end if
        }
    }

    return 'a';
}


long double func9(int p_0,long double p_1,char p_2,short int p_3,double p_4)

{
    double var85 = p_4 + p_2;

    char var86 = p_2 + p_0;

    short int var87 = p_3 + static_cast<short int>(var85);

    if (p_0 > p_4) {
        short int var88 = p_3 + static_cast<short int>(var85);

        short int var89 = var88 + var88 + var87;

        double var90 = var85 + p_4;

        p_0 = static_cast<int>(p_4 + p_0);

        p_3 = static_cast<short int>(var89 + var88);

        p_0 = static_cast<int>(var90 * p_0);

        p_1 = p_1 + p_0;

    } else {
        short int var91 = p_3 + static_cast<short int>(var85);

        short int var92 = var91 + var91;

        int var93 = p_0 + p_3;

        if (p_3 > p_0) {
            char* var94 = &p_2;

            Container_1* var95 = new Container_1(p_4, p_2, p_1, p_4, p_1);

            char var96 = *var94 + p_2;
        }
    }

    return p_4 + p_0 + p_1 + p_2 + p_3;
}


char func11(double p_0,int p_1,char *p_2)

{
    int var97 = static_cast<int>(p_0) + p_1;

    Container_0* var98 = new Container_0(p_0, p_0);

    int var99 = var97 + p_1;

    *p_2 = static_cast<char>(var97);
    p_1 = var99;
    *p_2 = static_cast<char>(p_1);

    var97 = var97 * 2;
    var97 = var97 - p_1;
    var97 = var97 / 3;

    return *p_2;
}


