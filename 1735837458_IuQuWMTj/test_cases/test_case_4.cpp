#include"prog3.h"
int main(){
    // Declare a variable 'var382' and initialize it with variables ''
    Container_0 var382;

    // Declare a variable 'var383' and initialize it with variables 'var382'
    Container_0 var383 = var382;

    // Declare variables Container_2* var384, and initialize them using new() and variables Container_2* var384
    Container_2* var384 = new Container_2();

    // Using a for loop.
    for (int i = 0; i < 5; ++i) {
        // Declare 5 variables, the variables are 'float var385, float var386, long double var387, unsigned int var388, long int var389,', and initialize them by constant
        float var385 = 1.0f, var386 = 2.0f, var387 = 3.0L;
        unsigned int var388 = 4;
        long int var389 = 5;

        // Declare 3 variables, the variables are 'Container_1 var390, float var391, unsigned long int var392,', and initialize them by constant
        Container_1 var390 = Container_1(6.0L, 7, 8.0, 9.0L, 10.0f, var382);
        float var391 = 11.0f;
        unsigned long int var392 = 12;

        // Declare a variable 'float var393' and initialize it with variables 'var386, var390.member_7, var391'
        float var393 = var386 + var390.member_7 + var391;

        // Using a for loop.
        for (int j = 0; j < 3; ++j) {
            // Declare 5 variables, the variables are 'int var394, int var395, float var396, float var397, double var398,', and initialize them by constant
            int var394 = 13, var395 = 14;
            float var396 = 15.0f, var397 = 16.0f;
            double var398 = 17.0;

            // declare pointer var399 = &[]
            int* var399 = &var394;

            // Declare a variable 'unsigned long int var400' and initialize it with variables 'var392, var384.member_9'
            unsigned long int var400 = var392 + var384->member_9.member_4;

            // 1 assignment statement with variables and constants, use variables var386, var397, var390.member_7, var396, var390.member_7
            var393 = var386 * var397 - var390.member_7 + var396 * var390.member_7;

            // If statement, the conditional expression uses 1 operators
            if (var386 > var397) {
                // Declare a variable 'unsigned int var401' and initialize it with variables 'var388, var384.member_1'
                unsigned int var401 = var388 + static_cast<unsigned int>(var384->member_1);

                // Declare a variable 'var402' and initialize it with variables 'var399, var384'
                int* var402 = var399;

                // Declare a variable 'float var403' and initialize it with variables 'var391, var390.member_7, var391'
                float var403 = var391 + var390.member_7 + var391;

                // 1 assignment statement with complex calculations, use variables var398, var390.member_5, var384.member_2, var390.member_1
                var398 = var390.member_5 * var384->member_2 + var390.member_1;

                // If statement, the conditional expression uses 1 operators
                if (var398 > 10) {
                    // Declare variables Container_0* var404, and initialize them using new() and variables Container_0* var404
                    Container_0* var404 = new Container_0(18.0, 19.0);

                    // Declare a variable 'double var405' and initialize it with variables 'var398, var390.member_2, var404.member_1'
                    double var405 = var398 + var390.member_2 + var404->member_1;

                    // Declare a variable 'int var406' and initialize it with variables 'var395, var390.member_7'
                    int var406 = var395 + static_cast<int>(var390.member_7);
                }
                else {
                    // else
                }
            }
            else {
                // else
            }
        }
        // end loop
    }
    // end loop

    // Cleanup dynamically allocated memory
    delete var384;
}
