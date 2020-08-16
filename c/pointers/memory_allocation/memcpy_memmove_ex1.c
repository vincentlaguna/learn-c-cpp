#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  struct person
  {
    char name[8];
    int age;
  } man = {"Vincent", 34};
  // Output the structure
  printf("Name -> %s, Age -> %d\n", man.name, man.age);
  unsigned char *buffer;
  int x;
  // Allocate the unsigned buffer
  buffer = (unsigned char *)malloc(sizeof(struct person));
  // Validate memory allocation for buffer
  if(buffer == NULL)
  {
    fprintf(stderr, "Unable to allocate memory.\n");
    exit(1);
  }
  // Copy memory
  memcpy(buffer, &man, sizeof(struct person));
  // Dump the buffer
  puts("\nBuffer dump...\n");
  
  for(x = 0; x < (int)sizeof(struct person); x++)
  {
    printf(" %02X", *(buffer + x));
  }
  putchar('\n');

  /* First example of copying an array of integers
  int a[] = {100, 101, 102, 103};
  int b[4];
  int x;
  
  memcpy(b, a, sizeof(int) * 4);
  
  for(x = 0; x < 4; x++)
  {
    printf("%d. -> %d = %d\n",x, a[x], b[x]);
  }
  */
  return(0);
}