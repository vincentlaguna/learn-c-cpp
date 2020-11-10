#ifndef __ACCOUNT_H
#define __ACCOUNT_H

#include <iostream>

using namespace std;

class Account
{
private:
  
  double balance;

public:
  Account(double);
  double getBalance();
  void deposit(double amount);
  void withdraw(double amount);
};

#endif // __ACCOUNT_H