// Prints a one-month reminder list (dynamic string version)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[], int n);

int main(void)
{
  char *reminders[MAX_REMIND];
  char day_str[3];
  char msg_str[MSG_LEN + 1];
  int day, i, j, num_remind = 0;
  
  for(;;)
  {
    if(num_remind == MAX_REMIND)
    {
      printf("-- No Space Left! --\n");
      break;
    }
    printf("Enter day and reminder: ");
    scanf("%2d", &day);
    if(day == 0)
      break;
    sprintf(day_str, "%2d", day);
    read_line(msg_str, MSG_LEN);
    
    for(i = 0; i < num_remind; i++)
      if(strcmp(day_str, reminders[i]) < 0)
        break;
    for(j = num_remind; j > i; j--)
  }
  
  return(0);
}

int read_line(char str[], int n)
{
  
}