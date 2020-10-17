#include <iostream>
#include <string>

class Vehicle
{
protected:
  size_t mNumOfWheels;
  std::string mVehicleName;
  
  void setWheels(const size_t &wheels)
  {
    mNumOfWheels = wheels;
  }
  
  void SetVehicleName(const std::string &name)
  {
    mVehicleName = name;
  }
};

int main(void)
{
  return(0);
}