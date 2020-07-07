// Flexible array challenge
#include <stdio.h>
#include <malloc.h>

struct myArray
{
  int len;
  int arr[];
};

int main(void)
{
  struct myArray *m = NULL;
  int arraySize = 0;
  
  printf("Please enter the size of the flexible array -> \n");
  scanf("%d", &arraySize);
  
  size_t size = sizeof(struct myArray);
  m = malloc(size + (sizeof(int) * arraySize));
  m->len = arraySize;
  m->arr[0] = 55;
  m->arr[1] = 199;
  
  printf("array is -> %d : %d\n", m->arr[0], m->arr[1]);
  
  return 0;
}