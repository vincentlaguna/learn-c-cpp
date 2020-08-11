#include <stdio.h>

union student
{
  char letterGrade;
  int roundGrade;
  float exactGrade;
};

int main(void)
{
  union student record1;
  union student record2;
  // Assigning values to record1 variable
  record1.letterGrade = 'B';
  record1.roundGrade = 87;
  record1.exactGrade = 86.50;
  // Display values
  printf("Union record1 values example\n");
  printf("Letter grade -> %c\n\n", record1.letterGrade);
  printf("Rounded grade -> %d\n\n", record1.roundGrade);
  printf("Exact grade -> %.2f\n\n", record1.exactGrade);
  return(0);
}