#include <iostream>

int main() {
  int i = 1;
  while(i <= 100) {
    if(i % 5 == 0 && i % 3 == 0) {
      std::cout << i << " = FizzBuzz!\n";
      i++;
    } else if(i % 3 == 0) {
      std::cout << i << " = Fizz!\n";
      i++;
    } else if(i % 5 == 0) {
      std::cout << i << " = Buzz!\n";
      i++;
    } else {
      std::cout << i << "\n";
      i++;
    }
  }
  return(0);
}