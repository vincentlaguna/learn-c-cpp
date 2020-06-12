#include <iostream>
#include <vector>
#include <string>

int main() {
  // Whale talk
  std::string input =  "Hello World";
  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  std::vector<char> result;
  // loop through the vector
  for (int i = 0; i < input.size(); i++) {
    for (int j = 0; j < vowels.size(); j++) {
      if (input[i] == vowels[j]) {
        result.push_back(input[i]);
      }
      if(input[i] == 'e' || input[i] == 'u') {
        result.push_back(input[i]);
      }
    }
  }
  for (int x = 0; x < result.size(); x++) {
      std::cout << result[x] << " ";
  }
}