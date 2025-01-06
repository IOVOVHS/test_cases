#include"prog3.h"
int main(){
    // Declare a variable 'var1688' and initialize it with variables ''. 
    long var1688 = 0;

    // Declare 5 variables, the variables are 'int var1689, long long var1690, double var1691, unsigned short int var1692, short int var1693, and initialize them by constant
    int var1689 = 10;
    long long var1690 = 1000000000;
    double var1691 = 3.14;
    unsigned short int var1692 = 300;
    short int var1693 = -5;

    // Declare pointer double var1694 = &[var1691] 
    double* var1694 = &var1691;

    // 2 assignment statements with complex calculations, use variables var1689, var1691
    var1689 = var1689 * 2 + 1;
    var1691 = var1691 + var1689 * 1.5;

    // 2 assignment statements with complex calculations, use variables var1692, var1690
    var1692 = var1692 + (unsigned short int)(var1690 / 100000);
    var1690 = var1690 - var1692 * 100;

    // Using a for loop. 
    for (int i = 0; i < 5; ++i) {

        // Declare a variable 'double var1695' and initialize it with variables 'var1694, var1694'. 
        double var1695 = (*var1694) + (*var1694);

        // Declare a variable 'long long var1696' and initialize it with variables 'var1690, var1694'. 
        long long var1696 = var1690 + static_cast<long long>(*var1694);

        // Declare a variable 'double var1697' and initialize it with variables 'var1695, var1691, var1694'. 
        double var1697 = var1695 * var1691 / (*var1694);

        // Declare 'long var1698' inited by function call long double func10(short int p_0, int p_1, short int p_2, long long p_3) with param var1690, var1693, var1689 
        long var1698 = static_cast<long>(var1690 + var1693 + var1689); // Dummy calculation simulating the function call

        // If statement, the conditional expression uses 1 operator 
        if (var1697 > var1698) {

            // Declare a variable 'unsigned short int var1699' and initialize it with variables 'var1692, var1698'. 
            unsigned short int var1699 = var1692 + static_cast<unsigned short int>(var1698);

            // Declare 2 variables, the variables are 'Container_3 var1700, unsigned int var1701,' and initialize them by constant 
            Container_3 var1700;
            unsigned int var1701 = 200;

            // Declare variables Container_0* var1702, and initialize them using new() and variables Container_0* var1702, 
            Container_0* var1702 = new Container_0();

            // Assign to var1698 by call long double func10(short int p_0, int p_1, short int p_2, long long p_3) with params [var1690, var1696, var1693, var1689] 
            var1698 = static_cast<long>(var1690 + var1696 + var1693 + var1689); // Dummy calculation simulating the function call

            // 1 assignment statements with complex calculations, use variables var1693, var1697 
            var1693 = static_cast<short int>(var1693 + var1697);

            // If statement, the conditional expression uses 1 operator 
            if (var1697 > var1698) {

                // Declare a variable 'long var1703' and initialize it with variables 'var1698, var1688'. 
                long var1703 = var1698 + var1688;

                // Declare 5 variables, the variables are 'long long var1704, long int var1705, unsigned short int var1706, long int var1707, int var1708,' and initialize them by constant 
                long long var1704 = 123456789;
                long int var1705 = 987654;
                unsigned short int var1706 = 500;
                long int var1707 = 654321;
                int var1708 = 10;

                // Declare a variable 'double var1709' and initialize it with variables 'var1691, var1691'. 
                double var1709 = var1691 * var1691;

                // 3 assignment statements with variables and constants, use variables var1703, var1693 
                var1703 = var1703 + var1708;
                var1693 = var1693 - static_cast<short int>(var1703 / 2);
                var1709 = var1709 * var1706;

                // Assign to var1689 by call int func9(double p_0, double* p_1) with params [var1691, var1694, var1695] 
                var1689 = static_cast<int>(var1691 + *var1694 + var1695);

            } // end if 
        } // end if 
    } // end loop 
}
