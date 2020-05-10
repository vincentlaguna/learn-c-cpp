//////////////////////////////////////////////////////////
//                                                      //
// (From Codecademys's UFO command-line game challenge) //
// Invaders from outer space have arrived and are       //
// abducting humans using tractor beams. Players must   //
// crack the codeword to stop the abduction!            //
//                                                      //
//////////////////////////////////////////////////////////

//======================================================//
//                  UFO: The Game                       //
//======================================================//

// Instructions: save your friend from alien abduction 
// by guessing the letters in the codeword.

#include <iostream>
#include "ufo_functions.hpp"

int main() {
  int misses = 0;
  std::string codeword = "codecademy";
  std::string answer = "__________";
  bool guess = false;
  std::vector<char> incorrect;
  char letter = ' ';
  greet();
  
  while (answer != codeword && misses < 7) {
    std::cout << "\n\nPlease enter your guess: ";
    std::cin >> letter;
    for (int i = 0; i < codeword.length(); i++) {
      if (letter == codeword[i]) {
        answer[i] = letter;
        guess = true;
      }
      if (guess) {
        std::cout << "\nCorrect! You're closer to cracking the codeword.\n";
      } else {
        std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
        incorrect.push_back(letter);
        misses++;
      }
    }
    display_misses(misses);
    display_status(incorrect, answer);
    end_game(answer, codeword);
    guess = false;
  }
}