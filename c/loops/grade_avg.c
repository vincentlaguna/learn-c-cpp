#include <stdio.h>

int main(void)
{
  int numbers[10];
  long sum = 0;
  int count = 10;
  float avg = 0.0f;
  
  printf("Please enter [10] numbers to average:\n");
  
  for(int i = 0; i < count; ++i)
  {
    printf("Enter number %2u>  ", i + 1);
    scanf("%d", &numbers[i]);
    sum += numbers[i];
  }
  avg = (float)sum / count;
  printf("The Average of the [10] numbers is = [%.2f]\n", avg);
  return 0;
}