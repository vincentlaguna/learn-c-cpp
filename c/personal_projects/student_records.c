#include <stdio.h>
#include <stdint.h>
#include <string.h>
// Definition of a student record
typedef struct
{
  int   rollNumber;
  char  name[100];
  char  branch[50];
  char  dob[15];
  int   semester;
}STUDENT_INFO_t;
// A global array of structure to hold the record of 10 students 
STUDENT_INFO_t students[10];
// Max record this program can store

int main(void)
{
  return 0;
}