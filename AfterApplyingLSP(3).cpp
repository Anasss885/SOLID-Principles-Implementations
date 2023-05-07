class Bird {
public:
  virtual void sing() {}
};

class FlyingBird : public Bird {
public:
  virtual void fly() {}
};

class Penguin : public Bird {
public:
  void sing() override { std::cout << "HONK!" << std::endl; }
};

void makeBirdSing(const Bird& bird) {
  bird.sing();
}

int main() {
  Penguin penguin;
  makeBirdSing(penguin); // prints "HONK!"
  return 0;
}

/*
So the solution is to separate the Fly function away from bird class to avoid any mis-correct applying/understanding to future derived classes as not all birds can fly 
, by this way we get LSP Applied properly .
*/
