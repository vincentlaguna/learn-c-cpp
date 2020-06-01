#include <stdio.h>

struct Student
{
  char name[20];
  int klass;
  int age;
};

struct Student stu1 = {"V. Laguna", 101, 34};
struct Student *stu2;

int main(void)
{
  stu2 = &stu1; // g structure variable to another
  
  printf("Name of student -> %s\n", stu2 -> name);
  printf("Class of student -> %d\n", stu2 -> klass);
  printf("Age of student -> %d\n", stu2 -> age);
  printf("Content of STU -> [%d]\n", stu2);
  stu2++;
  printf("Content of STU after incrementing -> [%d]\n", stu2);
  return 0;
}