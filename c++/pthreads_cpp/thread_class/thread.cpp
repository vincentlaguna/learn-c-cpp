#include "thread.h"

Thread::Thread()
{
  pThread = NULL;
  stopped = false;
}

Thread::~Thread()
{
  delete pThread;
  pThread = NULL;
}

void Thread::run()
{
  
}