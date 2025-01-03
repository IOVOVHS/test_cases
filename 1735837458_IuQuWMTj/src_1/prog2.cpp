#include"prog2.h"

char func8(char p_0,char p_1,unsigned long p_2,long long *p_3)

{
    Container_2 var143 = Container_2(), var144 = Container_2();
    long long var145 = 0;

    char var146 = 'A';

    Container_0* var147 = new Container_0();

    var146 = p_1 + var146 + var146;

    var145 = static_cast<long long>(var146) * p_0;

    var147->member_2 = var143.member_8.member_1 + var144.member_9.member_10.member_2;
    var143.member_8.member_1 = var146 * p_2;

    return p_0;
}



template<typename T1,typename T2>
float func7(T1 p_0,T2 p_1,double p_2)

{
    T1 var148 = p_0 + p_2;
    T2 var149 = p_1 + p_0;
    T2 var150 = var149 + p_2;

    for (int i = 0; i < 10; ++i) {
        T1 var151 = var148 + p_2;
        float var152 = 1.0f;
        int var153 = 100;
        char var154 = 'A';
        int var155 = 50;
        unsigned short int var156 = 200;
        
        Container_2* var157 = new Container_2(var148, Container_1(), var150);
        var157->member_8.member_1 = var152;
        var157->member_9.member_3 = var153;
        var157->member_11.member_1 = var154;
    }

    for (int i = 0; i < 5; ++i) {
        float var158 = 2.5f;
        Container_1 var159(1.5, 'B', 10.0, 3.0, 4.5f, Container_0(0.0, 0.0));
        Container_2 var160;
        double var161 = 3.14;
        
        long double* var162 = &(var159.member_6);

        Container_1* var163 = new Container_1(2.5, 'C', 5.0, 6.0, 7.5f, Container_0(1.0, 1.0));
    }

    return 0.0f;
}


double func6(long long p_0,double *p_1)

{
    long long var179 = p_0 + *p_1;
    long long var180 = var179 + *p_1;

    long long* var181 = &p_0;

    short var182 = func5(p_0, var179);

    if (var182 == 1) {
        short var183 = var182 + var179;

        Container_1* var184 = new Container_1();
        float* var185 = &var184->member_7;

        var184->member_3 = p_0;
        var184->member_4 = var179;
        var184->member_5 = p_0;

        var183 = func5(p_0, var179);
        var182 = func5(p_0, var179 + var180);

    } else {
        Container_0* var186 = new Container_0();
        short var187 = var182 + p_0;
        long long var188 = p_0 + var179 + var180;
    }

    return *p_1;
}


