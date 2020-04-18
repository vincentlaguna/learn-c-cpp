#include <iostream>

int main() {
  double earth_weight;
  int dest_planet;
  std::cout << "Enter your Earth weight :";
  std::cin >> earth_weight;
  std::cout << "\nI have information for the following planets:\n\n";
  std::cout << "   1. Venus   2. Mars    3. Jupiter\n";
  std::cout << "   4. Saturn  5. Uranus  6. Neptune\n\n";
  std::cout << "Enter destination planet: ";
  std::cin >> dest_planet;
  
  switch(dest_planet) {
    case 1:
    std::cout << "Your weight on Venus is: " << earth_weight * 0.78 << " pounds\n";
      break;
    case 2:
    std::cout << "Your weight on Mars is: " << earth_weight * 0.39 << "\n";
      break;
    case 3:
    std::cout << "Your weight on Jupiter is: " << earth_weight * 2.65 << " pounds\n";
      break;
    case 4:
    std::cout << "Your weight on Saturn is: " << earth_weight * 1.17 << " pounds\n";
      break;
    case 5:
    std::cout << "Your weight on Uranus is: " << earth_weight * 1.05 << " pounds\n";
      break;
    case 6:
    std::cout << "Your weight on Neptune is: " << earth_weight * 1.23 << " pounds\n";
      break;
    default:
      std::cout << "Invalid entry\n";
  }
}