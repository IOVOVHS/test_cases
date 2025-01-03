#include"prog3.h"
int main(){
    // Declare a variable 'var421' and initialize it with variables ''.
    double var421 = 0.0;

    // Declare 2 variables,the variables are 'Container_2 var422,Container_1 var423,' and initialize them by constant.
    Container_2 var422 = Container_2(Container_0(1.0, 2.0), Container_1(3.0, 4, 5.0, 6.0, 7.0, Container_0(8.0, 9.0)), Container_0(10.0, 11.0));
    Container_1 var423 = Container_1(12.0, 13, 14.0, 15.0, 16.0, Container_0(17.0, 18.0));

    // Declare a variable 'unsigned char var424' and initialize it with variables 'var423.member_4,var422.member_8'.
    unsigned char var424 = static_cast<unsigned char>(var423.member_4 + var422.member_8.member_1);

    // 2 assignment statements with complex calculations, use variables var422
    var422.member_9.member_5 = var422.member_8.member_1 + var422.member_9.member_6;
    var422.member_9.member_7 = var422.member_9.member_3 * var422.member_9.member_4;

    // 2 assignment statements with variables and constants, use variables var423.member_7,var422.member_8
    var423.member_7 = var423.member_5 + 5.0;
    var422.member_8.member_2 = var422.member_11.member_1 + 10.0;

    // 3 assignment statements with complex calculations, use variables var424,var423.member_4,var423.member_2
    var424 = static_cast<unsigned char>(var424 + var423.member_4 + var423.member_2);
    var423.member_2 = var423.member_7 - var423.member_5;
    var423.member_4 = static_cast<unsigned char>(var423.member_4 * 2);
}
