class Animal {
public:
  virtual void makeSound() = 0;
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
/*
The problem is so easy , everything will be handled just by making the function in animal class is a pure virtual method(Totally non-concrete method), by this way 
we never can't instantiate any object from Animal class so any object from its derived class/classes will be replacable as it will invoke its makeSound version function 
with the same way . Good Job!
*/
