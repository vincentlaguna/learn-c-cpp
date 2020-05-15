#include <iostream>
#include "song.hpp"

int main() {
  Song electric_relaxation("Electric Relaxation", "A Tribe Called Quest");
  std::cout << electric_relaxation.get_title() << ", ";
  std::cout << "by " << electric_relaxation.get_artist() << "\n";

  Song back_to_black("Back to Black", "Amy Winehouse");
  std::cout << back_to_black.get_title() << ", ";
  std::cout << "by " << back_to_black.get_artist() << "\n";
}