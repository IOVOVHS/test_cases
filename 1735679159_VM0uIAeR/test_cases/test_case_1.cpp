#include"prog3.h"
int main(){
    // Declare a variable 'var1728' and initialize it with variables ''.
    long double var1728 = 0.0;

    // Declare a variable 'var1729' and initialize it with variables ','.
    double var1729 = 0.0;

    // Declare pointer var1730 = &[]
    double* var1730 = nullptr;

    // If statement, the conditional expression uses 1 operator
    if (var1728 == 0.0) {
        // Declare a variable 'var1731' and initialize it with variables 'var1728,'.
        long double var1731 = var1728;

        // Declare a variable 'var1732' and initialize it with variables 'var1728,var1731,var1730,,var1729'.
        long double var1732 = var1728 + var1731 + *var1730 + var1729;

        // Declare 5 variables, the variables are 'double var1733, double var1734, Container_1 var1735, float var1736, long long var1737,'
        double var1733 = 0.1, var1734 = 0.2;
        Container_1 var1735;
        float var1736 = 0.5;
        long long var1737 = 100;

        // If statement, the conditional expression uses 1 operator
        if (var1733 > 0.0) {
            // Declare pointer long long var1738 = &[var1737]
            long long* var1738 = &var1737;

            // Declare variables Container_4* var1739, and initialize them using new() and variables Container_4* var1739,
            Container_4* var1739 = new Container_4();

            // Declare pointer var1740 = &[var1732]
            long double* var1740 = &var1732;

            // Using a for loop.
            for (int i = 0; i < 10; ++i) {
                // Declare variables Container_1* var1741, and initialize them using new() and variables Container_1* var1741,
                Container_1* var1741 = new Container_1();

                // Declare a variable 'unsigned char var1742' and initialize it with variables 'var1735.member_2,var1728'.
                unsigned char var1742 = var1735.member_2 + static_cast<unsigned char>(var1728);

                // Declare a variable 'long double var1743' and initialize it with variables 'var1739.member_14,var1732'.
                long double var1743 = var1739->member_14 + var1732;

                // 3 assignment statements with complex calculations, use variables var1735.member_5, var1739.member_3, var1735.member_5, var1735.member_3
                var1735.member_5 = var1739->member_3 + var1735.member_3;
                var1739->member_3 = var1735.member_5 + var1735.member_3;
                var1735.member_3 = var1735.member_5 * var1739->member_3;

                // 2 assignment statements with variables and constants, use variables var1739.member_15, var1735
                var1739->member_15 = var1735.member_5 + 0.1;
                var1735.member_5 = 0.2;

                // 1 assignment statement with complex calculations, use variables var1736, var1735.member_5
                var1736 = var1735.member_5 * 2.0f;
            }
            // end loop
        }
        // else
        else {
            // else block
        }
    }
    // else
    else {
        // else block
    }
}
