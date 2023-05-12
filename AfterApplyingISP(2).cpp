class IWalker {
public:
    virtual void walk() = 0;
};

class ISwimmer {
public:
    virtual void swim() = 0;
};

class IFlyer {
public:
    virtual void fly() = 0;
};

class Dog : public IWalker, ISwimmer {
public:
    void walk() override {
        // dog walks
    }
    void swim() override {
        // dog swims
    }
};

class Bird : public IWalker, IFlyer {
public:
    void walk() override {
        // bird walks
    }
    void fly() override {
        // bird flies
    }
};

/*
Separting those three functions into three interfaces to make our program design is separable therfore applying Interface Segregation Principle ISP and by the way 
implementing Single Responisbility Principle SRP . 
*/
