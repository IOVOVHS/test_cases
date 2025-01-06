#include"prog3.h"
int main(){
    // Declare 4 variables, the variables are 'Container_3 var1761, long int var1762, double var1763, float var1764', and initialize them by constant
    Container_3 var1761;
    long int var1762 = 100L;
    double var1763 = 3.14;
    float var1764 = 2.71f;

    // Declare a variable 'double var1765' and initialize it with variables 'var1763, var1761.member_11'.
    double var1765 = var1763 + var1761.member_11;

    // Declare a variable 'long int var1766' and initialize it with variables 'var1762, var1765'.
    long int var1766 = var1762 + static_cast<long int>(var1765);

    // Declare 'int var1767' inited by function call int func9(double p_0, double *p_1) with param var1763, var1765
    // Assign to var1767 by call int func9(double p_0, double *p_1) with params [var1763]
    // Assign to var1767 by call int func9(double p_0, double *p_1) with params [var1763, var1765]
    int var1767 = func9(var1763, nullptr);  // First call with var1763
    var1767 = func9(var1763, &var1765);     // Second call with var1763 and var1765
}
