#include <string>
#include <vector>

class Profile {
private:
  std::string name;
  int age;
  std::string city;
  std::string country;
  std::string pronouns;
  std::vector<std::string> hobbies;
public:
  Profile(std::string name, int age, std::string city, std::string country, 
  std::string pronouns);
  std::string view_profile();
};