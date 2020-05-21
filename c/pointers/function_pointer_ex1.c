#include <stdio.h>

void my_print();
void (*func_ptr)(); // Declaring a pointer to a function of type void

int main(void)
{
  func_ptr = &my_print;
  printf("Invoking the function\n");
  (*func_ptr)();
  return 0;
}

void my_print()
{
  printf("Inside [%s] function line [%d]\n", __FUNCTION__, __LINE__);
}