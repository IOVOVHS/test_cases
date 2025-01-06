#include"prog0.h"


template<typename T1>
short int func2(T1 p_0,long long p_1,float p_2,short int p_3)

{
    short int var1413 = *(&p_3);

    Container_1* var1414 = new Container_1();

    float var1415 = 3.14f, var1416 = 2.71f;
    double var1417 = 1.618;
    unsigned short int var1418 = 65535;

    var1414->member_5 = var1415 * p_2 + var1416 - var1417;
    var1414->member_5 = var1414->member_5 + var1413 * var1418;

    var1414->member_5 = var1414->member_5 - var1413 * p_1;

    var1413 = var1414->member_5 * var1414->member_5;

    delete var1414;

    return var1413;
}


short int func1(char p_0,float p_1,long long p_2,short int p_3,long double p_4)

{
    // Declare 5 variables and initialize them by constants
    int var1419 = 10;
    unsigned long int var1420 = 20;
    double var1421 = 30.0;
    Container_0 var1422;
    Container_2 var1423;

    // Declare a variable 'char var1424' and initialize it with variables 'p_0, var1423.member_3'
    char var1424 = p_0 + var1423.member_3;

    // Declare pointer unsigned long int var1425 = &[var1423.member_10]
    unsigned long int* var1425 = &var1423.member_10;

    // Using a for loop
    for (int i = 0; i < 5; ++i) {
        // Declare 3 variables and initialize them by constants
        long long var1426 = 40;
        long int var1427 = 50;
        unsigned long int var1428 = 60;

        // Declare pointer unsigned char var1429 = &[var1422.member_2]
        unsigned char* var1429 = &var1422.member_2;

        // Declare a variable 'int var1430' and initialize it with variables 'var1419, p_4'
        int var1430 = var1419 + static_cast<int>(p_4);

        // Declare 'long var1431' initialized by function call long long func0(int p_0, float p_1, double p_2, double *p_3)
        long var1431 = func0(var1430, p_1, var1421, &var1422.member_3);

        // Using a for loop
        for (int j = 0; j < 3; ++j) {
            // Declare pointer unsigned char var1432 = &[var1429]
            unsigned char* var1432 = var1429;

            // Declare a variable 'unsigned long int var1433' and initialize it with variables 'var1423.member_10, var1428, var1428, var1420'
            unsigned long int var1433 = var1423.member_10 + var1428 + var1428 + var1420;

            // Declare a variable 'unsigned long int var1434' and initialize it with variables 'var1433, var1420'
            unsigned long int var1434 = var1433 + var1420;

            // Using a for loop
            for (int k = 0; k < 2; ++k) {
                // Declare a variable 'short int var1435' and initialize it with variables 'p_3, var1432'
                short int var1435 = p_3 + *var1432;

                // Declare a variable 'unsigned char var1436' and initialize it with variables 'var1429, var1429, var1432'
                unsigned char var1436 = *var1429 + *var1429 + *var1432;

                // Declare a variable 'char var1437' and initialize it with variables 'var1424, var1433'
                char var1437 = var1424 + static_cast<char>(var1433);
            }
        }
    }

    // return a variable
    return static_cast<short int>(var1419 + var1420 + var1421 + var1422.member_2 + var1423.member_9);
}


long long func0(int p_0,float p_1,double p_2,double *p_3)

{
    int var1438 = p_0 + *p_3;
    long long var1439 = 0;
    Container_0 var1440;
    Container_0 var1441;
    Container_1 var1442;
    unsigned char var1443 = var1441.member_2 + var1438;

    if (p_1 > 0) {
        Container_4* var1444 = new Container_4();
        int var1445 = p_0 + p_1;
        int* var1446 = &p_0;

        var1439 = var1445 + var1439;
        var1443 = var1443 * var1439;
        var1442.member_5 = var1445 * p_2;
    } 

    return var1439;
}


