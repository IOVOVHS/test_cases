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

class Container_2 : public Container_0 {
public:
    double member_6;
    unsigned char member_7;
    long long member_8;
    int member_9;
    unsigned long int member_10;

    Container_2() : member_6(0.0), member_7(0), member_8(0), member_9(0), member_10(0) {}
    ~Container_2() {}
};

class Container_4 : public Container_0 {
public:
    long double member_14;
    long long member_15;
    char member_16;
    Container_1 member_18;

    Container_4() : member_14(0.0), member_15(0), member_16('\0'), member_18() {}
    ~Container_4() {}
};

class Container_3 : protected Container_2 {
public:
    float member_11;
    
protected:
    unsigned char member_12;
    char member_13;

private:
    Container_4 member_19;

public:
    Container_3() : member_11(0.0), member_12(0), member_13('\0'), member_19() {}
    ~Container_3() {}
};