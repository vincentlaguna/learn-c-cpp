//#include <iostream>
//#include <thread>
//#include <mutex>
#include "account.h"
#include "thread.h"

using namespace std;
/*
enum ThreadType
{
  DEPOSITOR,
  WITHDRAWER
};

mutex locker; // Added for Mutex Implementation

Account account(5000.00);

void threadProc(ThreadType typeOfThread)
{
  while (1)
  {
    switch(typeOfThread)
    {
      case DEPOSITOR:
      {
        
        locker.lock(); // Added for Mutex Implementation
        
        cout << "Depositor: Current balance is "
             << account.getBalance() << endl;
             
        account.deposit(2000.00);
        
        cout << "Depositor: Account balance after deposit is "
             << account.getBalance() << endl;
        
        locker.unlock(); // Added for Mutex Implementation
        
        this_thread::sleep_for(1s);
      }
      break;
      
      case WITHDRAWER:
      {
        
        locker.lock(); // Added for Mutex Implementation
        
        cout << "Withdrawer: Current balance is "
             << account.getBalance() << endl;
        
        account.withdraw(1000.00);
        
        cout << "Withdrawer: Account balance after withdrawing is "
             << account.getBalance() << endl;
             
        locker.unlock(); // Added for Mutex Implementation     
             
        this_thread::sleep_for(1s);
      }
      break;
    }
  }
}
*/
int main(void)
{
  thread depositor(threadProc, ThreadType::DEPOSITOR);
  thread withdrawer(threadProc, ThreadType::WITHDRAWER);
  
  depositor.join();
  withdrawer.join();
  
  return(0);
}