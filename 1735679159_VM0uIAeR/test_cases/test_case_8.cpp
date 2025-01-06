#include"prog3.h"
int main(){
    // Declare a variable 'var1846' and initialize it with variables
    long double var1846 = 1.23;  // Just an example value for initialization

    // Declare variables Container_1* var1847, and initialize them using new()
    Container_1* var1847 = new Container_1();
    var1847->member_5 = 10.0;
    var1847->member_3 = 20.0;

    // Declare variables Container_1* var1848, and initialize them using new()
    Container_1* var1848 = new Container_1();
    var1848->member_5 = 30.0;
    var1848->member_3 = 40.0;

    // Declare 'int var1849' initialized by function call int func9(double p_0, double *p_1) with params var1847.member_5, var1847.member_3
    int var1849 = func9(var1847->member_5, &(var1847->member_3));

    // 1 assignment statements with complex calculations, use variables var1846
    var1849 += static_cast<int>(var1846 * 5);

    // Assign to var1849 by call int func9(double p_0, double *p_1) with params [var1847.member_5]
    var1849 = func9(var1847->member_5, nullptr);

    // Cleaning up dynamically allocated memory
    delete var1847;
    delete var1848;

    return 0;
}
