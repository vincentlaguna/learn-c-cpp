#include "thread.h"

mutex Thread::commonLock;

int Thread::count = 0;

Thread::Thread(ThreadType typOfThread)
{
  pThread = NULL;
  stopped = false;
  threadType = typOfThread;
  (threadType == READER) ? name = "READER" : name = "WRITER";
}

Thread::~Thread()
{
  delete pThread;
  pThread = NULL;
}

int Thread::getCount()
{
  
}