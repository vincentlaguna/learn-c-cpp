#include <stdio.h>

int main(void)
{
  int value = 5;
  int i = 1;
  int j, k = 0;
  
  outerLoop:
   if(i < value)
   {
     j = i;
     
    innerLoop:
      if(j < value)
      {
        printf(" ");
        j++;
        goto innerLoop;
      }
   }
   else 
   {
     innerLoop2:
      if(k != ((2 * i)))
      {
        if(k == 0 || k == (2 * i) - 3)
        {
          printf("*");
        }
        printf(" ");
        k++;
        goto innerLoop2;
      }
      k = 0;
      printf("\n");
      i++;
      goto outerLoop;
   }
   
  return 0;
}