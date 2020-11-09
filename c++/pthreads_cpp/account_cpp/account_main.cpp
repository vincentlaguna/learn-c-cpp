#include <thread>
#include "account.h"

using namespace std;

enum ThreadType
{
  DEPOSITOR,
  WITHDRAWER
};

Account account(5000.00);

void threadProc(ThreadType typeOfThread)
{
  while (1)
  {
    switch(typeOfThread)
    {
      case DEPOSITOR:
      {
        cout << "Depositor: Current balance is "
             << account.getBalance() << endl;
             
        account.deposit(2000.00);
        
        cout << "Depositor: Account balance after deposit is "
             << account.getBalance() << endl;

        this_thread::sleep_for(1s);
      }
      break;
      
      case WITHDRAWER:
      {
        cout << "Withdrawer: Current balance is "
             << account.getBalance() << endl;
        
        account.withdraw(1000.00);
        
        cout << "Withdrawer: Account balance after withdrawing is "
             << account.getBalance() << endl;
             
        this_thread::sleep_for(1s);
      }
      break;
    }
  }
}

int main(void)
{
  
  return(0);
}