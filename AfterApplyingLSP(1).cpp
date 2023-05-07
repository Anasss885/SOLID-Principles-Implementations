class Shape {
public:
  virtual int area() const = 0;
};

class Rectangle : public Shape {
public:
  Rectangle(int width, int height) : width_(width), height_(height) {}
  void setWidth(int width) { width_ = width; }
  void setHeight(int height) { height_ = height; }
  int getWidth() const { return width_; }
  int getHeight() const { return height_; }
  int area() const override { return width_ * height_; }
private:
  int width_;
  int height_;
};

class Square : public Shape {
public:
  Square(int side) : side_(side) {}
  int area() const override { return side_ * side_; }
private:
  int side_;
};

void printArea(const Shape& shape) {
  std::cout << "Area: " << shape.area() << std::endl;
}

int main() {
  Rectangle rectangle(3, 4);
  Square square(5);
  printArea(rectangle); // prints "Area: 12"
  printArea(square); // prints "Area: 25"
  return 0;
}
/*
Now,after applying LSP Principle by forming a common base class to formalize a common middle ground between the 2 classes , so now you can send any object of them and
the program will work correctly . 
*/
