#include <iostream>
#include <pthread.h>

using namespace std;

void *threadProc(void *param)
{
  for (int count = 0; count < 3; ++count)
    cout << "Message ->" << count << " from " << pthread_self() << endl;
  pthread_exit(0);
}