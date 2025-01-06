#include"prog3.h"
int main(){
    // Declare a variable ' var1867' and initialize it with variables ''.
    double var1867 = 0.0;

    // Declare a variable ' var1868' and initialize it with variables 'var1867,'.
    double var1868 = var1867;

    // Declare variables Container_1* var1869, and initialize them using new() and variables Container_1* var1869,
    Container_1* var1869 = new Container_1();

    // Declare 'int var1870' inited by function call int func9(double p_0,double *p_1) with param var1869.member_5,var1869.member_3
    // Assign to var1870 by call int func9(double p_0,double *p_1) with params [var1869.member_5]
    // Using a for loop.
    int var1870;
    for(int i = 0; i < 10; ++i){
        // Declare a variable 'int var1871' and initialize it with variables 'var1870,var1869.member_2'.
        int var1871 = var1870 + var1869->member_2;

        // declare pointer unsigned char var1872 = &[var1869.member_2]
        unsigned char* var1872 = &var1869->member_2;

        // declare pointer double var1873 = &[var1869.member_5]
        double* var1873 = &var1869->member_5;

        // Assign to var1871 by call int func9(double p_0,double *p_1) with params [var1869.member_5,var1869.member_3]
        var1871 = func9(var1869->member_5, &var1869->member_3);

        // Assign to var1871 by call int func9(double p_0,double *p_1) with params [var1869.member_5,var1869.member_3]
        var1871 = func9(var1869->member_5, &var1869->member_3);
    }

    // If statement, the conditional expression uses 1 operators
    if (var1869->member_5 > 0) {
        // declare pointer unsigned char var1874 = &[var1869.member_2]
        unsigned char* var1874 = &var1869->member_2;

        // Declare 4 variables,the variables are 'float var1875,unsigned int var1876,int var1877,int var1878,',and initialize them by constant
        float var1875 = 1.0f;
        unsigned int var1876 = 100;
        int var1877 = 10;
        int var1878 = 20;

        // declare pointer int var1879 = &[var1877]
        int* var1879 = &var1877;

        // 1 assignment statements with variables and constants, use variables var1877,var1869.member_5
        var1877 = var1869->member_5 * var1877;

        // 2 assignment statements with variables and constants, use variables var1868,var1869
        var1868 = var1869->member_5;
        var1869->member_5 = var1878;

    } else {
        // else
    }

    // end if
}
