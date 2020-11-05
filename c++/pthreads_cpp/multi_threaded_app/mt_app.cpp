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
this_thread::get_id()

thread::join()
