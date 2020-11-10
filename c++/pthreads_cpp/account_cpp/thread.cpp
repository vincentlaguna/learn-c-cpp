#include "thread.h"

mutex Thread::locker;

Thread::Thread(Account *pAccount, ThreadType typeOfThread)
{
  this->pAccount = Account;
  pThread = NULL;
  stopped = false;
  threadType = typeOfThread;
}

