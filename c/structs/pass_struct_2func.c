#include <stdio.h>

struct Student
{
  char name[20];
  int klass;
  int age;
};

struct Student stu1 = {"V. Laguna", 101, 34};

void display(struct Student *ptr);

int main(void)
{
  display(&stu1); // Passing address of structure to a function
  return 0;
}

void display(struct Student *ptr)
{
  printf("Name of student -> %s\n", ptr -> name);
  printf("Name of student -> %d\n", ptr -> klass);
  printf("Name of student -> %d\n", ptr -> age);
}