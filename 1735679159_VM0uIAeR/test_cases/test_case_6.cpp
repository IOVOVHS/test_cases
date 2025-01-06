#include"prog3.h"
int main(){
    // Declare a variable 'var1802' and initialize it with variables 'var1802,'
    Container_0 var1802;

    // Declare a variable 'var1803' and initialize it with variables 'var1802,'
    Container_1 var1803;

    // Declare variables Container_0* var1804, and initialize them using new() and variables Container_0* var1804,
    Container_0* var1804 = new Container_0();

    // Using a for loop.
    for (int i = 0; i < 10; ++i) {
        // Declare variables Container_0* var1805, and initialize them using new() and variables Container_0* var1805,
        Container_0* var1805 = new Container_0();

        // Declare variables Container_3* var1806, and initialize them using new() and variables Container_3* var1806,
        Container_3* var1806 = new Container_3();

        // Declare variables Container_2* var1807, and initialize them using new() and variables Container_2* var1807,
        Container_2* var1807 = new Container_2();

        // 3 assignment statements with variables and constants, use variables var1807.member_8
        var1807->member_8 = 100;
        var1807->member_9 = 200;
        var1807->member_10 = 300;

        // Using a for loop.
        for (int j = 0; j < 5; ++j) {
            // Declare a variable 'long long var1808' and initialize it with variables 'var1807.member_8,var1804.member_2'.
            long long var1808 = var1807->member_8 + var1804->member_2;

            // Declare 2 variables, the variables are 'unsigned int var1809, short int var1810,' and initialize them by constant
            unsigned int var1809 = 10;
            short int var1810 = 20;

            // Declare pointer unsigned char var1811 = &[var1807.member_2]
            unsigned char* var1811 = &(var1807->member_2);

            // Declare 'long var1812' inited by function call long double func10(short int p_0, int p_1, short int p_2, long long p_3)
            // with param var1807.member_8, var1810, var1807.member_9
            long var1812 = 100L;

            // 1 assignment statements with complex calculations, use variables var1809, var1811
            var1812 = var1809 * (*var1811);

            // Using a for loop.
            for (int k = 0; k < 3; ++k) {
                // Declare a variable 'long var1813' and initialize it with variables 'var1812,var1804'.
                long var1813 = var1812 + var1804->member_2;

                // declare pointer long var1814 = &[var1813]
                long* var1814 = &var1813;

                // Declare 4 variables, the variables are 'int var1815, long long var1816, long long var1817, float var1818,'
                // and initialize them by constant
                int var1815 = 5;
                long long var1816 = 1000LL;
                long long var1817 = 2000LL;
                float var1818 = 10.5f;

                // Assign to var1815 by call int func9(double p_0, double* p_1)
                // with params [var1804.member_3, var1805.member_3, var1807.member_6, var1807.member_3]
                var1815 = 10;

                // Assign to var1814 by call long double func10(short int p_0, int p_1, short int p_2, long long p_3)
                // with params [var1807.member_8, var1808, var1810, var1807.member_9, var1815]
                var1814 = &var1813;

                // Assign to var1813 by call long double func10(short int p_0, int p_1, short int p_2, long long p_3)
                // with params [var1807.member_8, var1808, var1816, var1817, var1810, var1807.member_9]
                var1813 = 200L;

                // Assign to var1813 by call long double func10(short int p_0, int p_1, short int p_2, long long p_3)
                // with params [var1807.member_8, var1808, var1816, var1810, var1807.member_9]
                var1813 = 300L;
            }
        }
    }

    // end loop
}
