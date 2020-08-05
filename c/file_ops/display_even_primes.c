#include <stdio.h>
#include <stdlib.h>
// Function devlarations
int isEven(const int);
int isPrime(const int);

int main(void)
{
  FILE *fPtrIn = NULL; // Initialize file pointer
  int num = 0;
  int success = 0;
  fPtrIn = fopen("numbers.txt", "r"); // Open the input file for reading
  // fopen() return NULL if unable to open file in given mode
  if(fPtrIn == NULL) // Unable to open the file, hence exit
  { 
    printf("Unable to open the file!\n");
    printf("Please check whether the file exists and you have read/write permissions!\n");
    exit(EXIT_FAILURE);
  }
  // File open success message
  printf("File opened successfully. Reading integers from file -> ...");
  // Read an integer and store read status in success. (Initial read)
  success = fscanf(fPtrIn, "%d", &num);
  
  do
  {
    if(isPrime(num))
      printf("Prime number found: %d\n", num);
    else if(isEven(num))
      printf("Even number found: %d\n", num);
    else
      printf("Odd number found: %d\n", num);
    // read an integer and store read status in success
    success = fscanf(fPtrIn, "%d", &num);
  }
  while(success != -1);
  
  fclose(fPtrIn);
  
  return(0);
}
// Check whether a given number is even or not.
// The function will return 1 if odd, otherwise it will return 0.
int isEven(const int num)
{
  return !(num & 1);
}
// Check whether a number is prime. 1 = true, otherwise 0
int isPrime(const int num)
{
  int i = 0;
  // Only positive integers are prime
  if(num < 0)
    return 0;
  for(i = 2; i <= num / 2; i++)
  {
    // If the number is divisible by any number other than one and self = not prime
    if(num % i == 0)
    {
      return 0;
    }
  }
  return 1;
}