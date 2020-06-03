#include <stdio.h>

struct Student
{
  char name[20];
  int klass;
  int age;
};

struct Student stu1 = {"V. Laguna", 101, 34};
void modify(struct Student *ptr);

int main(void)
{
  printf("Age of student before passing it to the function is -> [%d]\n", stu1.age);
  modify(&stu1); // Passing the address of the structure to a function
  printf("Age of student after passing it to the function is -> [%d]\n", stu1.age);
  return 0;
}

void modify(struct Student *ptr)
{
  ptr -> age = 20;
}