#include <stdio.h>

int main(void)
{
  int numbers[3] = {101, 102, 103};
  int size = sizeof(numbers) / sizeof(numbers[0]);
  int *p = numbers;
  
  for(int i = 0; i < size; i++)
  {
    printf("[%d]\n", p[i]);
  }
  return 0;
}