#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Some random numbers...
int array1[] = {10,20,30,40,50,60,70,80,90,100};
int array2[] = {38,27,87,63,59,223,132,1,19,7};
// Functions
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mlt(int a, int b) { return a * b; }
int div(int a, int b) { return a / b; }

int main(void)
{
  puts("Function pointer test!");
  return(0);
}