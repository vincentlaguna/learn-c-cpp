#include <stdio.h>
#include <stdlib.h>

struct employee
{
  char name[30];
  char date[15];
  float salary;
};

int main(void)
{
  // Declaration and initialization of structure variable
  struct employee emp1 = {"John", "7/16/15", 50000.00f};
  printf("Name -> [%s]\n", emp1.name);
  printf("Name -> [%s]\n", emp1.date);
  printf("Name -> [%.2f]\n", emp1.salary);
  return 0;
}