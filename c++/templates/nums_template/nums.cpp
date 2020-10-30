#include <iostream>
#include "nums.hpp"

int main() {
  std::cout << smallest_num(100, 50) << "\n";
  std::cout << smallest_num(2543.2, 2543.3) << "\n";
  
  for (int i = 1; i < 5; i++) {
    for (int j = 1; j < 10; j++){
      std::cout << smallest_num(i, j) << "\n";
    }
  }
}