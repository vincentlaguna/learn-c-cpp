#include <iostream>
#include <string>
#include <fstream>

int main(void)
{
  std::ofstream outFile;
  
  outFile.open("output_file1.txt");
  outFile << "I am writing into this file.\n";
  outFile << "It is Written.\n";
  outFile.close();
  
  return(0);
}