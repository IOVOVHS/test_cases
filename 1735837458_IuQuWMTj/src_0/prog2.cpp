#include"prog2.h"


template<typename T1,typename T2>
float func7(T1 p_0,T2 p_1,double p_2)

{
    T2 var49 = p_1 + p_0; 
    T2* var50 = &var49;

    T1 var51 = p_0 + var49;

    var51 = var51 * 2.0;
    var49 = var49 + p_2;
    var51 = var51 - 1.0;

    return static_cast<float>(var51 + var49);
}


double func6(long long p_0,double *p_1)

{
    long long var52 = p_0 + *p_1;
    
    Container_2* var53 = new Container_2();
    
    long long* var54 = &p_0;

    for (int i = 0; i < 10; ++i) {
        double var55 = var53->member_2 + *p_1 + var53->member_1;

        long long var56 = 100;
        unsigned long int var57 = 200;

        unsigned long int var58 = var57 + *p_1;

        short var59 = func5(p_0, var56);

        for (int j = 0; j < 5; ++j) {
            unsigned long int var60 = var57 + var57;

            long long var61 = var52 + p_0 + var56 + *var54;

            short var62 = var59 + var58;

            var57 = var58 + var60;
            var58 = p_0 + *p_1;

            var62 = func5(p_0, var52);
        }
    }

    return var53->member_2;
}


char func8(char p_0,char p_1,unsigned long p_2,long long *p_3)

{
    unsigned long var63 = p_2 + *p_3;
    unsigned long var64 = p_2 + var63;
    char var65 = p_0 + var64;

    if (var63 > var65) {
        char var66 = p_0 + var65 + p_0;
        long long var67 = *p_3 + p_0;

        Container_1* var68 = new Container_1();

        var68->member_5 = *p_3 + var67;
        var68->member_3 = var67 * var63;

        for (long long* var69 = &var67; var69 != nullptr; ++var69) {
            unsigned char var70 = var68->member_4 + *var69;
            unsigned char var71 = var68->member_4 + var68->member_5;
        }
    }

    return var65;
}


