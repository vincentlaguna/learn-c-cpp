#include <stdio.h>
#include <string.h>

#define MAX_REMIND 60 // Max number of reminders
#define MSG_LEN 60 // Max length of reminder message

int read_line(char str[], int n);

int main(void)
{
  char reminders[MAX_REMIND][MSG_LEN + 3];
  char day_str[3], msg_str[MSG_LEN + 1];
  int day, i, j, num_remind = 0;
  
  for(;;)
  {
    if(num_remind == MAX_REMIND)
    {
      printf("-- No Space Left --\n");
      break;
    }
    
  }
  return 0;
}

int read_line(char str[], int n)
{
  
}