#include <iostream>
#include <string>
#include <fstream>

int main(void)
{
  std::string line;
  std::ifstream file;
  
  file.open("llorem.txt");
  
  if(file.is_open())
  {
    while(std::getline(file, line))
    {
      std::cout << line << std::endl;
    }
    file.close();
  }
  else
  {
    std::cout << "Unable to open file" << std::endl;
  }
  return(0);
}