class Container_3 {
public:
    unsigned long member_7;
    unsigned long member_8;
    float member_9;

    Container_3(unsigned long m7, unsigned long m8, float m9) 
        : member_7(m7), member_8(m8), member_9(m9) {}

    ~Container_3() {}
};

class Container_1 : public Container_3 {
public:
    unsigned long member_3;
    int member_4;

    Container_1(unsigned long m7, unsigned long m8, float m9, unsigned long m3, int m4)
        : Container_3(m7, m8, m9), member_3(m3), member_4(m4) {}

    ~Container_1() {}
};

class Container_2 : protected Container_3 {
public:
    bool member_5;
    float member_6;

    Container_2(unsigned long m7, unsigned long m8, float m9, bool m5, float m6)
        : Container_3(m7, m8, m9), member_5(m5), member_6(m6) {}

    ~Container_2() {}
};

class Container_4 : public Container_3 {
public:
    float member_10;
    float member_11;
    float member_12;

    Container_4(unsigned long m7, unsigned long m8, float m9, float m10, float m11, float m12)
        : Container_3(m7, m8, m9), member_10(m10), member_11(m11), member_12(m12) {}

    ~Container_4() {}
};

class Container_0 : public Container_2 {
public:
    int member_1;
    float member_2;

    Container_0(unsigned long m7, unsigned long m8, float m9, bool m5, float m6, int m1, float m2)
        : Container_2(m7, m8, m9, m5, m6), member_1(m1), member_2(m2) {}

    ~Container_0() {}
};