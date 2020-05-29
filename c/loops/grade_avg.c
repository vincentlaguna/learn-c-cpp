#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int numbers[10];
  int sum = 0;
  int count;
  int avg = (sum / count);
  
  printf("Please enter [10] grades to average:\n");
  
  for(int count = 0; count < 10; count++)
  {
    printf("Enter grade %d>  ", count);
    scanf("%d", &sum);
    sum += sum;
  }
  printf("Average is = [%d]\n", avg);
  return 0;
}