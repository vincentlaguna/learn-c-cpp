#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 64

int compare(const void *a, const void *b);

int main(void)
{
  char string[SIZE];
  int length, outer, inner, temp;
  // Get the string
  printf("Type some text: ");
  fgets(string, SIZE, stdin);
  length = strlen(string);
  // Sort the string
  /*
  for(outer = 0; outer < length; outer++)
    for(inner = outer + 1; inner < length; inner++)
    {
      if(string[outer] > string[inner])
      {
        temp = string[inner];
        string[inner] = string[outer];
        string[outer] = temp;
      }
    }
  */
  qsort(string, length, sizeof(char), compare);
  // Display the sorted string
  puts("Sorted String -> ");
  printf("%s\n", string);
  
  return 0;
}

int compare(const void *a, const void *b)
{
  return(*(char *)a - *(char *)b);
}