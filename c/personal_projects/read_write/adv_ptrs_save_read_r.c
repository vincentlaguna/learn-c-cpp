#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  struct human
  {
    char name[32];
    char profession[64];
    int age;
  } *toWrite;
  
  const char filename[] = "saved.dat";
  char *r1;
  char *r2;
  FILE *fp;
  