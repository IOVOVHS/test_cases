#include"prog1.h"
int main(){
    // Declare 3 variables, the variables are 'Container_1 var124, unsigned long int var125, unsigned long int var126,' and initialize them by constant 
    Container_1 var124(100, 200, 3.14f, 300, 400);
    unsigned long int var125 = 500;
    unsigned long int var126 = 600;

    // Declare variables Container_3* var127, and initialize them using new() 
    Container_3* var127 = new Container_3(700, 800, 9.81f);

    // Declare 3 variables, the variables are 'Container_4 var128, unsigned char var129, bool var130,' and initialize them by constant 
    Container_4 var128(900, 1000, 11.12f, 12.13f, 13.14f, 14.15f);
    unsigned char var129 = 'A';
    bool var130 = true;

    // Using a for loop. 
    for (int i = 0; i < 10; ++i) {
        // Declare 3 variables, the variables are 'Container_1 var131, long double var132, int var133,' and initialize them by constant 
        Container_1 var131(1100, 1200, 15.16f, 1300, 1400);
        long double var132 = 16.17;
        int var133 = 1700;

        // Declare 4 variables, the variables are 'unsigned long int var134, unsigned char var135, float var136, Container_4 var137,' and initialize them by constant 
        unsigned long int var134 = 1800;
        unsigned char var135 = 'B';
        float var136 = 19.20f;
        Container_4 var137(2000, 2100, 21.22f, 22.23f, 23.24f, 24.25f);

        // Declare a variable 'unsigned long int var138' and initialize it with variables 'var125'.
        unsigned long int var138 = var125;

        // Using a for loop.
        for (int j = 0; j < 5; ++j) {
            // Declare a variable 'bool var139' and initialize it with variables 'var130'. 
            bool var139 = var130;

            // Declare variables Container_3* var140, and initialize them using new() 
            Container_3* var140 = new Container_3(2200, 2300, 25.26f);

            // Declare a variable 'bool var141' and initialize it with variables 'var130'. 
            bool var141 = var130;

            // 2 assignment statements with complex calculations, use variables var130 
            var141 = !var130;
            var139 = var130 && var141;

            // 1 assignment statement with complex calculations, use variables var132 
            var132 += 1.23;
        }
    }
}
