#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <signal.h>
// Globals
int score = 0;
// Function Prototypes
void endGame();
void error(char *msg);
// Main Functions
int main(void)
{
  puts("\n<<< Inter-Process Communication example >>> \n");
  
  return(0);
}
// Function Definitions
void endGame()
{
  printf("\nFinal Score: %d\n", score);
  exit(0);
}

void error(char *msg)
{
  fprintf(stderr, "%s: %s\n", msg, strerror(errno));
  exit(1);
}