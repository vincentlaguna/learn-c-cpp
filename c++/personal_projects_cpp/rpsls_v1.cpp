#include <iostream>
#include <stdlib.h>
/*
Rock Paper Scissors Lizard Spock
(The Big Bang Theory)
*/
int main() {
  // Live long and prosper
  srand (time(NULL));
  int computer = rand() % 5 + 1;
  int user = 0;
  
  std::cout << "|=======================================|\n";
  std::cout << "| Rock, Paper, Scissors, Lizard, Spock! |\n";
  std::cout << "|=======================================|\n\n";
  
  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n";
  std::cout << "4) Lizard\n";
  std::cout << "5) Spock\n\n";
  
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
  else if (user == 1 && computer == 4) {
    std::cout << "Computer = Lizard. Rock smashes lizard, you won!.\n";
  }
  else if (user == 1 && computer == 5) {
    std::cout << "Computer = Spock. Spock vaporizes rock, sorry, you lost.\n";
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
  else if (user == 2 && computer == 4) {
    std::cout << "Computer = Lizard. Lizard eats paper, sorry, you lost.\n";
  }
  else if (user == 2 && computer == 5) {
    std::cout << "Computer = Spock. Paper disproves Spock, you won!\n";
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
  else if (user == 3 && computer == 4) {
    std::cout << "Computer = Lizard. Scissors decapitate lizard, you won!\n";
  }
  else if (user == 3 && computer == 5) {
    std::cout << "Computer = Spock. Spock smashes scissors, sorry, you lost.\n";
  }
  else if (user == 4 && computer == 1) {
    std::cout << "Computer = Rock. Rock smashes lizard, sorry, you lost.\n";
  }
  else if (user == 4 && computer == 2) {
    std::cout << "Computer = Paper. Lizard eats paper, you won!\n";
  }
  else if (user == 4 && computer == 3) {
    std::cout << "Computer = Scissors. Scissors decapitate lizard, sorry, you lost.\n";
  }
  else if (user == 4 && computer == 4) {
    std::cout << "Computer = Lizard. Tie, try again...!\n";
  }
  else if (user == 4 && computer == 5) {
    std::cout << "Computer = Spock. Lizard poisons Spock, you won!.\n";
  }
  else if (user == 5 && computer == 1) {
    std::cout << "Computer = Rock. Spock vaporizes rock, you won!\n";
  }
  else if (user == 5 && computer == 2) {
    std::cout << "Computer = Paper. Paper disproves Spock, sorry, you lost.\n";
  }
  else if (user == 5 && computer == 3) {
    std::cout << "Computer = Scissors. Spock smashes scissors, you won!\n";
  }
  else if (user == 5 && computer == 4) {
    std::cout << "Computer = Lizard. Lizard poisons Spock, sorry, you lost.\n";
  }
  else if (user == 5 && computer == 5) {
    std::cout << "Computer = Spock. Tie, try again...!\n";
  }
  else {
    std::cout << "Wrong input!\n";
  }
}
