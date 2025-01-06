#include"prog0.h"

long long func0(int p_0,float p_1,double p_2,double *p_3)

{
    int var1257 = p_0 + *p_3;
    int var1258 = var1257 + p_2;
    float var1259 = p_1 + *p_3;

    if (var1259 > 0.0f) {
        float var1260 = p_1 + *p_3;
        float var1261 = p_1 + p_1 + var1258;

        short int var1262 = 5;
        int var1263 = 10;
        double var1264 = 15.5;
        double var1265 = 20.0;
        Container_4 var1266;

        var1257 = var1257 + var1263;
        var1257 = var1257 + var1262;

        var1260 = var1260 + var1265;
        var1260 = var1260 + var1261;

        var1266.member_14 = var1264;
        var1266.member_15 = 25;
    }

    return var1257;
}



template<typename T1>
short int func2(T1 p_0,long long p_1,float p_2,short int p_3)

{
    float var1267 = p_2 + static_cast<float>(p_0);

    unsigned int var1268 = 42;

    T1 var1269 = p_0 + static_cast<T1>(p_2);

    p_1 = p_1 * p_2 + var1268;
    p_2 = p_2 / p_1;
    
    var1268 = var1268 - p_3;
    p_3 = p_3 + var1268;

    var1268 = var1268 * p_2;

    for (int i = 0; i < var1268; ++i) {
        short int var1270 = p_3 + var1268;
        T1* var1271 = &p_0;
        long long var1272 = p_1 * var1268;
    }

    return static_cast<short int>(var1268);
}


short int func1(char p_0,float p_1,long long p_2,short int p_3,long double p_4)

{
    long double* var1273 = &p_4;

    short int var1274 = p_3 + static_cast<short int>(*var1273);

    Container_2 var1275;
    int var1276 = 5;
    unsigned short int var1277 = 10;
    Container_3 var1278;
    long int var1279 = 100;

    var1275.member_10 = var1276 + 20;
    var1278.member_11 = p_1 * 2.0f;

    var1275.member_10 = var1275.member_10 * var1279;
    var1278.member_11 = var1278.member_11 + p_4;

    p_0 = p_0 + 5;

    var1277 = static_cast<unsigned short int>(var1277 * p_4);
    var1275.member_2 = static_cast<unsigned char>(var1275.member_2 + p_0);

    return var1274;
}


