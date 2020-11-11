#ifndef __THREAD_H
#define __THREAD_H

#include <iostream>
#include <string>
#include <thread>
#include <mutex>

using namespace std;

enum ThreadType
{
  READER,
  WRITER
};

class Thread
{
private:
  string name;
  thread *pThread;
  ThreadType threadType;
  static mutex commonLock;
  static int count;
  bool stopped;
  void run();
  
public:
  Thread(ThreadType typOfThread);
  ~Thread();
  void start();
  void stop();
  void join();
  void detach();
  int getCount();
  int updateCount();
};