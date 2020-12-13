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

char gridSquare[10][10];

int main(void)
{
  displayBoard();
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
  printf("\n\n\tTen Minute walk grid\n\n");
  printf("Player [x] - Home [0]\n\n\n"); 
  
  printf("     |     |     \n");
  printf("  %c  |  %c  |  %c  \n", gridgridSquare[1], gridgridSquare[2], gridSquare[3]);
  
  printf("_____|_____|_____\n");
  printf("     |     |     \n");
  
  printf("  %c  |  %c  |  %c \n", gridSquare[4], gridSquare[5], gridSquare[6]);
  
  printf("_____|_____|_____\n");
  printf("     |     |     \n");
  
  printf("  %c  |  %c  |  %c \n", gridSquare[7], gridSquare[8], gridSquare[9]);
  
  printf("     |     |      \n\n");
  
}