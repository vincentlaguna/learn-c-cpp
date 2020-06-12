#include <stdio.h>
#include "util.h"

int main(void)
{ 
  int n = 2;
  printf("Result of Add function is -> [%d]\n", add(&n, &n));
  return 0;
}