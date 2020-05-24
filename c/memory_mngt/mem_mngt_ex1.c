#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  void *p = (int *) malloc(4);
  if (!p) // there is no hope :(
  {
    return 1;
  }
  //*p = 42;
  free(p);
  void *frame = malloc(1514);
  free(frame);
  char *message = (char *) malloc(141);
  free(message);
}