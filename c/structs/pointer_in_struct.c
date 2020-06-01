#include <stdio.h>

struct Student
{
  char name[20];
  char klass[30];
  int age;
};

struct Student stu1 = {"V. Laguna", "Computer Science", 34};
struct Student *stu1_ptr;

int main(void)
{
  stu1_ptr = &stu1; // Assigning address to structure pointer
  
  printf("Name of student -> %s\n", stu1_ptr -> name);
  printf("Class of the student -> %s\n", stu1_ptr -> klass);
  printf("Age of the student -> %d\n", stu1_ptr -> age);
  return 0;
}