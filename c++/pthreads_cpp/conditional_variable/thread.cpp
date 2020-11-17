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