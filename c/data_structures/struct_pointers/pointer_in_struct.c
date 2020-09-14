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

/* Alternative way to access members of a structure using pointers:

#include<stdio.h>  

struct student  
{  
  char name[20];  
  int class;  
  int age;
};  

struct student stu1 = {"Tanuman",12,16};  
struct student *stu2;  

int main() // Note* (*) parenthesis required for using . operator 
{
  stu2 = &stu1; // g Structure variable to another 
  printf("\n Name of student %s ",(*stu2).name);  
  printf("\n Class of the student %d",(*stu2).class);  
  printf("\n Age of the student %d ",(*stu2).age);
  return 0;
}

*/