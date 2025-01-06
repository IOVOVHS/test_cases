#include"prog2.h"

short int func6(short int p_0,long double p_1,double *p_2)

{
    short int var1486 = p_0 + static_cast<short int>(*p_2);
    
    long double var1487 = p_1 * p_0;
    
    double var1488 = *p_2 - p_0;

    var1486 += static_cast<short int>(var1487);
    var1487 = var1487 / 2.0;
    var1488 *= 1.5;

    char var1489 = func5(p_1, var1487, var1488);
    
    return var1486;
}


double func8(float p_0,short int p_1,long long p_2)

{
    short int var1490 = p_1 + p_0;

    float* var1491 = &p_0;

    long long var1492 = p_2 + p_1;

    if (p_0 > 0.5f) {
        int var1493 = 1;
        short int var1494 = 2;
        Container_3 var1495 = Container_3();
        unsigned char var1496 = 3;
        double var1497 = 4.0;

        int var1498 = var1493 + var1494;

        Container_4* var1499 = new Container_4();

        long var1500 = func3(var1497, var1499->member_3, var1499->member_14, p_0, *var1491);

        for (int i = 0; i < 5; i++) {
            unsigned char* var1501 = &var1499->member_2;

            char var1502 = var1499->member_16 + var1492;

            unsigned short int var1503 = 1;
            char var1504 = 'A';
            long long var1505 = 100;

            var1502 = func5(var1499->member_14, var1499->member_14, var1499->member_14);
            var1502 = func5(var1499->member_14, var1499->member_14, var1499->member_14);
        }
    } else {
        // else block is empty
    }

    return var1490;
}



template<typename T1,typename T2,typename T3>
short int func7(T1 p_0,T2 p_1,T3 p_2,double p_3,unsigned long p_4)

{
    T1 var1506 = p_0 + p_3;
    double var1507 = p_3 + static_cast<double>(p_2);
    T2 var1508 = p_1 + p_0;

    return 0;
}


