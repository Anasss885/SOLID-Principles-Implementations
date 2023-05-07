class Rectangle {
public:
  Rectangle(int width, int height) : width_(width), height_(height) {}
  void setWidth(int width) { width_ = width; }
  void setHeight(int height) { height_ = height; }
  int getWidth() const { return width_; }
  int getHeight() const { return height_; }
  int area() const { return width_ * height_; }
private:
  int width_;
  int height_;
};

class Square : public Rectangle {
public:
  Square(int side) : Rectangle(side, side) {}
  void setWidth(int width) { Rectangle::setWidth(width); Rectangle::setHeight(width); }
  void setHeight(int height) { Rectangle::setWidth(height); Rectangle::setHeight(height); }
};

void printArea(const Rectangle& rectangle) {
  std::cout << "Area: " << rectangle.area() << std::endl;
}

int main() {
  Rectangle rectangle(3, 4);
  Square square(5);
  printArea(rectangle); // prints "Area: 12"
  printArea(square); // prints "Area: 25"
  square.setWidth(10);
  printArea(square); // prints "Area: 100"
  return 0;
}
/*
this program do violates the Liskov substitution principle LSP as square object can't subistitue or act instead rectangle object , and if this happened it will
cause a declared incorrectness in the program , so what can we do to solve this problem and make both of classes instances able to subistitue each other ?
*/
