#include"prog2.h"

double func8(float p_0,short int p_1,long long p_2)

{
    unsigned char var1590 = 10;

    short int var1591 = p_1 + static_cast<short int>(p_2);

    short int var1592 = var1591 + static_cast<short int>(p_2);

    var1590 = static_cast<unsigned char>(p_2 + p_0);
    var1591 = static_cast<short int>(p_1 * p_0);
    var1592 = static_cast<short int>(p_0 - p_1);

    var1590 = static_cast<unsigned char>(p_2 + p_0);
    var1591 = static_cast<short int>(p_1 - p_2);
    var1592 = static_cast<short int>(p_0 + var1591);

    return var1592 + var1590 + var1591;
}



template<typename T1,typename T2,typename T3>
short int func7(T1 p_0,T2 p_1,T3 p_2,double p_3,unsigned long p_4)

{
    T2 var1593 = p_1 + p_0;

    T3 var1594 = p_2 + p_4;

    double var1595 = 0.0;
    Container_4 var1596;
    unsigned int var1597 = 100;

    var1596.member_16 = 'A';
    var1594 = p_2;

    for (int i = 0; i < 5; i++) {
        T2 var1598 = p_1 + var1593;
        long double* var1599 = &var1596.member_14;

        long double var1600 = 10.5;
        T2 var1601 = p_1;
        int var1602 = 42;
        unsigned int var1603 = 20;
        char var1604 = 'B';

        if (p_3 > 0.0) {
            T3 var1605 = p_2 + p_2;
            int var1606 = 123;
            int var1607 = var1602 + p_3;

            var1604 = 'C';
            var1603 = var1602 + static_cast<unsigned int>(var1600);

            var1604 = func5(var1596.member_14, var1600, var1596.member_14);
            var1596.member_16 = func5(var1596.member_14, *var1599, var1596.member_14);

            if (var1604 == 'C') {
                unsigned char var1608 = var1596.member_2 + var1604;
                long long var1609 = var1596.member_15 + var1605;
                T1 var1610 = p_0 + var1597;

                var1604 = func5(var1596.member_14, var1600, var1596.member_14);
            }
        }
    }

    return 42;  // Example return value
}


short int func6(short int p_0,long double p_1,double *p_2)

{
    short int var1622 = p_0 + p_1;

    Container_2* var1623 = new Container_2();
    unsigned long int* var1624 = &(var1623->member_10);

    if (p_0 > 0) {
        int var1625 = var1623->member_9 + *var1624;
        double var1626 = var1623->member_3 + var1623->member_6 + var1623->member_6;
        long long var1627 = var1623->member_8 + var1623->member_6;

        for (int i = 0; i < 10; ++i) {
            double var1628 = var1626 + var1626 + var1623->member_6 + *p_2;

            int var1629 = 0;
            Container_4 var1630;
            unsigned long int var1631 = 0;
            int var1632 = 0;
            unsigned short int var1633 = 0;

            unsigned long int* var1634 = &(var1623->member_10);

            var1630.member_16 = func5(p_1, p_1, p_1);
            var1629 = var1632;
            var1632 = var1625;
            var1633 = var1629;
        }
    }

    return var1622;
}


