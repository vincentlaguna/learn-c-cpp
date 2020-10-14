#include <iostream>
#include <map>
#include <string>

int main(void)
{
  std::map<int, std::string> mapList;
  
  mapList.insert(std::pair<int, std::string>(1, "Hello"));
  mapList.insert(std::pair<int, std::string>(2, "World"));
  
  std::cout << "Map Size: " << mapList.size() << std::endl;
  std::cout << mapList[1] << std::endl;
  std::cout << mapList[2] << std::endl;
  
  return(0);
}