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
    menu_code();
    
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