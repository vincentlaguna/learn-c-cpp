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

char gridSquare[10][10] = 
{
  {'0','0','0','0','0','0','0','0','0','0','0'},
  {'0','0','0','0','0','0','0','0','0','0','0'},
  {'0','0','0','0','0','0','0','0','0','0','0'},
  {'0','0','0','0','0','0','0','0','0','0','0'},
  {'0','0','0','0','0','0','0','0','0','0','0'},
  {'0','0','0','0','0','H','0','0','0','0','0'},
  {'0','0','0','0','0','0','0','0','0','0','0'},
  {'0','0','0','0','0','0','0','0','0','0','0'},
  {'0','0','0','0','0','0','0','0','0','0','0'},
  {'0','0','0','0','0','0','0','0','0','0','0'},
  {'0','0','0','0','0','0','0','0','0','0','0'},
  
};

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

void displayBoard(void)
{
  //system("clear");
  printf("\n\n\tTen Minute walk grid\n\n");
  printf("\n\n\tPlayer [x] - Home ['0']\n\n\n"); 
  
  printf("\t _________________________________________________________________ \n");
  printf("\t|     |     |     |     |     |     |     |     |     |     |     |\n");
  printf("\t|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n", gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[3][0], gridSquare[3][0]);
  printf("\t|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
  printf("\t|     |     |     |     |     |     |     |     |     |     |     |\n");
  printf("\t|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n", gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[3][0], gridSquare[3][0]);
  printf("\t|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
  printf("\t|     |     |     |     |     |     |     |     |     |     |     |\n");
  printf("\t|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n", gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[3][0], gridSquare[3][0]);
  printf("\t|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
  printf("\t|     |     |     |     |     |     |     |     |     |     |     |\n");
  printf("\t|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n", gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[3][0], gridSquare[3][0]);
  printf("\t|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
  printf("\t|     |     |     |     |     |     |     |     |     |     |     |\n");
  printf("\t|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n", gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[1][0], gridSquare[4][4], gridSquare[3][0], gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[3][0], gridSquare[3][0]);
  printf("\t|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
  printf("\t|     |     |     |     |     |     |     |     |     |     |     |\n");
  printf("\t|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n", gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[1][0], gridSquare[2][0], gridSquare[5][5], gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[3][0], gridSquare[3][0]);
  printf("\t|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
  printf("\t|     |     |     |     |     |     |     |     |     |     |     |\n");
  printf("\t|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n", gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[3][0], gridSquare[3][0]);
  printf("\t|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
  printf("\t|     |     |     |     |     |     |     |     |     |     |     |\n");
  printf("\t|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n", gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[3][0], gridSquare[3][0]);
  printf("\t|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
  printf("\t|     |     |     |     |     |     |     |     |     |     |     |\n");
  printf("\t|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n", gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[3][0], gridSquare[3][0]);
  printf("\t|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
  printf("\t|     |     |     |     |     |     |     |     |     |     |     |\n");
  printf("\t|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n", gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[3][0], gridSquare[3][0]);
  printf("\t|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
  printf("\t|     |     |     |     |     |     |     |     |     |     |     |\n");
  printf("\t|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n", gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[1][0], gridSquare[2][0], gridSquare[3][0], gridSquare[3][0], gridSquare[3][0]);
  printf("\t|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
  
  printf("\n\n");
  
}