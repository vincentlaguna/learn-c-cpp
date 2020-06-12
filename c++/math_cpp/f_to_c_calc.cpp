#include <iostream>

int main() {
  
  double tempf = 0.0;
  std::cout << "Enter temp in F: ";
  std::cin >> tempf;
  double tempc = 0.0; 
  tempc = (tempf - 32) / 1.8; 
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  
}