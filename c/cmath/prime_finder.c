#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
  int p; // Our first counter to iterate through range
  int i; // Our second counter to iterate through 
  int primes[50] = {0}; // Array of primes
  int primeIndex = 2; 
  // Hard-code prime numbers
  primes[0] = 2;
  primes[1] = 3;
  bool isPrime; // Boolean switch
  
  for(p = 5; p <= 100; p += 2)
  {
   isPrime = true;
   for(i = 1; isPrime && p / primes[i] >= primes[i]; ++i)
     if (p % primes[i] == 0)
      isPrime = false;
    if(isPrime == true)
    {
      primes[primeIndex] = p;
      ++primeIndex;
    }
  }
  for(i = 0; i < primeIndex; ++i)
    printf("[%i] ", primes[i]);
    printf("\n");
  return 0;
}