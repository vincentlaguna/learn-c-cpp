#include <stdio.h>

int main(void)
{
  char msg1[] = "Hello how are you?"; // Array variable (stored in RAM)
  printf("Message is: %s\n", msg1);
  printf("Address of 'msg1' variable is -> %p\n", &msg1);
  printf("Value of 'msg1' variable -> %p\n", msg1);
  
  return 0;
}