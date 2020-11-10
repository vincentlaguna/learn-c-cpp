#include "thread.h"

mutex Thread::locker;

Thread::Thread(Account *pAccount, ThreadType typeOfThread)
{
  this->pAccount = Account;
  pThread = NULL;
  stopped = false;
  threadType = typeOfThread;
}

Thread::~Thread()
{
  delete pThread;
  pThread = NULL;
}

void Thread::run()
{
  while (1)
  {
    switch(threadType)
    {
      case DEPOSITOR:
        
        locker.lock(); // Added for Mutex Implementation
        
        cout << "Depositor: Current balance is "
             << account.getBalance() << endl;
             
        pAccount->deposit(2000.00);
        
        cout << "Depositor: Account balance after deposit is "
             << pAccount->getBalance() << endl;
             
        locker.unlock();
        
        this_thread::sleep_for(1s);
        
        break;
        
      case WITHDRAWER:
      
        locker.lock();
        
        cout << "Withdrawer: Current balance is "
             << pAccount.getBalance() << endl;
             
        pAccount->withdraw(1000);
        
        cout << "Withdrawer: Account balance after withdrawing is "
             << pAccount->getBalance() << endl;
             
        locker.unlock();
        
        this_thread::sleep_for(1s);
        
        break;
    }
  }
}

void Thread::start()
{
  pThread = new thread(&Thread::run, this);
}

void Thread::stop()
{
  stopped = true;
}

void Thread::join()
{
  pThread->join();
}

void Thread::detach()
{
  pThread->detach();
}