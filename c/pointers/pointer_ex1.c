/* 
1. Create a char type variable and initialize it to the value of 100
2. Print the address of the above variable
3. Create a pointer variable and store the address of the above variable
4. Perform a read operation on the pointer variable to fetch  1 byte of data 
from the pointer
5. Print the data obtained from the read operation on the pointer
6. Perform a write operation on the pointer to store the value 65
7. Print the value of the variable defined in step 1
*/
#include <stdio.h>

char pAddress* = &data;

int main(void)
{
  char data = 100;
  printf("The value of data is [%d]\n", data);
  printf("The address of data is [%p]\n", data);
  printf("The value of data is [%p]\n", &data);
  return 0;
}