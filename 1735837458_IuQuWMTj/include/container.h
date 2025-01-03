class Container_0 {
public:
    double member_1;
    double member_2;

    Container_0(double m1 = 0.0, double m2 = 0.0)
        : member_1(m1), member_2(m2) {}

    ~Container_0() {}
};

class Container_1 : public Container_0 {
public:
    long double member_3;
    unsigned char member_4;
    double member_5;
    long double member_6;
    float member_7;
    Container_0 member_10;

    Container_1(long double m3 = 0.0, unsigned char m4 = 0, double m5 = 0.0, long double m6 = 0.0, 
                float m7 = 0.0, Container_0 m10 = Container_0())
        : Container_0(), member_3(m3), member_4(m4), member_5(m5), member_6(m6), member_7(m7), member_10(m10) {}

    ~Container_1() {}
};

class Container_2 : public Container_0 {
public:
    Container_0 member_8;
    Container_1 member_9;
    Container_0 member_11;

    Container_2(Container_0 m8 = Container_0(), Container_1 m9 = Container_1(), Container_0 m11 = Container_0())
        : Container_0(), member_8(m8), member_9(m9), member_11(m11) {}

    ~Container_2() {}
};