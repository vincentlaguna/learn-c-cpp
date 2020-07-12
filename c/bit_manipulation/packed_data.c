#include <stdio.h>

struct packed_struct
{
  int count;
  char c;
  unsigned int :3;
  unsigned int f1:1;
  unsigned int f2:1;
  unsigned int f3:1;
  unsigned int type:8;
  unsigned int index:10;
};

int main(void)
{
  struct packed_struct packed_data;
  
  packed_data.type = 7;
  //unsigned int bit = packed_data.type; // variable created to access the element
  unsigned int i = packed_data.index / 5 + 1;
  
  if(!packed_data.f2)
    printf("packed_data.f2 -> [%d]\n", packed_data.f2);
  
  return 0;
}