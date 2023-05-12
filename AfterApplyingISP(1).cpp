class IDrawable {
public:
    virtual void draw() = 0;
};

class IResizable {
public:
    virtual void resize() = 0;
};

class IRotatable {
public:
    virtual void rotate() = 0;
};

class Circle : public IDrawable, IResizable {
public:
    void draw() override {
        // draw circle
    }
    void resize() override {
        // resize circle
    }
};

class Square : public IDrawable, IRotatable {
public:
    void draw() override {
        // draw square
    }
    void rotate() override {
        // rotate square
    }
};

/*
the Solution is we will divide the pervious interface IShape  to three interfaces with specific methods , as any class want to do specific mission will implement
the suitable interface so by doing this we've implement Interface Segregation Principle ISP and the principle of least privilege . 
*/
