#include <stdio.h>

struct Student
{
  char name[20];
  int klass;
  int age;
};

struct Student stu1 = {"V. Laguna", 101, 34};
struct Student* returnStruct();

int main(void)
{
  struct Student *ptr;
  ptr = returnStruct();
  
  printf("Name -> %s, Class -> %d, Age -> %d\n", ptr -> name, ptr -> klass, ptr -> age);
  return 0;
}

struct Student* returnStruct()
{
  return(&stu1);
}