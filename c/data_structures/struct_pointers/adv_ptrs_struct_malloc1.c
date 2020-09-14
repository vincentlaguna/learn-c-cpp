#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  struct person
  {
    char *name;
    int *age;
  }my;
  
  char n[] = "Vincent";
  // Allocate memory for the age integer
  my.age = (int *)malloc(sizeof(int) * 1);
  
  if(my.age == NULL)
  {
    fprintf(stderr, "Allocation error\n");
    exit(1);
  }
  // Assign value
  *my.age = 34;
  // Because 'n' is an array and 'my.name' is a pointer,
  // you can just copy the base address again
  my.name = n;
  // Output results
  printf("%s is %d years old.\n", my.name, *my.age);
  
  return(0);
}