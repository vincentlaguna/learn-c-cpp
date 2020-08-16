// returning address
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  // casting to int pointer (may be 4 or more bytes depending on the system
  //int *pNumber = (*int)malloc(100);
  // better, more portable (doesn't assume in is limited to 4 bytes):
  int *pNumber = (*int) malloc(25 * sizeof(int));
  int *pNumber2 = (int*) calloc(75, sizeof(int)); // Calloc example (75 ints)
  if(!pNumber) //check for NULL value
  {
    // code to deal with memory allocation failure
  }
  free(pNumber); // Always release memory, preferable within function where allocated
  pNumber = NULL;
  return 0;
}