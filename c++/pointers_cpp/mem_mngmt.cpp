#include <iostream>

int main() {
  //memory allocation
  ptr = new int[num];
  for (ptr = 0; ptr < 10 ; ptr++) {
    std::cout << ptr << "\n";
  }
  //memory is released
  delete ptr;
}