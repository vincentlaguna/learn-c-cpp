#include <iostream>
#include <stdlib.h>
/*
Rock Paper Scissors Lizard Spock
(The Big Bang Theory)
*/
int main() {
  // Live long and prosper
  srand (time(NULL));
  int computer = rand() % 3 + 1;
  int user = 0;
  
  std::cout << "|======================|\n";
  std::cout << "| Rock Paper Scissors! |\n";
  std::cout << "|======================|\n\n";
  
  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n\n";
  
  std::cout << "Shoot!\n";
  std::cin >> user;
  
  if (user == 1 && computer == 1) {
    std::cout << "Computer = Rock. Tie, try again...\n";
  }
  else if (user == 1 && computer == 2) {
    std::cout << "Computer = Paper. Sorry, you lost.\n";
  }
  else if (user == 1 && computer == 3) {
    std::cout << "Computer = Scissors. You won!\n";
  }
  else if (user == 2 && computer == 1) {
    std::cout << "Computer = Rock. You won!\n";
  }
  else if (user == 2 && computer == 2) {
    std::cout << "Computer = Paper. Tie, try again...\n";
  }
  else if (user == 2 && computer == 3) {
    std::cout << "Computer = Scissors. You won!\n";
  }
  else if (user == 3 && computer == 1) {
    std::cout << "Computer = Rock. Sorry, you lost.\n";
  }
  else if (user == 3 && computer == 2) {
    std::cout << "Computer = Paper. You won!\n";
  }
  else if (user == 3 && computer == 3) {
    std::cout << "Computer = Scissors. Tie, try again...!\n";
  }
  else {
    std::cout << "Wrong input!\n";
  }
}
