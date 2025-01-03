#include"prog1.h"

char func3(int p_0,double p_1,unsigned long p_2)

{
    unsigned long var21 = p_2 * static_cast<unsigned long>(p_1); 

    double var22 = p_1 + p_0; 

    int var23 = static_cast<int>(p_0) + static_cast<int>(p_1); 

    var23 = var23 * 3;
    var22 = var22 / 2.5;
    
    var23 = var23 + 5;
    var22 = var22 - 4.1;
    
    for (int i = 0; i < 10; ++i) {
        double var24 = var22 + p_0; 

        int var25 = static_cast<int>(p_0) * static_cast<int>(var22); 

        Container_1* var26 = new Container_1(p_0 * var22, var25, p_1, p_0, static_cast<float>(var25), Container_0(var22, var24)); 

        var26->member_7 = var26->member_3 * p_0 + var26->member_6 * var25;
        var26->member_7 = var26->member_7 - var26->member_5;

        var26->member_7 = var26->member_7 + var26->member_6 * var22;
        var26->member_5 = var26->member_5 + var26->member_7;

        delete var26;
    }
    
    return static_cast<char>(var23 % 256); 
}



template<typename T1>
char func4(T1 p_0,unsigned long p_1)

{
    unsigned long var27 = p_1 + static_cast<unsigned long>(p_0);

    unsigned long* var28 = &p_1;

    T1 var29 = p_0 + static_cast<T1>(p_1);

    for (unsigned long i = 0; i < var27; ++i) {
        unsigned long var30 = var27 + static_cast<unsigned long>(p_0);

        unsigned long int var31 = 10;
        long double var32 = 20.5;
        T1 var33 = p_0;
        Container_1 var34(1.5, 2, 3.5, 4.5, 5.5, Container_0(1.0, 2.0));
        float var35 = 6.7;

        char var36 = 'A';
        int var37 = 100;
        long int var38 = 1000;
        int var39 = 200;

        var34.member_5 = var34.member_5 + var34.member_2 + var34.member_1;
        var34.member_1 = var34.member_1 - var34.member_2;
        var38 = var34.member_3 + static_cast<long int>(var34.member_2);
        var34.member_3 = static_cast<long double>(var38) * 2.0;

    }

    return 'A';
}


short int func5(long long p_0,long long p_1)

{
    Container_1* var40 = new Container_1();
    unsigned char var41 = var40->member_4;
    double var42 = var40->member_2 + var40->member_5;

    for (int i = 0; i < 10; ++i) {
        double var43 = var40->member_1 + var40->member_2 + var42 + var42 + var41;
        unsigned short int var44 = 100;

        Container_1* var45 = new Container_1();
        for (int j = 0; j < 5; ++j) {
            var45->member_7 = var40->member_7 + var40->member_5 + var40->member_1 + var40->member_2 + var42 + var43 + var45->member_5 + var45->member_1 + p_0 + p_1;
        }

        long long var46 = p_0 + var40->member_4;
        long double var47 = var40->member_3 + var40->member_3 + var40->member_6;
        long double var48 = var40->member_3 + var47 + var45->member_6 + var45->member_3 + var40->member_6;

        var48 = var45->member_3 * var47;
        var45->member_6 = var45->member_6 + var48;

    }

    return 0;
}


