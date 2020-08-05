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
  }
  
  return(1);
}

int isEven(const int)
{
  
}

int isPrime(const int)
{
  
}