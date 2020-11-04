#include <pthread.h>

int pthread_create(
            pthread_t *thread,            // Thread-handle pointer
            const pthread_attr_t *attr,   // Thread attribute
            void *(*start_routine)(void*) // Thread function pointer
            void *arg                     // Thread argument
)

int pthread_join(pthread_t *thread, void **retval) // Function that blocks the caller thread
// until the thread passed in the first argument exits - also called a "thread handle"
int pthread_exit(void *retval) // Output parameter that indicates the exit code of the
// thread procedure
pthread_t pthread_self(void) // Returns the thread id