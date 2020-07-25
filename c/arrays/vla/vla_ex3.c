#include <stdio.h>
#include <stdint.h>

void array_display(uint8_t *pArray, nItems);

int main(void)
{
  uint32_t nItems = sizeof(someData) / sizeof(uint8_t);
  
  uint8_t someData[10] = {0xff, 0xff, 0xff, 0xff, 0xff, 
                          0xff, 0xff, 0xff, 0xff, 0xff};
                          
  printf("0th element value -> %x\n", someData[0]);
  // same as *(someData + 0) // deferenced point to 0th element
  printf("2nd data item = %x\n", *(someData +1)); // de-referenced value
  *(someData + 1) = 0x9; 
  // Same as someData[1] = 0x9 (pointing to second element in array)
  printf("After : 2nd data item = %x\n", *(someData+1));
  // Loop through the elements of the array
  printf("Elements of the array, modified 2nd element: \n");
  
  array_display(someData, nItems);
  
  printf("\n");
  
  *(someData + 2) = 0x33;
  
  array_display(someData, nItems);
  
  printf("\n");
  
  return 0;
}

void array_display(uint8_t *pArray, uint32_t nItems)
{
  // Display contents of received array:
  for(uint32_t i = 0; i < nItems; i++)
  {
    printf("%x\t", *(pArray + i));
  }
}