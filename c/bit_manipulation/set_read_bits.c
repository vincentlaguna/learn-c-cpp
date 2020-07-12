// Requirements for challenge example:
// Enter a number: 10
// Enter nth bit to check and set (0-31): 2
// The 2 bit is set to 0
// Bit set successfully
// Number before setting 2 bit: 10 (in decimal)
// Number after setting 2 bit: 14 (in decimal)
#include <stdio.h>

int main(void)
{
  int num, position, newNum, bitStatus;
  
  printf("Enter any number: \n");
  scanf("%d", &num);
  
  printf("Enter nth bit position to check and set (0-31): \n");
  scanf("%d", &position);
  // Right-shift num, position times and perform bitwise AND with 1
  bitStatus = (num >> position) & 1;
  printf("The %d bit is set to %d\n", position, bitStatus);
  // Left shift 1, n times and perform bitwise OR with num
  newNum = (1 << position) | num;
  printf("\nBit set successfully.\n\n");
  
  printf("Number before setting %d bit -> %d (in decimal)\n", position, num);
  printf("Number after setting %d bit -> %d (in decimal)\n", position, newNum);
  
  return 0;
}