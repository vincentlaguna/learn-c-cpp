#include <iostream>
#include "profile.hpp"

int main() {
  Profile tyler("Tyler Durden", 34, "LA", "USA", "he/him");
  tyler.add_hobby("Reform the infrastructure");
  tyler.add_hobby("Sell Soap");
  tyler.add_hobby("Fight");
  std::cout << tyler.view_profile() << "\n";
}