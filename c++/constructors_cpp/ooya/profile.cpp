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

std::string Profile::view_profile() {
  std::string bio = "\nName: " + name;
  bio += "\nAge: " + std::to_string(age);
  bio += "\nPronouns: " + pronouns;
  return bio;
}