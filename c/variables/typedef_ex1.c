#include <stdio.h>
#define peach int
#define int_pointer  int *

int_pointer chalk, cheese; // same as int *chalk, cheese (cheese is int)
typedef char *char_ptr;
typedef int banana;
typedef int* i_pointer;
unsigned peach i;
//unsigned banana i; // illegal
char_ptr Bently, Rolls_Royce; // both are char *

int main(void)
{
  i_pointer p; // same as int *p
  i_pointer a, *b; // same as int *a, **b
  i_pointer myArray[10]; // same as int *myArray[10]
  
  printf("example -> [%d]\n", *myArray);
  
  return 0;
}