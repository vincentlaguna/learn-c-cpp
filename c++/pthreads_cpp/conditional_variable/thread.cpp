#include "thread.h"

mutex Thread::locker;
condition_variable Thread::untilReady;
bool Thread::ready = false;
queue<int> Thread::appQueue;

Thread::Thread(ThreadType typeOfThread)
{
  pThread = NULL;
  stopped = false;
  threadType = typeOfThread;
  (CONSUMER == typeOfThread) ? name = CONSUMER : name = PRODUCER;
}

Thread::~Thread()
{
  delete pThread;
  pThread = NULL;
}

void Thread::run()
{
  int count = 0;
  int data = 0;
  
  while (1)
  {
    switch(threadType)
    {
      case CONSUMER:
      {
        cout << name << "Waiting to acquire mutex ..." << endl;
        
        unique_lock<mutex> uniqueLocker(locker);
        cout << name << " acquired mutex ..." << endl;
        
        cout << name << 
      }
    }
  }
}

void Thread::start()
{
  
}

void Thread::stop()
{
  
}

void Thread::join()
{
  
}

void Thread::detach()
{
  
}