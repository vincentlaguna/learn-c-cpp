#include <stdio.h>
#include <stdlib.h>

char square[10] = {'o', '1', '2', '3', '4','5', '6', '7', '8', '9'};
int choice;
int player;

int checkForWin();
void displayBoard();
void markBoard(char mark);

int main(void)
{ 
  displayBoard();
  return 0;
}

int checkForWin()
{ 
  int returnValue = 0;
  
  if(square[1] == square[2] && square[2] == square[3])
  {
    returnValue = 1; 
  }
  else if(square[1] == square[5] && square[5] == square[9])
  {
    returnValue = 1;
  }
  else if(square[1] == square[4] && square[4] == square[7])
  {
    returnValue = 1;
  }
  else if(square[4] == square[5] && square[5] == square[6])
  {
    returnValue = 1;
  }
  else if(square[7] == square[5] && square[5] == square[3])
  {
    returnValue = 1;
  }
  else if(square[7] == square[8] && square[8] == square[9])
  {
    returnValue = 1;
  }
  else if(square[2] == square[5] && square[5] == square[8])
  {
    returnValue = 1;
  }
  else if(square[3] == square[6] && square[6] == square[9])
  {
    returnValue = 1;
  }
  else if(square[1] != '1' && square[2] != '2' && square[3] != '3' && 
  square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7'
  && square[8] != '8' && square[9] != '9')
  {
    returnValue = 0;
  }
  else
  {
    returnValue = -1;
  }
}

void displayBoard()
{
  system("clear");
  printf("\n\n\tTic Tac Toe\n\n");
  printf("Player 1 [x]  -  Player 2 [0]\n\n\n"); 
  
  printf("___|___|___\n");
  printf(" %c | %c | %c\n", square[1], square[2], square[3]);
  
  printf("___|___|___\n");
  printf("   |   |   \n");
  
  printf(" %c | %c | %c\n", square[4], square[5], square[6]);
  printf("   |   |   \n");
  
  printf("___|___|___\n");
  printf(" %c | %c | %c\n", square[7], square[8], square[9]);
  
}

void markBoard(char mark)
{
  
}