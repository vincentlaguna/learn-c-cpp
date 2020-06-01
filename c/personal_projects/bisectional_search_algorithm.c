/* This program will attempt to guess to guess the user's guessed number
in 4 tries or less, from a range of 0-100 */
#include <stdio.h>
#include <stdbool.h>
#define RANGE 100

int main(void)
{
  int guess = 0;
  bool guessed = false;
  char input;
  char correct = 'c';
  char higher = 'h';
  char lower = 'l';
  int high = 100;
  int low = 0;
  int tries;
  
  printf("Think of a number between 0 and 100...\n");
  
  while(!guessed)
  {
    guess = (high + low) / 2;
    printf("\nIs the number you are thinking of [%d]?\n", guess);
    printf("(Press 'c' if correct, 'h' if higher or 'l' if lower)> ");
    scanf("%c", &input);
      
    if((input == 'c')) //&& (tries <= 4))
    {
    printf("Your secret number was [%d]!\n", guess);
    guessed = true;
    }
    else if(input == 'h')
    {
      low = guess;
      tries++;
    }
    else if(input == 'l')
    {
      high = guess;
      tries++;
    }
    else
    {
      printf("\nYou have entered the wrong input! Please try again...\n");
    }
  }
  return 0;
}