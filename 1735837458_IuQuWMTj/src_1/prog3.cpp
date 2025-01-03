#include"prog3.h"

long double func9(int p_0,long double p_1,char p_2,short int p_3,double p_4)

{
    double var189 = p_4 + p_0;

    Container_0* var190 = new Container_0(p_4, p_0);

    double var191 = p_4 + p_2;

    for (int i = 0; i < p_0; ++i) {
        // Use function calls with variables p_0, p_4, var189, p_2
        p_2 = func11(p_4, p_0, &p_2);
    }

    double var192 = var190->member_2 + p_4 + var189;

    int* var193 = &p_0;

    long double var194 = p_1 + var190->member_2;

    p_2 = func11(p_4, p_1, &p_2);

    p_2 = func11(p_4, p_1, &p_2);

    delete var190;

    return var194;
}


char func11(double p_0,int p_1,char *p_2)

{
    char var195 = *p_2 + p_0;

    float var196 = 1.0f;

    long long var197 = 1000000, var200 = 2000000;
    Container_0 var198 = Container_0(1.0, 2.0);
    int var199 = 42;

    var198.member_1 = p_1 * var198.member_2 + var197;
    var198.member_2 = p_1 * var198.member_1 + var200;

    var198.member_1 = func6(var197, &var198.member_1);
    var198.member_1 = func6(var200, &var198.member_1);

    return *p_2;
}


char func10(short int p_0,double p_1)

{
    short int var201 = static_cast<short int>(p_0 + p_1);
    short int var202 = static_cast<short int>(p_0 - p_1);
    short int var203 = static_cast<short int>(var201 + p_1);

    var201 = static_cast<short int>(p_1 * 2);
    var202 = static_cast<short int>(p_0 / 2);
    var203 = static_cast<short int>(var201 + var202);

    if (p_0 > 0) {
        short int var204 = static_cast<short int>(var201 + p_0 + p_1);
        Container_2* var205 = new Container_2();
        short int var206 = static_cast<short int>(var203 + var205->member_8.member_1);

        var203 = static_cast<short int>(p_1 * 3);
        var201 = static_cast<short int>(var202 * 2);
    } else {
        short int var207 = static_cast<short int>(var202 + var201 + p_0);
        short int* var208 = &p_0;
        short int* var209 = &var207;

        var201 = static_cast<short int>(var203 + var207 + p_0);
        var202 = static_cast<short int>(var203 - var201);
        var203 = static_cast<short int>(var202 * var207);
    }

    return static_cast<char>(var203);
}


