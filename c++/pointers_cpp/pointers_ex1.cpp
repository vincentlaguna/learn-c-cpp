#include <iostream>

void swap(int &a, int &b);

int main() {
  int a = 100;
  int b = 200;

  swap(a, b);

  std::cout << "A is " << a << "\n";
  std::cout << "B is " << b << "\n";
  
  int gum = 3;
  // * on left side is a pointer
  int* pointer = &gum;
  // * on right side is a dereference of that pointer
  int dereference = *pointer;
  std::cout << pointer << "\n";
  std::cout << dereference << "\n";
}

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}