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
void endGame(); // Function handler for SIGINT
int catchSignal(int sig, void (*handler) (int));
void timesUp(); // Function handler for SIGALRM
void error(char *msg);
// Main Functions
int main(void)
{
  puts("\n<<< Inter-Process Communication example >>> \n");
  
  srand(time(0));
  
  catchSignal(SIGALRM, timesUp);
  catchSignal(SIGINT, endGame);
  
  while(1)
  {
    int a = rand() % 11;
    int b = rand() % 11;
    
    alarm(5);
    
    char txt[4];
    
    printf("\nWhat is %d times %d: ", a, b);
    fgets(txt, 4, stdin);
    
    int answer = atoi(txt);
    
    if(answer == a * b)
      score++;
    else
      printf("\nWrong! Score: %d\n", score);
  }
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

void timesUp()
{
  puts("\nTIME's UP!");
  raise(SIGINT);
}

void error(char *msg)
{
  fprintf(stderr, "%s: %s\n", msg, strerror(errno));
  exit(1);
}