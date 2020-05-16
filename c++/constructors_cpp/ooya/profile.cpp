#include <iostream>
#include <string>
#include <vector>
#include "profile.hpp"

Profile::Profile(std::string new_name, int new_age, std::string new_city, 
std::string new_country, std::string new_pronouns) {
  name = new_name;
  age = new_age;
  city = new_city;
  country = new_country;
  pronouns = new_pronouns;
}