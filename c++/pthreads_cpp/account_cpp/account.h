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