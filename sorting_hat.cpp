#include <iostream>

int gryffindor = 0;
int hufflepuff = 0;
int ravenclaw = 0;
int slytherin = 0;
int answer1 = 0;
int answer2 = 0;
int answer3 = 0;
int answer4 = 0;

int main() {
  // The magic starts here...
  std::cout << "||=======================||\n";
  std::cout << "|| The Sorting Hat quiz! ||\n";
  std::cout << "||=======================||\n\n";
  std::cout << "Q1) When I'm dead, I want people to remember me as: \n\n";
  std::cout << "1) The Good\n";
  std::cout << "2) The Great\n";
  std::cout << "3) The Wise\n";
  std::cout << "The Bold\n";
  std::cin >> answer1;
  
  if (answer1 == 1) {
    hufflepuff += 1;
  }
  else if (answer1 == 2)
}