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
  cout << name << " is waiting for lock in getCount() method ..." << endl;
  lock_guard<mutex> locker(commonLock);
  cout << name << " has acquired lock in getCount() method ..." << endl;
  
  return count;
}

int Thread::updateCount()
{
  cout << name << " is waiting for lock in updateCount() method ..." << endl;
  lock_guard<mutex> locker(commonLock);
  cout << name << " has acquired lock in updateCount() method ..." << endl;
  int value - getCount();
  count = ++value;
  
  return count;
}