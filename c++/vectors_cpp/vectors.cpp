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
  // Different examaple:
  std::vector<double> delivery_order;
  delivery_order.push_back(8.99);
  delivery_order.push_back(3.75);
  delivery_order.push_back(0.99);
  delivery_order.push_back(5.99);
  // Calculate the total using a for loop:
  double total = 0.0;
  for (int i = 0; i < delivery_order.size(); i++) {
    total = total + delivery_order[i];
  }
  std::cout << total << "\n";
  
}