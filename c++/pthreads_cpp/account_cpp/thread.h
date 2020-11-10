#ifndef __THREAD_H
#define __THREAD_H

#include <iostream>
#include <thread>
#include <mutex>
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
  ThreadType threadtype;
  bool stopped;
  void run();
};