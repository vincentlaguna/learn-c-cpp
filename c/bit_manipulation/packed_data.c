#include <stdio.h>

struct packet_data
{
  unsigned int :3;
  unsigned int f1:1;
  unsigned int f2:1;
  unsigned int f3:1;
  unsigned int type:8;
  unsigned int index:10;
};

int main(void)
{
  return 0;
}