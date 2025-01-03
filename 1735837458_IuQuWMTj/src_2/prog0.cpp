#include"prog0.h"

float func1(long double p_0,int p_1,long double p_2,long double p_3,float p_4)

{
    Container_2* var210 = new Container_2();

    long double var211 = p_0 + p_0 + p_3;

    Container_2* var212 = new Container_2();

    if (p_1 > 0) {
        int var213 = p_1 + var212->member_9.member_4;

        float var214 = p_4 + var213;

        int* var215 = &p_1;

        if (p_1 > 10) {
            float var216 = p_4 + var212->member_1;

            long double var217 = p_3 + var211 + p_0;

            int var218 = *var215 + var213 + p_1;

            if (p_2 < var217) {
                double var219 = var212->member_1 + var211;

                unsigned int var220 = 100;
                Container_0 var221 = Container_0(1.0, 2.0);

                double var222 = 3.14;

                if (var213 > 5) {
                    int var223 = var213 + var213 + var213;

                    float var224 = p_4 + var210->member_1;

                    float* var225 = &var214;
                } else {
                    // Else block
                }
            } else {
                // Else block
            }
        } else {
            // Else block
        }
    } else {
        // Else block
    }

    return p_4;
}


char func2(short int p_0,short int p_1,float p_2,long double p_3,int p_4)

{
    // Declare a variable 'float var226' and initialize it with variables 'p_2,p_3'.
    float var226 = static_cast<float>(p_2) + static_cast<float>(p_3);

    // Declare a variable 'float var227' and initialize it with variables 'var226,var226'.
    float var227 = var226 * var226;

    // Declare variables Container_2* var228, and initialize them using new() and variables Container_2* var228,
    // 3 assignment statements with variables and constants, use variables var228.member_1,p_0
    Container_2* var228 = new Container_2();
    var228->member_1 = p_0;
    var228->member_2 = static_cast<double>(p_1);
    var228->member_9.member_3 = var227;

    // Using a for loop.
    for (int i = 0; i < p_4; ++i) {
        // Declare a variable 'int var229' and initialize it with variables 'p_4,var228.member_2'.
        int var229 = p_4 + static_cast<int>(var228->member_2);

        // Declare pointer double var230 = &[var228.member_1]
        double* var230 = &var228->member_1;

        // Declare a variable 'short int var231' and initialize it with variables 'p_0,var228.member_1'.
        short int var231 = static_cast<short int>(p_0 + var228->member_1);
    }

    // Return a variable (in this case, returning the value of member_1 from var228)
    char result = static_cast<char>(var228->member_1);
    delete var228;  // Don't forget to free the allocated memory
    return result;
}


float func0(double p_0,float p_1,long long p_2)

{
    float var232 = p_1 + static_cast<float>(p_2);

    long long var233 = static_cast<long long>(p_2 + p_0);

    Container_0* var234 = new Container_0(p_0, p_2);

    return p_1;
}


