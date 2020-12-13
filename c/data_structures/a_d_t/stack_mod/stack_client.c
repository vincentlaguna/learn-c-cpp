#include <stdio.h>
#include "stackADT.h"

int main(void)
{
  Stack s1, s2;
  int n;
  
  puts("Stack ADT implementation... >>> Creating s1, s2 Stack types >>>");
  
  s1 = create(100);
  s2 = create(200);
  
  push(s1, 1);
  push(s2, 2);
  
  n = pop(s1);
  printf("\nPopped %d from s1\n", n);
  push(s2, n);
  n = pop(s1);
  printf("\nPopped %d from s1\n", n);
  push(s2, n);
  
  destroy(s1);
  
  while(!isEmpty(s2))
    printf("\nPopped %d from s2\n", pop(s2));
    
  push(s2, 3);
  makeEmpty(s2);
  
  if (isEmpty(s2))
    printf("\ns2 is empty\n");
  else
    printf("\ns2 is not empty\n");
    
  destroy(s2);
  
  return(0);
}