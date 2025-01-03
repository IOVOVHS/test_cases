#include"prog0.h"

float func1(long double p_0,int p_1,long double p_2,long double p_3,float p_4)

{
    int var1 = static_cast<int>(p_1 + p_0);

    float* var2 = &p_4;

    float var3 = p_4 + *var2;

    var2 = &var3;
    var3 = var3 * *var2;

    p_3 = p_3 + p_1;
    p_1 = static_cast<int>(p_1 - p_3);

    p_0 = p_0 + var3;
    var3 = static_cast<float>(p_0 * var3);

    return var3;
}


char func2(short int p_0,short int p_1,float p_2,long double p_3,int p_4)

{
    long double var4 = p_3 + p_4;
    long double var5 = var4 + var4;
    int var6 = static_cast<int>(p_4 + var4);

    // First complex assignment
    var5 += p_2 * p_0;
    
    // Second complex assignment
    var6 -= static_cast<int>(p_2 * p_0);

    for (int i = 0; i < var6; ++i) {
        long double var7 = var5 + p_3;
        
        Container_2* var8 = new Container_2();
        
        short int var9 = p_1 + p_0;
        
        // First complex assignment
        var7 += static_cast<long double>(var9 * p_1);
        
        // Second complex assignment
        var8->member_9.member_7 = static_cast<float>(var9 * var7);
    }
    
    return static_cast<char>(var6);
}


float func0(double p_0,float p_1,long long p_2)

{
    Container_2* var10 = new Container_2(); 
    long long var11 = p_2 + var10->member_8.member_1; 

    Container_1* var12 = new Container_1();
    var12->member_6 = 10.0;
    var12->member_3 = 20.0;
    var12->member_7 = p_1;
    var12->member_7 = 30.0;

    for (unsigned int var13 = 0; var13 < 5; ++var13) {
        Container_0 var14;
        Container_0* var15 = new Container_0();
        float var16 = p_1 + var10->member_1;

        if (var16 > 0) {
            long long var17 = p_2 + var12->member_5;
            float var18 = 3.0;
            long long var19 = 4;
            long double var20 = var12->member_6 + var12->member_6;
        } else {
            // else block (empty for now)
        }
    }

    return var12->member_7;
}


