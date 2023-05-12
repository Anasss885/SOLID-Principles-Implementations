class IShape {
public:
    virtual void draw() = 0;
    virtual void resize() = 0;
    virtual void rotate() = 0;
};

class Circle : public IShape {
public:
    void draw() override {
        // draw circle
    }
    void resize() override {
        // resize circle
    }
    void rotate() override {
        // rotate circle
    }
};

class Square : public IShape {
public:
    void draw() override {
        // draw square
    }
    void resize() override {
        // resize square
    }
    void rotate() override {
        // rotate square
    }
};

/*
The point here is we have a single interface that have number of methods so any class that'll implement this interface need to 
implement all of these methods even if it didn't need them , so this is an Explicit Violation to Interface Segregation Principle ISP , what's the solution?

*/
