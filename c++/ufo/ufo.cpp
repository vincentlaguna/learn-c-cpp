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
  greet();
  bool guess = false;
  std::vector<char> incorrect;

  while (answer != codeword && misses < 7) {
    display_misses(misses);
    display_status(incorrect, answer);
    misses++;
    end_game(answer, codeword);
  }
}