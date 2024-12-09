#include"prog0.h"

char func_char_rand_0(char p_0,char *p_1)

{
    Container_3 var74(100, 200, 3.14);  // Declare 'Container_3 var74' and initialize it

    unsigned long var75 = var74.member_8;  // Declare 'unsigned long var75' and initialize it with var74.member_8

    float var76 = var74.member_9;  // Declare 'float var76' and initialize it with var74.member_9

    var76 += 5.5;  // 1st assignment with complex calculation using var76
    var76 *= 2.0;  // 2nd assignment with complex calculation using var76

    for (int i = 0; i < 10; ++i) {  // Start of for loop
        float var77 = var76;  // Declare 'float var77' and initialize it with var76

        Container_0 var78(100, 200, 3.14, true, 2.718, 42, 1.23);  // Declare 'Container_0 var78' and initialize it
        bool var79 = true;  // Declare 'bool var79' and initialize it
        bool var80 = false;  // Declare 'bool var80' and initialize it

        Container_0* var81 = new Container_0(100, 200, 3.14, true, 2.718, 42, 1.23);  // Declare 'Container_0* var81' and initialize it with new()

        var78.member_2 = 2.71;  // 1st assignment with variables and constants using var74.member_9
        var81->member_2 = 3.14;  // 2nd assignment with variables and constants using var74.member_9
        var79 = true;  // 3rd assignment with variables and constants using var79

        func_int_rand_1(var78.member_1, var81->member_1, 5, 10, 15);  // Call 'func_int_rand_1' with variables var78.member_1 and var81->member_1
    }  // End of for loop
}


int func_int_rand_1(int p_0,int p_1,int p_2,int p_3,int p_4)

{
    Container_4 var82(100, 200, 300.0f, 1.0f, 2.0f, 3.0f);

    unsigned long var83 = var82.member_8;

    unsigned long var84 = var83;

    var83 = var83 * p_0 + p_1 - p_2;

    var83 = var83 * p_3 + p_4;

    var82.member_12 = var82.member_12 * 3 + 7;

    var82.member_10 = var82.member_10 + 5;

    var82.member_10 = var82.member_10 - 2;

    var82.member_7 = var82.member_7 * 2;

    var82.member_7 = var82.member_7 + 100;
}


