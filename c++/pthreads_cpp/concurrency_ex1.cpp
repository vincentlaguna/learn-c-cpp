#include <iostream>
#include <future>

using namespace std;

void sayHello(promise<string> promise_)
{
  promise_.set_value("Hello Concurrency support library!");
}

int main(void)
{
  future<void> futureObj = async(launch::async, sayHello);
  futureObj.wait();
  
  return(0);
}