#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH 3

int data[LENGTH]; // Some integers
/*
void foo(int **ptr) // Making use of double pointer = **ptr instead of *ptr
{
  int a = 5;
  //ptr = &a; // This is just a LOCAL copy, it will not work
  //*ptr = a; // This works, but it is better to make use of a double pointer
  *ptr = &a;
}

int main(void)
{
  int *ptr = NULL;
  ptr = (int *) malloc(sizeof(int));
  *ptr = 10;
  
  printf("De-referernced pointer value -> %d\n", *ptr);
  
  foo(&ptr); // Passing in a double pointer instead of a single one (ptr)
  printf("De-Referenced pointer value after foo() function -> %d\n", *ptr);
  
  return(0);
}
*/
// Second example with allocating memory inside the function
void foo(char **ptr) // Making use of double pointer = **ptr instead of *ptr
{
  int a = 5;
  //ptr = &a; // This is just a LOCAL copy, it will not work
  //*ptr = a; // This works, but it is better to make use of a double pointer
  *ptr = &a;
}

int main(int argc, char **argv)
{
  int *ptr = NULL;
  ptr = (int *) malloc(sizeof(int));
  *ptr = 10;
  int *pi
  
  printf("De-referernced pointer value -> %d\n", *ptr);
  
  foo(&ptr); // Passing in a double pointer instead of a single one (ptr)
  printf("De-Referenced pointer value after foo() function -> %d\n", *ptr);
  
  return(0);
}