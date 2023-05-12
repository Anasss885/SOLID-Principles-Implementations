class IOnOff {
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
};

class IMusicPlayer {
public:
    virtual void playMusic() = 0;
};

class ICamera {
public:
    virtual void takePhoto() = 0;
};

class SmartPhone : public IOnOff, IMusicPlayer, ICamera {
public:
    void turnOn() override {
        // turn on phone
    }
    void turnOff() override {
        // turn off phone
    }
    void playMusic() override {
        // play music on phone
    }
    void takePhoto() override {
        // take photo on phone
    }
};

class SmartWatch : public IOnOff, IMusicPlayer {
public:
    void turnOn() override {
        // turn on watch
    }
    void turnOff() override {
        // turn off watch
    }
    void playMusic() override {
        // watch cannot play music
    }
};

/*
Making such of several interfaces to ease the specification problem as we have split the IDevice interface into three smaller, 
more focused interfaces: IOnOff, IMusicPlayer, and ICamera. We then have two concrete classes, SmartPhone and SmartWatch, 
that implement only the interfaces they need. This allows clients to depend only on the interfaces they need, rather than being forced to 
depend on a larger, monolithic interface that includes irrelevant methods.
*/
