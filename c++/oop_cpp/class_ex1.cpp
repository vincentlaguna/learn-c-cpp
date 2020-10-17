#include <iostream>
#include <string>

class Vehicle
{
protected:
  size_t mNumOfWheels;
  std::string mVehicleName;
  
  void SetWheels(const size_t &wheels)
  {
    mNumOfWheels = wheels;
  }
  void SetVehicleName(const std::string &name)
  {
    mVehicleName = name;
  }
public:
  Vehicle()
  {
    SetVehicleName("Unknown");
    SetWheels(0);
  }
  const size_t &GetWheels() const
  {
    return mNumOfWheels;
  }
  const std::string &GetVehicleName() const
  {
    return mVehicleName;
  }
};

int main(void)
{
  return(0);
}