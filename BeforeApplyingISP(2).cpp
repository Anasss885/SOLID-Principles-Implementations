class IAnimal {
public:
    virtual void walk() = 0;
    virtual void swim() = 0;
    virtual void fly() = 0;
};

class Dog : public IAnimal {
public:
    void walk() override {
        // dog walks
    }
    void swim() override {
        // dog swims
    }
    void fly() override {
        // dog cannot fly
    }
};

class Bird : public IAnimal {
public:
    void walk() override {
        // bird walks
    }
    void swim() override {
        // bird cannot swim
    }
    void fly() override {
        // bird flies
    }
};



/*
in this ex. we have an interface(IAnimal) with three pure virtual methods that define the behravior of three functions , so we need this interface to
complete implementing any animal class but not all of these classes have to implement the three functions (according to logical aspect and Design principles) so 
we need to solve this design problem in order to make each class implement a specific number of functions that's supposed to implemnt them , what should we do ?
*/
