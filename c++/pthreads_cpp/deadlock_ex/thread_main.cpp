#include <iostream>
#include "thread.h"

using namespace std;

int main(void)
{
  Thread reader(READER);
  Thread writer(WRITER);
  
  reader.start();
  writer.start();
  
  reader.join();
  writer.join();
  
  return(0);
}