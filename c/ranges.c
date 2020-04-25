#include <stdio.h>
#include <limits.h>

int main()
{
  printf("The range of signed char is [%d to %d].\n", SCHAR_MIN, SCHAR_MAX);
  printf("The range of unsigned char is [%u to %u].\n", 0, UCHAR_MAX);
  printf("The range of char is [%d to %d].\n", CHAR_MIN, CHAR_MAX);
  
  printf("The range of signed short int is [%hd to %hd].\n", SHRT_MIN, SHRT_MAX);
  printf("The range of unsigned short int is [%hu to %hu].\n", 0, USHRT_MAX);
  
  printf("The range of signed int is [%d to %d].\n", INT_MIN, INT_MAX);
  printf("The range of unsigned int is [%u to %u].\n", 0, UINT_MAX);
  
  printf("The range of signed long int is [%ld to %ld].\n", LONG_MIN, LONG_MAX);
  printf("The range of unsigned long int is [%lu to %lu].\n", 0, ULONG_MAX);
  
  return 0;
}