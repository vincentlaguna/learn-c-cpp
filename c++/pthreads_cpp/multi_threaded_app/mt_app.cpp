#include <iostream>
#include <thread>

using namespace std;

//thread instance(thread_procedure)
void threadProc()
{
  for (int count = 0; count < 3; count++)
  {
    cout << "Message -> "
         << count
         << " from "
         << this_thread::get_id()
         << endl;
  }
}

int main(void)
{
  cout << "Example of a simple mult-threaded application >>> " << endl << endl;
  
  thread thread1(threadProc);
  thread thread2(threadProc);
  thread thread3(threadProc);
  
  thread1.join();
  thread2.join();
  thread3.join();
  
  return(0);
}
