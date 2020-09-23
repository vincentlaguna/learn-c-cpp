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
  // Next Section
  int *pi;   // A simple pointer to an integer
  int **ppi; // A pointer to a pointer to an integer 
  
  printf("De-referernced pointer value -> %d\n", *ptr);
  
  foo(&ptr); // Passing in a double pointer instead of a single one (ptr)
  printf("De-Referenced pointer value after foo() function -> %d\n", *ptr);
  // Next Section
  printf("\nMultiple indirection example:\n");
  // Initialize our integer array
  for(int i = 0; i < LENGTH; i++)
  {
    data[i] = i;
  }
  // Display our integer array
  for(int i = 0; i < LENGTH; i++)
  {
    printf("%d\n", data[i]);
  }
  // A: simple pointer to a pointer to an integer
  pi = data; // Set the pointer to an integer to the start of the data array
  ppi = &pi; // and set the pointer to a pointer to pi itself
  // Display
  for(int i = 0; i < LENGTH; i++)
  {
    printf("\nLoop [%d] array address is -> %p\n", i, data);
    printf("Item pointed to by pi is -> %d\n", *pi);
    printf("Item pointed to by ppi is -> %p\n", *ppi);
    printf("Item pointed to by double idirection of ppi is -> %d\n", **ppi);
    printf("The address of pi is %p and the value of pi (what it points to) is -> %p\n", &pi, ppi);
    pi += 1; // Advance the pointer to point to the next element of the data array
  }
  
  return(0);
}