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
        if (data) // Exception handling
        {
          delete [] data;
          data = 0;
        }
      }
      T &operator[] (const size_t &index) // Overloaded function
      {
        
      }
  };
}

using namespace std;

int main(void)
{
  return(0);
}