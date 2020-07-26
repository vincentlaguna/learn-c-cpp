#include <stdio.h>
#include <stdint.h>
#include <string.h>
// Definition of a student record
typedef struct
{
  int rollNumber;
  char name[100];
  char branch[50];
  int dob;
  int semester;
}STUDENT_INFO_t;

int max_record = 10; // Max number this program can store
STUDENT_INFO_t students[10]; // Global array of records
// Function Protoypes
void display_menu(void);
int read_menu_code(void);
void decode_menu_code(int8_t menu_code);
void display_all_records(STUDENT_INFO_t *record, int8_t max_record);
int check_roll_number(STUDENT_INFO_t *record, int8_t max_record);
int add_new_record(STUDENT_INFO_t *record, int8_t max_record);
int delete_record(STUDENT_INFO_t *record, int8_t max_record);

// Starting point of application
int main(void)
{
  int8_t menu_code;
  int8_t app_continue = 1;
  
  printf("***Student Record Management Program***\n");
  
  while(app_continue)
  {
    display_menu();
    menu_code = read_menu_code();
    
    if(menu_code)
      decode_menu_code(menu_code);
    else
    {
      app_continue = 0;
      printf("Exiting application\n");
    }
  }
  return 0;
}

void display_menu(void)
{
  printf("Display all records   -->1\n");
  printf("Add new record        -->2\n");
  printf("Delete a record       -->3\n");
  printf("Exit Application      -->4\n");
  printf("Enter your option here:");
}

int read_menu_code(void)
{
  int input;
  scanf("%d", &input);
  return input;
}

void decode_menu_code(int8_t menu_code)
{
  int8_t ret;
  
  switch(menu_code)
  {
    case 1:
      printf("Displaying all of the student records: \n");
      display_all_records(students, max_record);
      break;
    case 2:
      printf("Add a new record: \n
      ret = add_new_record(students, max_record);
      !ret ? printf("Record add not successfull.\n") : printf("Record added successfully\n");
      break:
    case 3:
      printf("Delete a record: \n");
      ret = delete_record(students, max_record);
      !ret ? printf("Record delete not successfull.\n") : printf("Record deleted successfully\n");
      break;
      default:
        printf("Invalid input!\n");
  }
}

void display_all_records(STUDENT_INFO_t *record, int8_t max_record)
{
  int record_found = 0;
  
  for(int i = 0; i < max_record; i++)
  {
    if(record[i].rollNumber)
    {
      record_found = 1;
      // Display the record
      printf("********************************\n");
      printf("Roll Number                 : %d\n", record[i].rollNumber);
      printf("Student Semester            : %d\n", record[i].semester);
      printf("Student DOB                 : %d\n", record[i].dob);
      printf("Student Branch              : %s\n", record[i].branch);
      printf("Student Name                : %s\n", record[i].name);
      printf("********************************\n");
    }
  }
  if(!record_found)
    printf("No record found!\n");
}

int check_roll_number(STUDENT_INFO_t *record, int8_t max_record);
int add_new_record(STUDENT_INFO_t *record, int8_t max_record);
int delete_record(STUDENT_INFO_t *record, int8_t max_record);