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
int add_new_record(STUDENT_INFO_t *record, int8_t max_records);
int delete_record(STUDENT_INFO_t *record, int8_t max_records);
// Starting point of this program
int main(void)
{
  int8_t menu_code;
  int8_t app_continue;
  
  printf("Student record management program\n");
  
  while(app_continue)
  {
    // 1. display menu
    display_menu();
    // read menu code
    read_menu_code();
    
    if(menu_code)
    {
      decode_menu_code(menu_code);
    }
    else // end the application if menu code = 0
    {
      app_continue = 0;
      printf("Exiting the application\n");
    }
  }
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

int add_new_record(STUDENT_INFO_t *record, int8_t max_records)
{
  
}

int delete_record(STUDENT_INFO_t *record, int8_t max_records)
{
  
}