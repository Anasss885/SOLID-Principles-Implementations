class Bird {
public:
  virtual void fly() {}
  virtual void sing() {}
};

class Penguin : public Bird {
public:
  void fly() override { /* do nothing */ }
  void sing() override { std::cout << "HONK!" << std::endl; }
};

void makeBirdSing(Bird& bird) {
  bird.sing();
}

int main() {
  Penguin penguin;
  makeBirdSing(penguin); // prints "HONK!"
  return 0;
}

/*The Penguin object can't deal with fly function logic but if we inherit another class from bird it may can deal properly with fly logic so the voilation of LSP takes place
, what should we do?
*/
