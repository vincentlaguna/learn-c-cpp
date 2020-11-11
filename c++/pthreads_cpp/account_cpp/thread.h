#ifndef __THREAD_H
#define __THREAD_H

#include <iostream>
#include <thread>
#include <mutex>
//#include <bool.h>
#include "account.h"

using namespace std;

enum ThreadType
{
  DEPOSITOR,
  WITHDRAWER
};

class Thread
{
private:
  thread *pThread;
  Account *pAccount;
  static mutex locker; // Added for Mutex Implementation
  ThreadType threadType;
  bool stopped;
  void run();

public:
  Thread(Account *pAccount, ThreadType typeOfThread);
  ~Thread();
  void start();
  void stop();
  void join();
  void detach();
};

#endif // __THREAD_H