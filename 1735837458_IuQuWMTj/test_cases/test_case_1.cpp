#include"prog3.h"
int main(){
    // Declare a variable 'var338' and initialize it with variables 'member_1' and 'member_2' of Container_0
    Container_0 container_0_instance(3.0, 4.0);
    double var338 = container_0_instance.member_1 + container_0_instance.member_2;

    // Declare a variable 'var339' and initialize it with variables 'member_3', 'member_4', and 'member_5' of Container_1
    Container_1 container_1_instance(5.0, 10, 2.0, 6.0, 7.0, container_0_instance);
    double var339 = container_1_instance.member_3 + container_1_instance.member_4 + container_1_instance.member_5;

    // Declare 2 variables 'double var340, double var341,' and initialize them by constants
    double var340 = 1.23;
    double var341 = 4.56;

    // 2 assignment statements with variables and constants, use variables
    var340 = var340 + 3.0;
    var341 = var341 - 1.0;

    // 3 assignment statements with complex calculations, use variables, var338
    var338 = var338 * 2.0 + 5.0;
    var338 = var338 / 3.0 - 1.0;
    var338 = var338 * var340;

    // 2 assignment statements with complex calculations, use variables var339, var338, var339
    var339 = var339 + var338;
    var339 = var339 - var340;
}
