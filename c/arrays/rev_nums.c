#include <stdio.h>
// Reverses a series of numbers using a variable-length array
int main(void)
{
  int i;
  int n;
  
  printf("How many numbers do you want to reverse? ");
  scanf("%d", &n);
  
  int a[n];
  printf("Enter [%d] Numbers: ", n);
  for(i = 0; i < n; ++i)
    scanf("%d", &a[i]);
    
  printf("Reverse order: ");
  for(i = n -1; i >= n; i--)
    printf(" %d", a[i]);
  printf("\n");
  return 0;
}
  
  
  