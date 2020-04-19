#include <iostream>
#include <cstdlib>

int main() {
  // 8-Ball Magic v.1
  int input;
  std::cout << "Ask the 8-Ball anything you'd like: \n";
  std::cin >> input;
  if (input != NULL) {
    return 0;
  }
  std::cout << "Magic 8-Ball Says...\n\n";
  srand(time(NULL));
  int answer = std::rand() % 10;
  
  switch(answer) {
    case 0 :
      std::cout << "It is certain.\n";
      break;
    case 1 :
      std::cout << "Very doubtful.\n";
      break;
    case 2 :
      std::cout << "You may rely on it.\n";
      break;
    case 3 :
      std::cout << "Outlook good.\n";
      break;
    case 4 :
      std::cout << "As I see it, yes.\n";
      break;
    case 5 :
      std::cout << "Follow the white rabbit.\n";
      break;
    case 6 :
      std::cout << "Follow your heart.\n";
      break;
    case 7 :
      std::cout << "Grab a doghnut, please.\n";
      break;
    case 8 :
      std::cout << "I wouldn't go near there.\n";
      break;
    case 9 :
      std::cout << "Look deeper, you may have missed it...\n";
      break;
    case 10 :
      std::cout << "Consider it finished and ready for the next one.\n";
      break;
    default:
      std::cout << "I honestly don't know.\n";
  }
}