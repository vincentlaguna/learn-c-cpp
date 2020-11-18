#include "thread.h"

int main(void)
{
  Thread producer(ThreadType::PRODUCER);
  Thread consumer(ThreadType::CONSUMER);
  
  producer.start();
  consumer.start();
  
  producer.join();
  consumer.join();
  
  return(0);
}