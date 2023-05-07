class Animal {
public:
  virtual void makeSound() {}
};

class Dog : public Animal {
public:
  void makeSound() override { std::cout << "Woof!" << std::endl; }
};

class Cat : public Animal {
public:
  void makeSound() override { std::cout << "Meow!" << std::endl; }
};

void makeNoise(const Animal& animal) {
  animal.makeSound();
}

int main() {
  Dog dog;
  Cat cat;
  makeNoise(dog); // prints "Woof!"
  makeNoise(cat); // prints "Meow!"
  return 0;
}
/*in this example we can instantiate an instance from animal class that can't act by any object from both of derived classes which a critical violation to LSP
, so how can we solve this design problem to apply LSP and make all objects related to super class and subclass replaceable??

*/
