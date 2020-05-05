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
  std::string on_off_attempt;
  std::cout << needs_it_support() << "\n";
   // Check in with Jenn
  std::cout << "Oh hi Jen!\n";
  // Conduct IT support again...
  std::cout << "Hello. IT.\n";
  std::cout << "Have you tried turning it off and on again? y/n\n";
  std::cin >> on_off_attempt;
  // Check in with Roy
  std::cout << "You stole the stress machine? But that's stealing!\n";
  // Conduct IT support yet again...zzzz...
  std::cout << "Hello. IT.\n";
  std::cout << "Have you tried turning it off and on again? y/n\n";
  std::cin >> on_off_attempt;
  std::string my_name = "Name = NULL...404 NOT FOUND...";
  int some_number = 5;
  name_x_times(my_name, some_number);
}