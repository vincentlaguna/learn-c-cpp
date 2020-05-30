#include <stdio.h>

int main(void)
{
  int primes[100] = {2, 3};
  
  
  for(int i = 0; i < 100; i++)
  {
   for(int j = 0; j < 100; j++)
   {
     for(int k = 0; k < 100; k++)
     {
       printf("[%d][%d][%d]\n", i, j, k);
       if((p / primes[i]) >= primes[i])
       {
         break;
       }
     }
   }
  }
  return 0;
}