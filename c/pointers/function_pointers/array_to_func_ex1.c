#include <stdio.h>

void show_value(int *value);

int main(void)
{
  int arr[5] = {1, 2, 3, 4, 5};
  for (int i = 0; i < 5 /*sizeof(arr)*/; i++)
  {
    show_value(&arr[i]);
  }
  return 0;
}

void show_value(int *value)
{
  printf("value -> [%d]\n", *value);
}