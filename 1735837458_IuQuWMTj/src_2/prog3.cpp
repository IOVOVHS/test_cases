#include"prog3.h"

long double func9(int p_0,long double p_1,char p_2,short int p_3,double p_4)

{
    long double var310 = 1.0; // constant initialization
    unsigned char var311 = 2; // constant initialization
    unsigned int var312 = 3; // constant initialization
    long long var313 = 4; // constant initialization
    Container_2 var314; // default initialization

    char var315 = p_2 + p_0;

    double var316 = var314.member_2 + p_4 + var314.member_2;

    // Assuming func10 takes two arguments, and that we are calling it based on the number of parameters.
    // 1st expression: func10(p_3, var314.member_1)
    // 2nd expression: func10(p_3, var314.member_2)
    // 3rd expression: func10(p_3, var316)
    var315 = func10(p_3, var314.member_1); 
    var315 = func10(p_3, var314.member_2); 
    var315 = func10(p_3, var316); 

    // Returning the computed value
    return var315;
}


char func10(short int p_0,double p_1)

{
    short int var317 = p_0; 
    int var318 = 10; 

    Container_0* var319 = new Container_0(1.0, 2.0); 

    if (p_1 > 0) {
        double var320 = var319->member_1 + var318;
        double var321 = var319->member_1 + p_1 * p_1 * p_1;

        Container_0* var322 = new Container_0(3.0, 4.0);

        for (int i = 0; i < 5; ++i) {
            short int var323 = var317 + p_0;
            int var324 = var318 + static_cast<int>(var319->member_1);
            double var325 = var320 + var319->member_2;

            var318 = var323;
            var319->member_2 = var325;

            for (int j = 0; j < 3; ++j) {
                int var326 = var318 + static_cast<int>(var319->member_1);
                double var327 = var319->member_1 + var320 + var325 + p_1 + var319->member_1;
                short int var328 = p_0 + var317;

                var318 = var326;
                var325 = var327;

                for (int k = 0; k < 2; ++k) {
                    Container_0* var329 = new Container_0(5.0, 6.0);
                    int var330 = var326 + var324 + var318;

                    short int* var331 = &var317;

                    var331 = &var317;
                    var322->member_2 = var320;
                    var319->member_2 = var325;

                    var326 = var330;
                    var324 = var318;
                    var319->member_1 = var327;
                }
            }
        }
    }

    return 'A'; 
}


char func11(double p_0,int p_1,char *p_2)

{
    // Declare variables Container_0* var332, and initialize them using new() and variables Container_0* var332
    Container_0* var332 = new Container_0(p_0, static_cast<double>(p_1));

    // Declare a variable 'char var333' and initialize it with variables '*p_2, var332.member_1'
    char var333 = *p_2 + static_cast<char>(var332->member_1);

    // Declare pointer double var334 = &[var332.member_1]
    double* var334 = &(var332->member_1);

    // 2 assignment statements with complex calculations, use variables var332.member_1, var334, var332.member_2
    var332->member_1 = (*var334) * p_0 + var332->member_2;
    var332->member_2 = var332->member_1 - p_0;

    // Return variable *p_2
    return *p_2;
}


