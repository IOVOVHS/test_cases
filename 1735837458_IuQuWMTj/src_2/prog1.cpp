#include"prog1.h"

short int func5(long long p_0,long long p_1)

{
    long long var235 = p_1 + p_0;
    long long var236 = p_0 + var235 + var235;
    long long* var237 = &p_1;

    for (int i = 0; i < 10; ++i) {
        long long* var238 = &var235;
        long long var239 = *var238 + var235 + *var237 + p_0 + *var238;
        long long var240 = var235;
    }

    return 0;
}



template<typename T1>
char func4(T1 p_0,unsigned long p_1)

{
    unsigned long var241 = p_1 + static_cast<unsigned long>(p_0);

    T1 var242 = static_cast<T1>(3.14159);  // Initializing with constant value
    Container_1 var243(2.71828, 255, 1.41421, 1.61803, 2.0f, Container_0(1.0, 2.0));  // Initializing with constant values
    long double var244 = 9.81;  // Initializing with constant value
    long long var245 = 10000000000LL;  // Initializing with constant value
    float var246 = 3.14f;  // Initializing with constant value

    long double var247 = var243.member_6 + var243.member_3 + var244;

    var242 = static_cast<T1>(var247 * p_0);
    var245 = static_cast<long long>(var245 * var246);

    return static_cast<char>(var245 % 256);
}


char func3(int p_0,double p_1,unsigned long p_2)

{
    unsigned long var248 = p_2 * static_cast<unsigned long>(p_1);

    double var249 = p_1 + static_cast<double>(var248);

    unsigned long var250 = p_2 * static_cast<unsigned long>(var249);

    for (unsigned long i = 0; i < var250; ++i) {
        unsigned long var251 = p_2 * (var250 + var250);

        double* var252 = &var249;

        unsigned long var253 = var251 + var251 + p_2 + p_2;

        var248 = static_cast<unsigned long>(*var252) + var253;

        if (var248 > p_2) {
            Container_0 var254(1.0, 2.0);
            float var255 = 3.0f;
            Container_1 var256(4.0, 'a', 5.0, 6.0, 7.0f, var254);
            double var257 = 8.0;

            unsigned char* var258 = &var256.member_4;

            Container_0* var259 = new Container_0(9.0, 10.0);

            var259->member_2 = p_0 + var259->member_2;
        } 
    }

    return 'a';
}


