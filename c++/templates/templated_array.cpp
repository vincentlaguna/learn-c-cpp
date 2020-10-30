// Templated array class within it's own namespace
#include <iostream>

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
  };
}

using namespace std;

int main(void)
{
  return(0);
}