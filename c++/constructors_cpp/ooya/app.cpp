#include <iostream>
#include "profile.hpp"

int main() {
  Profile tyler("Tyler Durden", 34, "LA", "USA", "he/him");
  std::cout << tyler.view_profile() << "\n";
}