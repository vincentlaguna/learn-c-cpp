#include <iostream>
#include <vector>

std::vector<int> multiples_of_3(int num) {
  std::vector<int> multiples = {num, num * 2, num *3};
  return multiples;
}

int main() {
  for (int element : multiples_of_3(10)) {
    std::cout << element << "\n";
  }
}