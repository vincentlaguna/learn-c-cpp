#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>
#include <string>

using namespace std;

enum ThreadType
{
  PRODUCER,
  CONSUMER
};

class Thread
{
private:
  static mutex locker;
};