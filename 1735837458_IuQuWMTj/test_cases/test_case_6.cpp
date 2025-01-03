#include"prog3.h"
int main(){
    Container_1* var415 = new Container_1(); // Declare and initialize var415 as a pointer to Container_1
    
    Container_1 var416; // Declare var416 as an object of type Container_1
    unsigned long int var417 = 123456789; // Declare and initialize var417 as an unsigned long int
    unsigned int var418 = 1000; // Declare and initialize var418 as an unsigned int
    double var419 = 3.14159; // Declare and initialize var419 as a double
    unsigned int var420 = 42; // Declare and initialize var420 as an unsigned int

    var415->member_4 = 255; // Assign a constant value to member_4 of var415
    var415->member_3 = 2.71828; // Assign a constant value to member_3 of var415

    var416.member_5 = var419; // Assign the value of var419 to member_5 of var416
    var416.member_5 = var419 * var417; // Assign the result of var419 multiplied by var417 to member_5 of var416
}
