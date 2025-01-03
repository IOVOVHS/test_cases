#include"prog3.h"
int main(){
    // declare pointer var363 = &[]

    // Declare a variable 'var364' and initialize it with variables ''. 

    // Declare 4 variables, the variables are 'unsigned int var365, double var366, short int var367, unsigned int var368', and initialize them by constant
    unsigned int var365 = 10;
    double var366 = 3.14;
    short int var367 = 5;
    unsigned int var368 = 20;

    // Declare 'char var369' initialized by function call char func10(short int p_0, double p_1) with variables var367, var366 to form the corresponding number of expressions, call function char func10(short int p_0, double p_1)
    // Using a for loop.
    char var369 = func10(var367, var366);

    // Declare a variable 'char var370' and initialize it with variables 'var369, var363'.
    char var370 = var369;

    // declare pointer var371 = &[var363]
    char* var371 = &var369;

    // Declare a variable 'var372' and initialize it with variables 'var371, var365'.
    double var372 = *var371 + var365;

    // If statement, the conditional expression uses 1 operator
    if (var366 > var372) {
        // Declare a variable 'double var373' and initialize it with variables 'var366, var372'.
        double var373 = var366 + var372;

        // declare pointer double var374 = &[var373]
        double* var374 = &var373;

        // Declare a variable 'double var375' and initialize it with variables 'var373, var374, var374, var364'.
        double var375 = var373 + *var374 + *var374 + var366;

        // 1 assignment statement with complex calculations, use variables var373, var375, var366
        var375 = var373 * var366 + var375;

        // If statement, the conditional expression uses 1 operator
        if (var373 < var375) {
            // declare pointer char var376 = &[var369]
            char* var376 = &var369;

            // declare pointer short int var377 = &[var367]
            short int* var377 = &var367;

            // Declare 1 variable, the variables are 'float var378,', and initialize them by constant
            float var378 = 1.23f;

            // According to the number of function char func10(short int p_0, double p_1) parameters, use variables [var367, var366] to form the corresponding number of expressions, call function and assign the value to variable [var376]
            *var376 = func10(*var377, var366);

            // According to the number of function char func10(short int p_0, double p_1) parameters, use variables [var367, var366, var373, var374, var375] to form the corresponding number of expressions, call function and assign the value to variable [var376]
            *var376 = func10(*var377, var373);

            // According to the number of function char func10(short int p_0, double p_1) parameters, use variables [var367, var377, var366, var373] to form the corresponding number of expressions, call function and assign the value to variable [var370]
            var370 = func10(*var377, var373);
        } else {
            // Declare a variable 'unsigned int var379' and initialize it with variables 'var368,'
            unsigned int var379 = var368;

            // Declare variables Container_1* var380, and initialize them using new() and variables Container_1* var380,
            Container_1* var380 = new Container_1();

            // Declare a variable 'long double var381' and initialize it with variables 'var380->member_6, var380->member_6'
            long double var381 = var380->member_6;

            // According to the number of function char func10(short int p_0, double p_1) parameters, use variables [var367, var366, var373] to form the corresponding number of expressions, call function and assign the value to variable [var370]
            var370 = func10(var367, var373);
        }
    } else {
        // end if
    }

    // end loop
}
