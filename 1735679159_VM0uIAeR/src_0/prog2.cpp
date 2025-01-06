#include"prog2.h"

short int func6(short int p_0,long double p_1,double *p_2)

{
    short int var1336 = p_0 + static_cast<short int>(p_1);
    long double* var1337 = &p_1;
    short int var1338 = p_0 + static_cast<short int>(*var1337);
    var1336 = static_cast<short int>(var1336 * p_1);
    char var1339 = func5(p_1, p_1, p_1);
    return var1336;
}



template<typename T1,typename T2,typename T3>
short int func7(T1 p_0,T2 p_1,T3 p_2,double p_3,unsigned long p_4)

{
    T1 var1340 = p_0 + p_3;

    double var1341 = p_3 + p_1;

    unsigned int var1342 = 10;
    double var1343 = 20.0;
    int var1344 = 30;
    float var1345 = 40.0f;
    Container_0 var1346;

    var1342 = p_4 + p_1;
    var1346.member_2 = var1342;
    var1343 = p_3 + var1346.member_3;

    if (p_4 > var1342) {
        float var1347 = var1345 + p_4;

        Container_3* var1348 = new Container_3();
        T2* var1349 = &p_1;

        var1343 = var1343 + p_3 + var1346.member_3;
        var1343 = p_4 + var1343;
    } else {
        T2 var1350 = p_1 + var1344;
        T2 var1351 = p_1 + var1343;
        T2 var1352 = var1350 + p_1;
    }

    return 0;
}


double func8(float p_0,short int p_1,long long p_2)

{
    Container_3 var1366; 
    float var1367 = 3.14f; 
    Container_0 var1368; 
    Container_3 var1369; 

    long long var1370 = 100LL; 
    unsigned char var1371 = 255; 
    Container_3 var1372; 

    unsigned char var1373 = var1368.member_2 + var1369.member_11; 

    var1368.member_3 = p_0 * var1366.member_11 + p_0;

    return var1368.member_3;
}


