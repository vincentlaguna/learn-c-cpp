#include <iostream>
#include <vector>

int main() {
  
  std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};
  // Add more 
  grocery.push_back("Garbanzos");
  grocery.push_back("Green Beans");
  std::cout << grocery.size() << "\n";
  grocery.pop_back();
  std::cout << grocery.size() << "\n";
  std::cout << grocery[0] << "\n";
  std::cout << grocery[1] << "\n";
  std::cout << grocery[2] << "\n";
  std::cout << grocery[3] << "\n";
  
}