class Container_0 {
private:
    long double member_1;

public:
    unsigned char member_2;
    double member_3;

    Container_0() : member_1(0.0), member_2(0), member_3(0.0) {}
    ~Container_0() {}
};

class Container_1 : public Container_0 {
protected:
    double member_4;

public:
    double member_5;
    Container_0 member_17;

    Container_1() : member_4(0.0), member_5(0.0), member_17() {}
    ~Container_1() {}
};


int func9(double p_0,double *p_1)
{
    double var1377 = *p_1 * *p_1;
    double var1378 = p_0;
    double var1379 = *p_1 + var1378 + var1378;
    *p_1 = p_0 * var1379 - *p_1;
    var1377 = var1377 + var1378;
    var1377 = var1377 * p_0;
    
    return static_cast<int>(var1377);
}

int main(){
    double var1867 = 0.0;
    double var1868 = var1867;
    Container_1* var1869 = new Container_1();
    int var1870;
    for(int i = 0; i < 10; ++i){
        int var1871 = var1870 + var1869->member_2;
        unsigned char* var1872 = &var1869->member_2;
        double* var1873 = &var1869->member_5;
        var1871 = func9(var1869->member_5, &var1869->member_3);
        var1871 = func9(var1869->member_5, &var1869->member_3);
    }
    if (var1869->member_5 > 0) {
        unsigned char* var1874 = &var1869->member_2;
        int var1877 = 10;
        int var1878 = 20;
        var1877 = var1869->member_5 * var1877;
        var1868 = var1869->member_5;
        var1869->member_5 = var1878;

    } else {
    }
}
