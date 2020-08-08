#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  struct human
  {
    char name[32];
    char profession[64];
    int age;
  } *toRead;
  
  const char filename[] = "saved.dat";
  FILE *fp;
  // Allocate structure
  toRead = (struct human *)malloc(sizeof(struct human) * 1);
  
  if(toRead == NULL)
  {
    fprintf(stderr, "Unable to allocate structure memory.\n");
    exit(1);
  }
  // Read the structure into memory
  // Open the file
  fp = fopen(filename, "r");
  // Check for valid file
  if(toRead == NULL)
  {
    fprintf(stderr, "Unable to read from %s.\n", filename);
    exit(1);
  }
  // Read in the structure
  fread(toRead, sizeof(struct human), 1, fp);
  // Close the file
  fclose(fp);
  
  exit(0);
}
  
  