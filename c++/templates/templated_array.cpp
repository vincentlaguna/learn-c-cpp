// Templated array class within it's own namespace
#include <iostream>
#include <stdexcept>

namespace MyArray
{
  template <typename T = int>
  class vector // No conflict with <vector> class - namespace
  {
    protected:
      T *data;
      size_t length;
    public:
      vector(const size_t &len = 10) // Constructor
      {
        data = new T[len];
      }
      ~vector() // Destructor
      {
        if (data)
        {
          delete [] data;
          data = 0;
        }
      }
      T &operator[] (const size_t &index) // Overloaded function, exception handler
      {
        if (index >= length)
        {
          throw std::out_of_range("vector::[] - index out of range");
        }
        return data[index];
      }
  };
}

using namespace std;
//using namespace MyArray; // Option 1

int main(void)
{
  MyArray::vector<double> myVector(2); // Option 2
  myVector[1] = 2.5;
  std::cout << myVector[1] << std::endl;
  
  try
  {
    std::cout << myVector[5] << std::endl;
  }
  catch(std::out_of_range &except)
  {
    std::cout << except.what() << std::endl;
  }
  return(0);
}