#include <stdio.h>

typedef union // Struct will not share memory address
{
  int Integer;
  float RealNumber;
} OneThingOrAnother;

int main(void)
{
  printf("int [%d] bytes\n", (int) sizeof(int));
  printf("float [%d] bytes\n", (int) sizeof(float));
  printf("aggregate [%d] bytes\n", (int) sizeof(OneThingOrAnother));
}