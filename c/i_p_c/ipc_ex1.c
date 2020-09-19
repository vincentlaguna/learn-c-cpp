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
int catchSignal(int sig, void (*handler) (int));
void error(char *msg);
// Main Functions
int main(void)
{
  puts("\n<<< Inter-Process Communication example >>> \n");
  
  srand(time(0));
  
  return(0);
}
// Function Definitions
void endGame()
{
  printf("\nFinal Score: %d\n", score);
  exit(0);
}

int catchSignal(int sig, void (*handler) (int))
{
  struct sigaction action;
  action.sa_handler = handler;
  sigemptyset(&action.sa_mask);
  action.sa_flags = 0;
  
  return sigaction(sig, &action, NULL);
}

void error(char *msg)
{
  fprintf(stderr, "%s: %s\n", msg, strerror(errno));
  exit(1);
}