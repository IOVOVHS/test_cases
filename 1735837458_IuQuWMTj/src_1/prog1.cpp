#include"prog1.h"


template<typename T1>
char func4(T1 p_0,unsigned long p_1)

{
    unsigned long var120 = reinterpret_cast<unsigned long>(&p_1);

    T1* var121 = &p_0;

    unsigned long var122 = var120 * var120;

    for (unsigned long i = 0; i < p_1; ++i) {
        T1* var123 = reinterpret_cast<T1*>(&var121);

        unsigned long var124 = var120 + var122;

        int var125 = 10;
        long double var126 = 20.5;
        long long var127 = 30;
        long long var128 = 40;
        int var129 = 50;

        var125 = var124 + var122 + static_cast<unsigned long>(var123) + p_1;
        var126 = var124 * var122 * var125;
        var127 = var124 - var122 + var128;
        var128 = var127 * var124;
        var129 = var125 - var124 + var122;
    }

    return 'A';
}


char func3(int p_0,double p_1,unsigned long p_2)

{
    int var130 = p_0 + static_cast<int>(p_1);

    double var131 = p_1 + var130;

    Container_2* var132 = new Container_2();

    if (p_2 > 1000) {
        double var133 = p_1 + var132->member_1;
        int var134 = var130 + p_0;

        Container_2* var135 = new Container_2();

        var135->member_1 = var133 + var135->member_1;
        var135->member_1 = var135->member_1 - var132->member_2;
    }

    return static_cast<char>(var130);
}


short int func5(long long p_0,long long p_1)

{
    long long var136 = p_1;

    long int var137 = 1234;
    short int var138 = 5678;
    unsigned int var139 = 91011;
    unsigned int var140 = 121314;
    float var141 = 3.14f;

    float var142 = var141 + p_1;

    var138 = static_cast<short int>(var137 + var139);
    var141 = var142 * var140;
    var138 = static_cast<short int>(var141 - var139);

    var138 = static_cast<short int>(var141 + var137);

    return var138;
}


