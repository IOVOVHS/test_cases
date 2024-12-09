#include"prog1.h"
int main(){
    Container_0 var99(123, 456, 7.89f, true, 10.11f, 5, 20.12f);
    bool var100 = true;
    char var101 = 'A';
    unsigned int var102 = 100;
    long int var103 = 1000L;

    int var104 = var99.member_1;
    float var105 = var99.member_2;

    var101 = func_char_rand_2(var101, var101, var101, &var101);

    for (int i = 0; i < 10; ++i) {
        Container_1 var106(789, 123, 4.56f, 1011, 42);
        long long var107 = 999999L;
        Container_1 var108(321, 654, 3.21f, 2022, 84);
        long long var109 = 888888L;
        Container_3 var110(456, 789, 5.67f);

        char var111 = var101;

        Container_0* var112 = new Container_0(111, 222, 3.14f, false, 5.67f, 10, 20.21f);

        var104 = var111 + var99.member_1;
        var105 = var105 * 2;

        var108.member_3 = var108.member_3 + 100;
        var109 = var109 - 1000;

        for (int j = 0; j < 5; ++j) {
            float var113 = var105;
            Container_3* var114 = new Container_3(123, 456, 7.89f);
            long int var115 = var103;

            var111 = var111 + 1;
        }
    }
}
