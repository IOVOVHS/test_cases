class Container_1 {
    public:
        long double member_4;
        char member_5;
    
        Container_1() : member_4(0), member_5('a') {}
        ~Container_1() {}
    };
    
    class Container_0 : public Container_1 {
    public:
        char member_1;
        double member_2;
        int member_3;
        Container_1 member_10;
    
        Container_0() : member_1('b'), member_2(0.0), member_3(0), member_10() {}
        ~Container_0() {}
    };
    
    class Container_2 : public Container_1 {
    public:
        double member_6;
        long double member_7;
    
        Container_2() : member_6(0.0), member_7(0.0) {}
        ~Container_2() {}
    };
    
    class Container_3 : private Container_0 {
    public:
        int member_8;
        float member_9;
    
        Container_3() : member_8(0), member_9(0.0f) {}
        ~Container_3() {}
    };

template<typename T1,typename T2>
double func0(T1 p_0,T2 p_1)
{
    double var1 = 10.5, var2 = 20.3;

    double var3 = var1 + var2;
    T1 var4 = p_0 * var2;

    var2 = var1 * var3;
    var3 = var1 * var2 + var3;
    var1 = var2 * var3 + var1;

    for (int i = 0; i < 3; ++i) {
        double var5 = 12.7, var6 = 8.9, var7 = 14.1;

        T2 var8 = p_1 + p_0;
        T2 var9 = p_1 - var8;

        for (int j = 0; j < 2; ++j) {
            double var10 = 6.3, var11 = 9.4;

            double var12 = var1 + var2 + var3 + var5;

            Container_1* var13 = new Container_1();
            delete var13;
        }
    }

    return var1;
}


template<typename T1>
double func1(T1 p_0)
{
    double var14 = 3.14, var15 = 2.71;

    T1 var16 = p_0 * var15;

    Container_3* var17 = new Container_3();

    var17->member_9 = var15;

    for (int i = 0; i < 5; ++i) {
        double var18 = 1.23, var19 = 4.56, var20 = 7.89;

        double* var21 = &var14;
        double* var22 = &var14;

        var17->member_9 = var17->member_9 + var15 * var18;

        var14 = var15 + var18 - var19 * var20;

        var17->member_9 = var17->member_9 * var15;
    }

    return var15;
}


template<typename T1>
unsigned char func2(T1 p_0)
{
    unsigned char var23 = 5, var24 = 10, var25 = 15;

    T1 var26 = p_0 + var24;

    unsigned char var27 = var23 + var24 + var25;

    p_0 = var26;

    if (p_0 > 20) {
        unsigned char var28 = 3, var29 = 7;
        unsigned char var30 = var23 + var24 + var25 + var27;

        Container_0* var31 = new Container_0();

        var23 = var23 + var24 + var25 + var27;
    }

    return var27;
}



template<typename T1>
float func5(T1 p_0)
{
    float var32 = 3.14f;

    Container_2* var33 = new Container_2();

    char var34 = var33->member_5 + static_cast<char>(var33->member_7);

    var33->member_7 = var33->member_4 * 1.5;
    var33->member_6 = var33->member_7 + var33->member_4 - var32;
    var33->member_4 = var33->member_6 * 2.0;

    var33->member_6 = func0(p_0, var32);

    unsigned char var35 = func2(var33->member_4);

    var33->member_6 = func1(var33->member_4);

    p_0 = var32;

    return var32;
}


long long func11(long long p_0,long long p_1,float p_2)
{
    long long var243 = 1234567890LL;

    Container_1* var244 = new Container_1();

    float var245 = p_2 + p_1;

    p_0 = p_0 * var243 + p_1;
    p_1 = p_1 - var243;
    var243 = p_0 / 2;

    var245 = func5(var245); // Assuming func5 is adapted to work with float and returns a value

    for (int i = 0; i < 3; ++i) {
        long long var246 = 9876543210LL, var247 = 1122334455LL;

        float var248 = p_2 + var245;

        char* var249 = &var244->member_5;

        unsigned char var250 = func2(var246); // Assuming func2 works with long long and returns unsigned char
        double var251 = func1(var244->member_5); // Assuming func1 works with char and returns double
    }

    return p_1;
}


int main()
{
    int var579 = 25;
    Container_0 var580;
    long long var581 = 100000;

    long long var582 = var581 + var580.member_3;
    double var583 = var580.member_2 + var582;

    var580.member_2 = var583 * 0.9 + var581 * 1.1;

    var581 = var582 + 50;

    var580.member_1 = (var580.member_3 > 10) ? 'X' : 'Y';

    Container_2 var584;
    short int var585 = 5;

    char var586 = var580.member_1 + var584.member_5;

    int var587 = var579 + var580.member_3;

    var585 = var583 + var580.member_3;

    var580.member_1 = 'A' * var584.member_5 + var586;
    var581 = var582 + 10;

    if (var580.member_2 > 20.0) {
        Container_1 var588;
        Container_0 var589;

        short int var590 = 12;
        unsigned char var591 = 9;
        float var592 = 15.5;

        float var593 = var592 + var587;

        var582 = func11(var582, var582, var592);

        var580.member_3 = var579 + var580.member_3 + var587 + var589.member_3;

        if (var580.member_3 < 50) {
            unsigned char var594 = 8;
            int var595 = 100;

            Container_1* var596 = new Container_1();
            int var597 = var579 + var580.member_3 + var587 + var589.member_3;
        }
    }

    return 0;
}
