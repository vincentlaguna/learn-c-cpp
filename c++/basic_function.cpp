#include <iostream>

// random functions put together for examples...
bool needs_it_support() {
  bool support;
  std::cout << "Hello. IT. Have you tried turning it off and on again? Enter 1 for yes, 0 for no.\n";
  std::cin >> support;
  return support;
}

void name_x_times(std::string name, int x) {
  while (x > 0) {
    std::cout << name << "\n";
    x--;
  }
}

int main() {
  std::cout << needs_it_support() << "\n";
  std::string my_name = "Name = NULL";
  int some_number = 5;
  name_x_times(my_name, some_number);
}