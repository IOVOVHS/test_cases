
#include<utility>


#include<stdexcept>
#include<functional>
#include<thread>
#include<type_traits>
#include<iostream>

class Container_0 {
public:
    double member_1;
    double member_2;
    int member_3;

    // Constructor
    Container_0(double m1 = 0.0, double m2 = 0.0, int m3 = 0)
        : member_1(m1), member_2(m2), member_3(m3) {}

    // Destructor
    ~Container_0() {}
};

class Container_2 : public Container_0 {
public:
    unsigned char member_6;
    unsigned char member_7;
    long long member_8;

    // Constructor
    Container_2(double m1 = 0.0, double m2 = 0.0, int m3 = 0,
                unsigned char m6 = 0, unsigned char m7 = 0, long long m8 = 0)
        : Container_0(m1, m2, m3), member_6(m6), member_7(m7), member_8(m8) {}

    // Destructor
    ~Container_2() {}
};

class Container_3 : public Container_2 {
public:
    char member_9;
    long long member_11;
    Container_2 member_12;

    // Constructor
    Container_3(double m1 = 0.0, double m2 = 0.0, int m3 = 0,
                unsigned char m6 = 0, unsigned char m7 = 0, long long m8 = 0,
                char m9 = 0, long long m11 = 0)
        : Container_2(m1, m2, m3, m6, m7, m8), member_9(m9), member_11(m11) {}

    // Destructor
    ~Container_3() {}
};

class Container_1 : public Container_3 {
public:
    unsigned long int member_4;
    char member_5;

    // Constructor
    Container_1(double m1 = 0.0, double m2 = 0.0, int m3 = 0,
                unsigned char m6 = 0, unsigned char m7 = 0, long long m8 = 0,
                char m9 = 0, long long m11 = 0, unsigned long int m4 = 0, char m5 = 0)
        : Container_3(m1, m2, m3, m6, m7, m8, m9, m11), member_4(m4), member_5(m5) {}

    // Destructor
    ~Container_1() {}
};

float func2(long double p_0,long double p_1,short int p_2,unsigned long int p_3){}
char func0(long double p_0,long double p_1,int p_2){}
double func1(double p_0,char p_1){}
unsigned long int func4(unsigned char p_0,float p_1,char p_2,double p_3)
{
    unsigned long int var103 = 0;

    Container_0* var104 = new Container_0();
    Container_1* var105 = new Container_1();

    var104->member_2 = p_0 * p_3;
    var105->member_5 = p_2;

    var104->member_1 = func1(var104->member_1, var105->member_5);

    auto task1 = [&]() {
        if (var104->member_1 > p_3) {
            unsigned long int var106 = 100;
            unsigned long int var107 = 200;
            unsigned long int var108 = 300;

            unsigned long int var109 = var103 + var105->member_4 + var106 + var107;
            float var110 = p_1 + p_0;

            var104->member_1 = func1(var104->member_2, p_2);

            auto task2 = [&]() {
                for (unsigned long int i = 0; i < 5; ++i) {
                    unsigned long int var111 = 10;
                    unsigned long int var112 = 20;
                    unsigned long int var113 = 30;

                    unsigned char* var114 = &p_0;

                    Container_2 var115(1.0, 2.0, 3, 4, 5, 6);
                    Container_1 var116(7.0, 8.0, 9, 10, 11, 12, 13, 14, 15, 16);
                }
            };

            std::thread t2(std::move(task2));
            t2.join();
        }
    };

    std::thread t1(std::move(task1));
    t1.join();

    return var103;
}

int main(){}