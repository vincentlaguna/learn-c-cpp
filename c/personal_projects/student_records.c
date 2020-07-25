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
// Max record this program can store
int max_records = 10;
// A global array of structure to hold the record of 10 students 
STUDENT_INFO_t students[10];
// Function protoypes
void display_menu(void);
int read_menu_code(void);
void decode_menu_code(int8_t menu_code);
void display_all_records(STUDENT_INFO_t *record, int8_t max_records);
int check_roll_number(int roll_number, STUDENT_INFO_t *record, int8_t max_records);

int main(void)
{
  return 0;
}

void display_menu(void)
{
  
}

int read_menu_code(void)
{
  
}

void decode_menu_code(int8_t menu_code)
{
  
}

void display_all_records(STUDENT_INFO_t *record, int8_t max_records)
{
  
}

int check_roll_number(int roll_number, STUDENT_INFO_t *record, int8_t max_records)
{
  
}