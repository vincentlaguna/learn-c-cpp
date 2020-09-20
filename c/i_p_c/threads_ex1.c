#include <stdio.h>
#include <pthread.h>

#define NTHREADS 10
// Mutex lock
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
// Conditional variable for pthread
pthread_cond_t evensDone = PTHREAD_COND_INITIALIZER;
// Globals
int numEvensFinished = 0;
int counter = 0;
// Functions
void *func1(void *data)
{
  int *x = (int *)data;
  
  pthread_mutex_lock(&lock);
  
  if(*x % 2 == 0)
  {
    numEvensFinished++;
  }
  else
  {
    pthread_cond_wait(&evensDone, &lock);
  }
  counter++;
  printf("Message is %d, thread id = %lud modified the counter to %d\n",
          *x, pthread_self(), counter);
  printf("Message is %d, thread id = %lud read the counter %d\n",
          *x, pthread_self(), counter);
  pthread_mutex_unlock(&lock);
}
// Main Function
int main(void)
{
  puts("\n<<< Examples of using threads >>>\n");
  
  pthread_t thread_id[NTHREADS];
  int values[NTHREADS];
  // Thread creation
  for(int k = 0; k < 150; k++)
  {
    for(int i = 0; i< NTHREADS; i++)
    {
      values[i] = i;
      pthread_create(&thread_id[i], NULL, func1, &values[i]);
    }
    // Joins
    for(int j = 0; j < NTHREADS; j++)
    {
      pthread_join(thread_id[j], NULL);
      pthread_exit(&thread_id[j]);
    }
  }
  return(0);
}