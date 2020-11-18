#include <iostream>
#include <future>

using namespace std;

void sayHello(void)
{
  cout << endl << "Hello Concurrency support library!" << endl;
}

int main(void)
{
  future<void> futureObj = async(launch::async, sayHello);
  futureObj.wait();
  
  return(0);
}