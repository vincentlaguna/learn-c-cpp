#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  struct person
  {
    char *name;
    char *profession;
    int *age;
  } *first;
  // Allocate the structure's memory
  first = (struct person *)malloc(sizeof(struct person) * 1);
  
  if(first == NULL)
  {
    fprintf(stderr, "Unable to allocate storage.\n");
    exit(1);
  }
  // Allocate structure members
  first->name = (char *)malloc(sizeof(char) * 32);
  first->profession = (char *)malloc(sizeof(char) * 32);
  first->age = (int *)malloc(sizeof(int) * 2);
  
  if(first->name == NULL || first->profession == NULL || first->age == NULL)
  {
    fprintf(stderr, "Unable to allocate storage.\n");
    exit(1);
  }
  // Assign structure members
  strcpy(first->name, "Vincent Laguna");
  printf("\nWhat is %s's profession? ", first->name);
  scanf("%s", first->profession);
  printf("How old is %s? ", first->name);
  scanf("%d", first->age);
  // Output results
  printf("\n%s is %d years old, and works as a %s\n",
          first->name, *first->age, first->profession);
          
  return(0);
}