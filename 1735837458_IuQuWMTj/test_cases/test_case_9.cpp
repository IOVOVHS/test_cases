#include"prog3.h"
int main(){
    // Declare a variable 'var466' and initialize it with variables ''.
    double var466 = 0.0;

    // Declare a variable 'var467' and initialize it with variables 'var466'.
    double var467 = var466;

    // declare pointer var468 = &[var466]
    double* var468 = &var466;

    // If statement, the conditional expression uses 1 operators
    if (var466 != 0.0) {

        // Declare a variable 'var469' and initialize it with variables 'var466,var467,var466'.
        double var469 = var466 + var467 + var466;

        // Declare 3 variables, the variables are 'float var470, unsigned int var471, long int var472,', and initialize them by constant
        float var470 = 1.0f;
        unsigned int var471 = 2;
        long int var472 = 3;

        // Declare a variable 'float var473' and initialize it with variables 'var470,var471'.
        float var473 = var470 + var471;

        // If statement, the conditional expression uses 1 operators
        if (var473 > 0.0f) {

            // Declare variables Container_1* var474, and initialize them using new() and variables Container_1* var474,
            Container_1* var474 = new Container_1();

            // Declare variables Container_1* var475, and initialize them using new() and variables Container_1* var475,
            Container_1* var475 = new Container_1();

            // Declare variables Container_2* var476, and initialize them using new() and variables Container_2* var476,
            Container_2* var476 = new Container_2();

            // If statement, the conditional expression uses 1 operators
            if (var474->member_3 > 0.0) {

                // declare pointer float var477 = &[var473]
                float* var477 = &var473;

                // Declare a variable 'unsigned char var478' and initialize it with variables 'var475.member_4,var468'.
                unsigned char var478 = var475->member_4 + *var468;

                // Declare a variable 'double var479' and initialize it with variables 'var475.member_5,var478'.
                double var479 = var475->member_5 + var478;

                // 1 assignment statements with complex calculations, use variables var474.member_4,var474.member_4,var475.member_4,var474.member_3
                var474->member_4 = var474->member_4 + var475->member_4 + var474->member_3;

                // 2 assignment statements with variables and constants, use variables var475.member_5,var474.member_5,var476.member_2,var474.member_1
                var475->member_5 = var474->member_5 + var476->member_2;
                var474->member_5 = var476->member_2 + var474->member_1;

            } else {

                // Declare a variable 'long double var480' and initialize it with variables 'var474.member_6,var474.member_3,var474.member_6,var475.member_3'.
                long double var480 = var474->member_6 + var474->member_3 + var474->member_6 + var475->member_3;

                // Declare 5 variables, the variables are 'unsigned long int var481, unsigned int var482, int var483, Container_0 var484, float var485,', and initialize them by constant
                unsigned long int var481 = 10;
                unsigned int var482 = 20;
                int var483 = 30;
                Container_0 var484 = Container_0();
                float var485 = 40.0f;

                // Declare variables Container_0* var486, and initialize them using new() and variables Container_0* var486,
                Container_0* var486 = new Container_0();

                // 3 assignment statements with complex calculations, use variables var466, var469, var469, var466
                var466 = var469 + var469 + var466;
                var469 = var466 + var469;
                var469 = var469 - var466;

            }
        }
    }

}
