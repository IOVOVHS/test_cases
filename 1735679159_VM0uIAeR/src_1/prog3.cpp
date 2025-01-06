#include"prog3.h"

int func9(double p_0,double *p_1)

{
    Container_0* var1509 = new Container_0();
    unsigned char var1510 = var1509->member_2;

    float var1511 = 1.0f;
    long int var1512 = 100;
    unsigned char var1513 = 5;

    var1510 = var1509->member_2;

    var1512 = var1513 * 10;
    var1513 = var1512 + var1510;

    if (p_0 > 0.0) {
        double var1514 = *p_1 * var1513;
        long int var1515 = var1512 + var1513;
        long int var1516 = var1512 + var1509->member_2;

        var1512 = *p_1 * 5;
    } else {
        unsigned char var1517 = var1513 + var1513 + static_cast<unsigned char>(p_0);
        long int* var1518 = &var1512;
        float var1519 = var1511 + var1510;

        var1519 = var1519 * var1519;
    }

    return var1512;
}


long double func10(short int p_0,int p_1,short int p_2,long long p_3)

{
    int var1520 = 12345; // Initialize var1520 with a constant value.

    int var1521 = var1520 + p_2; // Initialize var1521 by adding var1520 and p_2.

    Container_1* var1522 = new Container_1(); // Dynamically allocate a Container_1 object for var1522.

    var1522->member_2 = p_3 * 2 + p_1; // Assign to member_2 of var1522 with a complex calculation using p_3 and p_1.

    var1522->member_3 = var1521 * 0.5; // Assign to member_3 of var1522 with a complex calculation using var1521.

    var1522->member_5 = p_3 / 3 + p_0 * 4; // Assign to member_5 of var1522 with a complex calculation using p_3 and p_0.

    var1522->member_2 = p_1 + var1521 * 2; // Assign to member_2 of var1522 with a complex calculation.

    var1522->member_3 = var1521 * p_0 + p_3; // Assign to member_3 of var1522 with a calculation using var1521, p_0, and p_3.

    delete var1522; // Delete the dynamically allocated memory.

    return 0.0; // Return a variable (constant zero in this case).
}


char func11(short int p_0,long double p_1,int p_2,double *p_3)

{
    int var1523 = p_2 + p_0;

    int var1524 = var1523 + p_1;

    int var1525 = p_2 + var1523 + p_2;

    short var1526 = func6(p_0, p_1, p_3);

    return var1526;
}


