/***********************************************************************************
* You live in the city of Cartesia where all roads are laid out in a perfect grid. *
* You arrived ten minutes too early to an appointment, so you decided to take      *
* the opportunity to go for a short walk. The city provides its citizens with a    *
* Walk Generating App on their phones -- everytime you press the button it sends   *
* you an array of one-letter strings representing directions to walk               *
* (eg. ['n', 's', 'w', 'e']). You always walk only a single block                  * 
* for each letter (direction) and you know it takes you one minute to              *
* traverse one city block, so create a function that will return true if           *
* the walk the app gives you will take you exactly ten minutes                     *
* (you don't want to be early or late!) and will, of course,                       *
* return you to your starting point. Return false otherwise.                       *
*                                                                                  *
* **********************************************************************************/
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  
  return(0);
}

bool isValidWalk(const char *walk) 
{
  if ((sizeof(walk) / sizeof(walk[0])) != 10)
      return false;
  
}

void displayBoard()
{
  system("clear");
  printf("\n\n\tTic Tac Toe\n\n");
  printf("Player 1 [x]  -  Player 2 [0]\n\n\n"); 
  
  printf("     |     |     \n");
  printf("  %c  |  %c  |  %c  \n", square[1], square[2], square[3]);
  
  printf("_____|_____|_____\n");
  printf("     |     |     \n");
  
  printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);
  
  printf("_____|_____|_____\n");
  printf("     |     |     \n");
  
  printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);
  
  printf("     |     |      \n\n");
  
}