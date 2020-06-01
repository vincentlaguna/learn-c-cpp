#include <stdio.h>
#define N 10

int main(void)
{
  int input[N];
  int i;
  
  printf("Enter %d numbers: ", N);
  
  for(i = 0; i < N; i++)
  {
    scanf("%d", &input[i]);
  }
  for(i = N - 1; i >= 0; i--)
  {
    printf("%d", input[i]);
  }
  printf("\n");
  return 0;
}