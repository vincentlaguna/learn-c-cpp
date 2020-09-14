#include <stdio.h>

struct Student
{
  char name[20];
  int class;
  int age;
};

struct Student stu1 = {"Borja", 101, 31};
struct Student stu2;

int main(void)
{
  stu2 = stu1; // Copying structure variable to another
  
  printf("Name of student -> %s\n", stu2.name);
  printf("Class of student -> %d\n", stu2.class);
  printf("Age of student -> %d\n", stu2.age);
  return 0;
}