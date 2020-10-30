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

int main(void)
{
  return(0);
}