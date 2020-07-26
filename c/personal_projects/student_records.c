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
// Display the menu to the user
void display_menu(void)
{
  printf("Display all records -> 1\n");
  printf("Add new record      -> 2\n");
  printf("Delete a record     -> 3\n");
  printf("Exit Application    -> 0\n");
}
// Read the menu code entered by user and return menu code
int read_menu_code(void)
{
  int input;
  scanf("%d", &input);
  return input;
}
// Decode the menu
void decode_menu_code(int8_t menu_code)
{
  int8_t ret;
  switch(menu_code)
  {
    case 1:
      printf("Displaying all student records -> \n");
      display_all_records(students, max_records);
      break;
    case 2:
      printf("Add a new record -> \n");
      ret = add_new_record(students, max_records);
      !ret ? printf("Record add unsuccessful\n") : printf("Record added successfully!\n");
      break;
    case 3:
      printf("Delete a record -> ");
      ret = delete_record(students, max_records);
      ret ? printf("Record deleted successfully!\n") : printf("Record not found\n");
      break;
      default:
        printf("Invalid input\n");
  }
}
// Display all the records entered by user
void display_all_records(STUDENT_INFO_t *record, int8_t max_records)
{
  int record_found = 0;
  
  for(int i = 0; i < max_records; i++)
  {
    if(record[i].rollNumber)
    {
      record_found = 1;
      printf("######################\n",);
      printf("Roll Number       : %u\n", record[i].rollNumber);
      printf("Student Semester  : %u\n", record[i].semester);
      printf("Student DOB       : %u\n", record[i].dob);
      printf("Student branch    : %u\n", record[i].branch);
      printf("Student name      : %u\n", record[i].name);
      printf("######################\n");
    }
  }
  if(!record_found)
    printf("No records found");
}
// Iterates and mathes roll numbers of the record elements one by one
int check_roll_number(int roll_number, STUDENT_INFO_t *record, int8_t max_records)
{
  int exists = 0;
  
  for(int i = o; i < max_records; i++)
  {
    if(record[i].roll_number == rollNumber)
    {
      exists = 1;
      break;
    }
  }
  return exists;
}

int add_new_record(STUDENT_INFO_t *record, int8_t max_records)
{
  
}

int delete_record(STUDENT_INFO_t *record, int8_t max_records)
{
  
}