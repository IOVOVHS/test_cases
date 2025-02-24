class Container_2 {
    public:
        double member_7;
        unsigned long int member_8;
    
        Container_2() : member_7(0.0), member_8(0) {}
        ~Container_2() {}
    };
    
    class Container_1 : protected Container_2 {
    public:
        long long member_4;
        unsigned char member_5;
        double member_6;
        Container_2 member_9;
    
        Container_1() : member_4(0), member_5(0), member_6(0.0), member_9() {}
        ~Container_1() {}
    };
    
    class Container_0 : public Container_1 {
    public:
        unsigned char member_1;
        char member_3;
        unsigned long int member_2;
    
        Container_0() : member_1(0), member_3(0), member_2(0), Container_1() {}
        ~Container_0() {}
    };

int func1(int p_0,double p_1,unsigned long int p_2,double p_3)
{
    int var409 = 32, var410 = 64;

    unsigned long int var411 = static_cast<unsigned long int>(p_2 * p_3);

    int var412 = p_0 + var409 + var410;

    p_0 = p_0 * var409 + var410;

    p_2 = var411 / 2;

    p_3 = p_3 - 5.0;

    var409 = p_1 > 100.0 ? var409 + 5 : var409 - 5;

    var410 = p_3 > 50.0 ? var410 + 10 : var410 - 10;

    p_2 = var411;

    return var412;
}


long double func0(int p_0)
{
    long double var413 = 2.71828, var414 = 3.14159;

    Container_0* var415 = new Container_0();
    Container_1* var416 = new Container_1();

    var413 = p_0 * 0.5 + 3.0;
    var414 = var413 * 2.0 + 1.0;

    var415->member_1 = 65;
    var416->member_5 = 75;

    var415->member_2 = static_cast<unsigned long int>(var413 * 100);
    var416->member_6 = var414;

    var415->member_3 = 'C';
    var416->member_4 = 10000000000LL;

    var416->member_5 = var415->member_1 + var416->member_5;

    delete var415;
    delete var416;

    return var413;
}


float func2(char p_0,float p_1)
{
    float var417 = 5.1f, var418 = 2.3f;

    float var419 = p_1 + var417 + var418;

    float var420 = p_1 * var417 + var418 - var419;

    var417 = p_1 * var417 - var418 + var419;

    if (p_0 == 'A') {
        float var421 = 8.4f, var422 = 3.7f;
        int var423 = 10, var425 = 5;
        double var424 = 12.56;

        double var426 = var424 + var422;

        var423 = var425 * 2 + 3;
    } else {
        // No operations for the else block, can be expanded if needed.
    }

    return p_1;
}

template<typename T1>
double func4(T1 p_0)
{
    double var83 = 42.5; // Initialize with some constant value
    long long var84 = 1000000000; // Initialize with some constant value

    double var85 = var83 + p_0; // Initialize var85 with a combination of var83 and p_0

    if (var83 > var85) {
        double var86 = 3.14, var87 = 2.71; // Random initialization

        Container_1 var88;
        long long var89 = 5000000000;
        int var90 = 7;

        long long var91 = var84 + var88.member_4 + var89; // Calculate var91

        long double var92 = func0(var90); // Assuming func0 exists and takes an int

        var85 = var83 * var92; // Update var85 based on var83 and var92
    } else {
        var85 = var83 + var84; // Update var85 in case of else condition
    }

    return var83; // Return the value of var83
}

char func5(char p_0,long double p_1,long double p_2)
{
    char var503 = 'X', var504 = 'Y', var505 = 'Z';
    char var506 = p_0 + var503 + var504 + var505;

    int var507 = 42;  // Just an example of initialization for var507

    var506 = p_0 + var503 + var504 + var505;
    p_0 = p_0 + var503 + var504 + var505;

    p_1 = func0(var507); // Assume func0 is a function that works on an int and returns a long double
    p_2 = func0(var507); // Another call to func0
    p_1 = func0(var507); // And another

    return var506;
}


double func3(long double p_0,long double p_1,double p_2)
{
    double var518 = 42.0;

    int var519 = 100;
    int var520 = 200;
    Container_1 var521;

    long long var522 = var521.member_4 + static_cast<long long>(var518);

    var519 = func0(var520);

    var519 = var519 + var520 * 3;

    var519 = var519 - var520 * 2;

    return p_2;
}

char func7(float p_0)
{
    char var974 = 'X', var975 = 'Y';

    char var976 = var974 + var975;

    float var977 = p_0 + var974;

    double var978 = func4(var977);

    var975 = var974 + var975 + var976;
    var978 = var974 + var978;
    p_0 = var977 + p_0;

    for (int i = 0; i < 5; ++i) {
        char var979 = 'A', var980 = 'B', var981 = 'C';

        Container_0* var982 = new Container_0();

        unsigned char* var983 = &(var982->member_1);
    }

    return var975;
}


float func8(unsigned char p_0,char p_1,int p_2,long long p_3)
{
    float var984 = 3.14f, var985 = 2.71f;

    unsigned int var986 = 42;

    char var987 = p_1 + p_0;

    if (p_2 > 10) {
        float var988 = 1.23f, var989 = 4.56f, var990 = 7.89f;

        char* var991 = &p_1;

        float var992 = var984 + var985 + var988 + var989;

        p_2 = static_cast<int>(var988 * var989);

        double var993 = func4(var984);

        var993 = func4(p_3);

        var984 = static_cast<float>(var993 + var987);
    }

    return var984;
}


float func11(double p_0,char p_1)
{
    float var558 = 12.34f; 

    char var559 = static_cast<char>(p_1 + static_cast<int>(p_0));

    double var560 = p_0 + static_cast<double>(var559);

    func7(var558);

    if (var560 > 50.0) {
        float var561 = 45.67f;

        float var562 = var558 + var561;

        Container_2 var563;
        Container_0 var564;
        float var565 = 123.45f;

        var564.member_1 = static_cast<unsigned char>(var562);
        func7(var558);
        var564.member_3 = var559;
    }
    else {
        // Alternative case (if necessary, add actions here)
    }

    return var558;
}


short int func9(double p_0,unsigned char p_1)
{
    short int var566 = 100, var567 = 200;

    double* var568 = &p_0;

    double var569 = p_0 + *var568;

    var569 = func4(var567);

    var567 = var566 + var567;

    for (int i = 0; i < 3; ++i) {
        short int var570 = 10, var571 = 20, var572 = 30;

        double var573 = 50.0;

        double var574 = p_0 + *var568 + var569 + var573;
    }

    return var566;
}


short int func10(long double p_0,unsigned long int p_1,unsigned long int p_2)
{
    short int var575 = 3, var576 = 7;
    Container_2* var577 = new Container_2();
    Container_0* var578 = new Container_0();

    for (int i = 0; i < 5; ++i) {
        short int var579 = 1, var580 = 9;
        double var581 = var577->member_7 + var575;
        char var582 = var578->member_3 + var577->member_7;

        var581 = func3(p_0, p_0, var577->member_7);

        p_0 = p_0 + var576;
        var578->member_1 = var578->member_3 + var578->member_1;
    }

    return var576;
}


int main()
{
    unsigned short int var1102 = 12345;

    Container_2 var1103;
    char var1104 = 'X';
    int var1105 = 1000;

    int var1106 = var1105 + var1103.member_8;

    float var1107 = func11(var1103.member_7, var1104);

    var1103.member_7 = var1103.member_7 + var1106;
    var1103.member_8 = var1103.member_8 * var1104;
    var1104 = var1104 + 1;

    return 0;
}
