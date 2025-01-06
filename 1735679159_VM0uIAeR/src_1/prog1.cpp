#include"prog1.h"

long long func3(double p_0,float p_1,long double p_2,int p_3,long double p_4)

{
    int var1447 = 42;

    float var1448 = p_1 * p_3;

    double* var1449 = &p_0;

    if (p_4 > 100.0) {
        int var1450 = 0;
        unsigned int var1451 = 1;
        unsigned int var1452 = 2;
        Container_0 var1453;

        Container_3 var1454;
        int var1455 = 10;
        unsigned int var1456 = 20;

        Container_4* var1457 = new Container_4();
        var1457->member_2 = 5;
        var1457->member_16 = 'A';

        short var1458 = func2<char>('A', var1457->member_16, p_0, var1455);

        for (int i = 0; i < 5; ++i) {
            unsigned int var1459 = i;
            float var1460 = 1.1f;
            int var1461 = 2;
            unsigned int var1462 = 3;
            Container_4 var1463;

            unsigned char var1464 = var1457->member_2 + var1453.member_2;

            Container_2 var1465;
            long int var1466 = 100;
            char var1467 = 'B';
            Container_2 var1468;
            unsigned long int var1469 = 1000;
        }
    } else {
        // No-op
    }

    return var1447;
}


char func5(long double p_0,long double p_1,long double p_2)

{
    // Declare 2 variables, the variables are 'long int var1470, unsigned long int var1471', and initialize them by constant 
    long int var1470 = 100; 
    unsigned long int var1471 = 200;

    // Declare 1 variable, the variable is 'Container_2 var1472', and initialize them by constant 
    Container_2 var1472;

    // Declare variables Container_4* var1473, and initialize them using new() 
    Container_4* var1473 = new Container_4;

    // 1 assignment statement with complex calculations, use variables var1471, var1472.member_10 
    var1473->member_3 = var1471 * var1472.member_10;

    // 1 assignment statement with variables and constants, use variables var1473.member_3, var1473.member_3, var1472.member_6 
    var1473->member_3 = var1473->member_3 + var1472.member_6;

    // If statement, the conditional expression uses 1 operator 
    if (var1472.member_7 == var1472.member_2) {
        // Declare a variable 'unsigned char var1474' and initialize it with variables 'var1472.member_7, var1472.member_2, var1473.member_2, var1473.member_14'. 
        unsigned char var1474 = var1472.member_7 + var1472.member_2 + var1473->member_2 + var1473->member_14;

        // Declare variables Container_2* var1475, and initialize them using new() 
        Container_2* var1475 = new Container_2;

        // Declare variables Container_3* var1476, and initialize them using new() 
        Container_3* var1476 = new Container_3;

        // Declare 'long var1477' initialized by function call long long func0(int p_0, float p_1, double p_2, double* p_3) with param var1476.member_11, var1472.member_6, var1472.member_3, var1473.member_3, var1475.member_6, var1475.member_3, var1472.member_9, var1475.member_9
        long var1477 = func0(var1476->member_11, var1472.member_6, var1472.member_3, &var1473->member_3);

        // Declare 'short var1478' initialized by function call {'T1': ['char', 'char']} template<typename T1> short int func2(T1 p_0, long long p_1, float p_2, short int p_3) with param var1473.member_16
        short var1478 = func2(var1473->member_16, var1477, var1475->member_6, 10);

        // Using a for loop. 
        for (int i = 0; i < 5; ++i) {
            // Declare a variable 'long double var1479' and initialize it with variables 'var1473.member_14, var1473.member_14'. 
            long double var1479 = var1473->member_14 * var1473->member_14;

            // Declare 2 variables, the variables are 'unsigned int var1480, long long var1481', and initialize them by constant 
            unsigned int var1480 = 300;
            long long var1481 = 400;

            // declare pointer char var1482 = &[var1473.member_16] 
            char* var1482 = &(var1473->member_16);
        }
    } else {
        // else 
    }

    // return variable var1473.member_16 
    return var1473->member_16;
}



template<typename T1,typename T2,typename T3>
short int func4(T1 p_0,T2 p_1,T3 p_2,unsigned long p_3,int p_4)

{
    unsigned long var1483 = p_3 + (unsigned long)p_2;
    
    T3 var1484 = p_2 + p_1;
    
    T2 var1485 = p_1 + var1484;
    
    var1483 = var1483 + 100;
    var1483 = var1483 * 2;
    var1483 = var1483 - 50;
    
    p_1 = p_1 + p_0;
    p_0 = p_0 * 3.14;
    
    var1484 = var1484 / 2;
    p_2 = p_2 - 10;
    
    return static_cast<short int>(var1483 % 256);
}


