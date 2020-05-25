#include <stdio.h>

int main(void)
{
  int numbers[3] = {101, 102, 103};
  int size = sizeof(numbers) / sizeof(numbers[0]);
  
  for(int i = 0; i < size; i++)
  {
    printf("[%d]\n", numbers[i]);
  }
  return 0;
}