#include <iostream>

int main() {
  int year;
  std::cout << "Enter year: ";
  std::cin >> year;
  if (year < 1000 || year > 9999) {
    std::cout << "Invalid Entry.\n";
  }
  else if (year % 4 == 0 || year % 400 == 0) {
    std::cout << "Year " << year << " falls on a leap year.\n";
  }
  else {
    std::cout << "Year " << year << " does not fall on a leap year.\n";
  }
}