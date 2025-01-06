#include"prog1.h"

char func5(long double p_0,long double p_1,long double p_2)

{
    // declare pointer long double var1280 = &[p_2] 
    long double* var1280 = &p_2;

    // declare pointer long double var1281 = &[var1280] 
    long double* var1281 = &(*var1280);

    // Declare variables Container_0* var1282, and initialize them using new() 
    Container_0* var1282 = new Container_0();

    // 3 assignment statements with complex calculations, use variables var1282.member_2, var1282.member_3 
    var1282->member_2 = static_cast<unsigned char>(p_0 * p_1);
    var1282->member_3 = p_0 + p_1 + p_2;

    // Using a for loop. 
    for (int i = 0; i < 3; ++i) {

        // Declare variables Container_0* var1283, and initialize them using new() 
        Container_0* var1283 = new Container_0();

        // Declare a variable 'unsigned char var1284' and initialize it with variables 'var1283.member_2, var1282.member_2'. 
        unsigned char var1284 = static_cast<unsigned char>(var1283->member_2 + var1282->member_2);

        // Declare a variable 'double var1285' and initialize it with variables 'var1282.member_3, var1282.member_2'. 
        double var1285 = var1282->member_3 + var1282->member_2;

        // 3 assignment statements with variables and constants, use variables var1282.member_3, var1284
        var1282->member_3 = var1285 + var1284;
        var1283->member_2 = var1284 + 5;
        var1282->member_2 = static_cast<unsigned char>(var1284 + 3);

        // 2 assignment statements with variables and constants, use variables var1283.member_2, var1284, var1284 
        var1283->member_2 = var1284 + 4;
        var1284 = static_cast<unsigned char>(var1284 - 2);

        // If statement, the conditional expression uses 1 operator 
        if (var1282->member_2 > var1283->member_2) {

            // Declare 2 variables, the variables are 'unsigned int var1286, int var1287,' and initialize them by constant 
            unsigned int var1286 = 10;
            int var1287 = 20;

            // declare pointer long double var1288 = &[var1281] 
            long double* var1288 = &(*var1281);

            // Declare a variable 'unsigned char var1289' and initialize it with variables 'var1282.member_2, var1283.member_2, var1281'. 
            unsigned char var1289 = static_cast<unsigned char>(var1282->member_2 + var1283->member_2 + (*var1281));

            // Using a for loop. 
            for (int j = 0; j < 2; ++j) {

                // declare pointer unsigned char var1290 = &[var1283.member_2] 
                unsigned char* var1290 = &var1283->member_2;

                // Declare a variable 'long double var1291' and initialize it with variables 'var1280, var1280, var1286'. 
                long double var1291 = (*var1280) * (*var1280) * var1286;

                // Declare a variable 'int var1292' and initialize it with variables 'var1287, var1285'. 
                int var1292 = var1287 + static_cast<int>(var1285);
            }
        } else {

        }
    }

    // return a variable 
    return 'A'; // Returning a sample character as the function output
}



template<typename T1,typename T2,typename T3>
short int func4(T1 p_0,T2 p_1,T3 p_2,unsigned long p_3,int p_4)

{
    Container_1* var1305 = new Container_1();  // Create a new Container_1 instance and assign it to var1305

    T3* var1306 = &p_2;  // Declare pointer of type T3 and assign it the address of p_2

    int var1307 = 1;  // Initialize var1307 with a constant value
    Container_2 var1308;  // Declare an instance of Container_2
    long long var1309 = 100LL;  // Initialize var1309 with a constant value
    unsigned int var1310 = 50;  // Initialize var1310 with a constant value

    if (p_3 > 100) {  // If statement condition using p_3 to compare with 100
        int* var1311 = &p_4;  // Declare pointer to int and initialize with address of p_4
        T1* var1312 = &p_0;  // Declare pointer to T1 and initialize with address of p_0
        T1* var1313 = &(*var1312);  // Declare pointer to T1 and initialize with value pointed by var1312

        // 3 assignment statements with complex calculations involving var1305.member_2
        var1305->member_2 = static_cast<unsigned char>(var1307 + var1309);
        var1305->member_2 = static_cast<unsigned char>(var1308.member_7 + p_1);
        var1305->member_2 = static_cast<unsigned char>(var1310 + static_cast<unsigned int>(*var1313));
    } else {
        int var1314 = p_4 + p_4;  // Declare and initialize var1314 with sum of p_4 and p_4
        unsigned int var1315 = var1310 + var1308.member_6;  // Declare and initialize var1315
        long int var1316 = 200L;  // Declare and initialize var1316 with a constant value
    }

    delete var1305;  // Clean up dynamically allocated memory

    return 0;  // Return a short int value
}


long long func3(double p_0,float p_1,long double p_2,int p_3,long double p_4)

{
    Container_3* var1327 = new Container_3();
    
    float var1328 = p_1 + p_2;
    
    unsigned int var1329 = 100;
    Container_2 var1330;
    float var1331 = 3.14f;
    double var1332 = 2.718;
    
    if (p_0 > 0) {
        Container_1* var1333 = new Container_1();
        
        unsigned int var1334 = var1329 + var1330.member_10;
        
        Container_4* var1335 = new Container_4();
        var1335->member_16 = 'A';
        var1335->member_2 = 200;
    } else {
        // end if
    }
    
    return p_3;
}


