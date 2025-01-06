#include"prog0.h"

long long func0(int p_0,float p_1,double p_2,double *p_3)

{
    Container_0 var1527;
    int var1528 = 100;
    Container_3 var1529;
    unsigned int var1530 = 50;

    Container_2 var1531;
    short int var1532 = 20;
    int var1533 = 10;
    long int var1534 = 5000;

    Container_4 var1535;
    Container_4 var1536;
    float var1537 = 3.14;
    short int var1538 = 5;
    Container_0 var1539;

    short var1540 = func1(var1535.member_14, var1532, var1538, p_0, var1535.member_16);

    var1535.member_15 = var1531.member_8 + var1539.member_3;
    var1536.member_15 = var1531.member_8 - var1539.member_3;
    var1531.member_8 = var1539.member_3;

    var1534 = var1537 + var1529.member_11;
    var1537 = var1534 * p_1;
    var1539.member_3 = var1537;

    return var1531.member_10;
}


short int func1(char p_0,float p_1,long long p_2,short int p_3,long double p_4)

{
    char var1541 = p_0 + p_4;
    short int var1542 = p_3 + static_cast<short int>(p_4);
    float var1543 = p_1 + var1542;

    for (int i = 0; i < 5; ++i) {
        char var1544 = var1541 + static_cast<char>(p_2);
        char var1545 = var1541 + static_cast<char>(p_2);
        char* var1546 = &var1541;

        for (int j = 0; j < 3; ++j) {
            long double var1547 = p_4 + *var1546;
            float var1548 = var1543 + p_1;
            long double var1549 = 3.14;
            unsigned int var1550 = 42;
            unsigned short int var1551 = 7;
            unsigned int var1552 = 100;
            long double var1553 = 2.718;

            // No operation is required for these variables, just declaring them as instructed.
        }
    }

    return 0;
}



template<typename T1>
short int func2(T1 p_0,long long p_1,float p_2,short int p_3)

{
    // Declare a variable 'float var1554' and initialize it with variables 'p_2, p_0'
    float var1554 = p_2 + static_cast<float>(p_0);

    // Declare a variable 'float var1555' and initialize it with variables 'p_2, p_1'
    float var1555 = p_2 + static_cast<float>(p_1);

    // Declare a variable 'float var1556' and initialize it with variables 'var1555, var1554'
    float var1556 = var1555 + var1554;

    // Using a for loop
    for (int i = 0; i < 5; ++i) {
        // Declare a variable 'float var1557' and initialize it with variables 'p_2, p_3'
        float var1557 = p_2 + static_cast<float>(p_3);

        // Declare a variable 'float var1558' and initialize it with variables 'var1554, p_3'
        float var1558 = var1554 + static_cast<float>(p_3);

        // Declare a variable 'float var1559' and initialize it with variables 'p_2, var1555, var1555, p_2, p_2, p_2'
        float var1559 = p_2 + var1555 + var1555 + p_2 + p_2 + p_2;

        // 3 assignment statements with variables and constants, use variables p_3, var1559
        var1554 = var1557 + 1.0f;
        var1555 = var1558 + 2.0f;
        var1556 = var1559 + 3.0f;
    }

    // return a variable
    return static_cast<short int>(var1556);
}


