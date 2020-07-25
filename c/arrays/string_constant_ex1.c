#include <stdio.h>

int main(void)
{
  char msg1[] = "Hello how are you?"; // Array variable (stored in RAM)
  char const *pMsg2 = "fastbitlab.com"; // Proper string contsant
  
  msg1[0] = 'b';
  // pMsg2[0] = 'b'; // Compiles, but running it will produce seg-fault (ROM)
  
  printf("Message is: %s\n", msg1);
  printf("Message 2 is: %s\n", pMsg2);
  printf("Address of 'msg1' variable is -> %p\n", &msg1);
  printf("Address of 'pMsg2' variable is -> %p\n", &pMsg2);
  printf("Value of 'msg1' variable is -> %p\n", msg1);
  printf("Value of 'pMsg2' variable is -> %p\n", pMsg2);
  
  return 0;
}