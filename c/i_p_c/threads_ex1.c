#include <stdio.h>
#include <pthread.h>

#define NTHREADS 10
// Globals
int counter = 0;
// Function Protoypes
void *func1(void *data);
// Main Function
int main(void)
{
  puts("\n<<< Examples of using threads >>>\n");
  
  pthread_t thread_id[NTHREADS];
  int values[NTHREADS];
  // Thread creation
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
  
  return(0);
}