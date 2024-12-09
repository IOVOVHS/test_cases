#include"prog1.h"

char func_char_rand_2(char p_0,char p_1,char p_2,char *p_3)

{
    float var45 = 3.14f, var47 = 2.71f;
    char var46 = 'A';
    Container_3 var48(10, 20, 30.5f);
    Container_0 var49(10, 20, 30.5f, true, 5.5f, 100, 200.0f);
    float var50 = 1.23f;
    int var51 = var49.member_1;

    var45 = var46 * 2.0f;
    var47 = var48.member_7 / 5.0f;

    var48.member_7 = var48.member_7 + 10;
    var48.member_7 = var48.member_7 * 2;

    var51 = var51 + 10;
    var51 = var51 - 5;

    return func_int_rand_1(var49.member_1, var51, 0, 10, 100);
}


short int func_short_rand_3(short int p_0,short int p_1,short int p_2,short int p_3,short int p_4)

{
    int var52 = 100; 
    Container_0 var53(1, 2, 3.0f, true, 4.0f, 5, 6.0f); 
    
    int var54 = var53.member_1; 
    int var55 = var53.member_1; 

    func_int_rand_1(var52, var53.member_1, var54, var55, p_0);

    for (int i = 0; i < 10; ++i)
    {
        Container_2* var56 = new Container_2(1, 2, 3.0f, true, 4.0f); 
        float var57 = var53.member_2; 

        int var58 = 7; 
        float var59 = 8.0f; 
        unsigned char var60 = 9; 
        float var61 = 10.0f; 
        bool var62 = false; 

        for (int j = 0; j < 5; ++j)
        {
            bool var63 = var62; 
            bool var64 = var56->member_5; 
            int var65 = var53.member_1;

            if (var63)
            {
                unsigned char var66 = var60; 
                Container_2* var67 = new Container_2(1, 2, 3.0f, true, 4.0f); 

                int var68 = 11; 
                long long var69 = 12; 
                char var70 = 'A'; 

                func_int_rand_1(var52, var53.member_1, var54, var55, var58);

                if (var62)
                {
                    bool var71 = var62; 
                    char var72 = var70; 
                    long double var73 = 13.0; 

                    var66 += 1; 
                    var66 *= 2; 
                    func_int_rand_1(var52, var53.member_1, var54, var55, p_1);
                }
            }
        }
    }

    return p_4;
}


