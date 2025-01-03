#include"prog2.h"

double func6(long long p_0,double *p_1)

{
    double var260 = *p_1 + p_0;
    long long var261 = p_0 + var260;
    double var262 = var260 * var260;

    for (int i = 0; i < 10; ++i) {
        double* var263 = &var260;
        double* var264 = &var260;

        long long var265 = p_0 + *var263;

        if (var265 > var261) {
            double var266 = *var263 + var265;
            long long var267 = var265 + var261;
            double var268 = var266 + var260 + var266 + *p_1 + var266;

            if (var265 < p_0) {
                long long var269 = var265 + p_0;
                double var270 = 3.14;
                Container_0 var271(1.0, 2.0);
                double var272 = 2.71;
                unsigned int var273 = 42;
                Container_0 var274(5.0, 6.0);

                double* var275 = &var266;

                if (var265 > 100) {
                    unsigned int var276 = 123;
                    Container_1* var277 = new Container_1(0.0, 0, 1.0, 2.0, 3.0, var271);

                    unsigned char* var278 = &var277->member_4;

                    var277->member_5 = var270 * var276;
                    var277->member_6 = var270 + var272;
                }
            }
        }
    }

    return *p_1;
}


char func8(char p_0,char p_1,unsigned long p_2,long long *p_3)

{
    Container_0* var279 = new Container_0(p_2, p_1);  // Initialize var279 using new with p_2 and p_1
    long long var280 = *p_3 + p_1;  // Initialize var280 with *p_3 + p_1

    Container_1* var281 = new Container_1(var280, p_0, p_2, var280, static_cast<float>(p_2), *var279);  // Initialize var281 using new with calculated values

    p_1 = var281->member_3 + var281->member_5;  // Perform operations involving var281's members
    p_2 = static_cast<unsigned long>(var281->member_7 * var281->member_3);  // Another complex calculation involving var281's members

    short var282 = func5(*p_3, p_1);  // Call func5 with *p_3 and p_1, result stored in var282

    p_0 = static_cast<char>(p_2 + var282);  // Final calculation involving p_2 and var282

    return p_0;
}



template<typename T1,typename T2>
float func7(T1 p_0,T2 p_1,double p_2)

{
    double* var283 = &p_2;

    double var284 = *var283 + p_2;

    float var285 = 1.23f;
    int var286 = 42;
    double var287 = 3.14159;
    long long var288 = 10000000000LL;
    Container_0 var289(10.0, 20.0);

    short var290 = func5(var288, var288);

    var289.member_2 = var289.member_2 + var287 * p_2;
    var289.member_2 = var289.member_2 - var284 * var287;
    var289.member_2 = var289.member_2 + var287 * var289.member_2;

    var285 = var287 * 2.0;

    var286 = static_cast<int>(var287 * 3.0);
    var287 = var287 + var285;

    return var285;
}


