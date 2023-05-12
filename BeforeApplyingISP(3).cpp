class IDevice {
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual void playMusic() = 0;
    virtual void takePhoto() = 0;
};

class SmartPhone : public IDevice {
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

class SmartWatch : public IDevice {
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
    void takePhoto() override {
        // watch cannot take photo
    }
};


/*
In this example, we have an IDevice interface that defines four methods: turnOn(), turnOff(), playMusic(), and takePhoto(). 
We then have two concrete classes, SmartPhone and SmartWatch, that implement this interface. 
The problem with this design is that not all devices can perform all four actions. For example, 
a smartwatch cannot play music or take photos, so the playMusic() and takePhoto() methods are irrelevant for that class so, how can we deal with this design?
*/
