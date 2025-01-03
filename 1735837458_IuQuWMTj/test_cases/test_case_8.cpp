#include"prog3.h"
int main(){
    // Declare a variable 'var448' and initialize it with variables ''. 
    Container_2 var448;

    // Declare a variable 'var449' and initialize it with variables ',var448'. 
    Container_2 var449 = var448;

    // Declare a variable 'var450' and initialize it with variables 'var449'. 
    Container_2 var450 = var449;

    // Using a for loop.
    for (int i = 0; i < 10; ++i) {

        // declare pointer var451 = &[var450] 
        Container_2* var451 = &var450;

        // Declare 4 variables, the variables are 'Container_2 var452, unsigned int var453, unsigned short int var454, int var455,', and initialize them by constant 
        Container_2 var452;
        unsigned int var453 = 5;
        unsigned short int var454 = 10;
        int var455 = 15;

        // Declare a variable 'unsigned int var456' and initialize it with variables 'var453, var448'. 
        unsigned int var456 = var453 + static_cast<unsigned int>(var448.member_1);

        // If statement, the conditional expression uses 1 operator 
        if (var453 > 3) {

            // Declare a variable 'int var457' and initialize it with variables 'var455, var452'. 
            int var457 = var455 + static_cast<int>(var452.member_1);

            // declare pointer unsigned short int var458 = &[var454] 
            unsigned short int* var458 = &var454;

            // declare pointer unsigned short int var459 = &[var454] 
            unsigned short int* var459 = &var454;

            // 3 assignment statements with complex calculations, use variables var454, var458, var459
            var454 = var453 + *var458 + *var459;
            *var458 = var454 - var453;
            *var459 = *var458 * 2;

            // Using a for loop.
            for (int j = 0; j < 5; ++j) {

                // Declare variables Container_0* var460, and initialize them using new() and variables Container_0* var460
                Container_0* var460 = new Container_0();

                // Declare a variable 'unsigned short int var461' and initialize it with variables 'var459, var453'. 
                unsigned short int var461 = *var459 + var453;

                // Declare variables Container_2* var462, and initialize them using new() and variables Container_2* var462
                Container_2* var462 = new Container_2();

                // Using a for loop.
                for (int k = 0; k < 3; ++k) {

                    // declare pointer int var463 = &[var455] 
                    int* var463 = &var455;

                    // Declare variables Container_1* var464, and initialize them using new() and variables Container_1* var464
                    Container_1* var464 = new Container_1();

                    // Declare a variable 'int var465' and initialize it with variables 'var457, var452.member_8'. 
                    int var465 = var457 + static_cast<int>(var452.member_8.member_1);
                }

            }
        }
    }
}
