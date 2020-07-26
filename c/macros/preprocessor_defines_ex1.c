#include <stdio.h>
#define PI_VALUE 3.1415
// AREA_OF_CIRCLE(r) PI_VALUE * r * r -> Not safe!
#define AREA_OF_CIRCLE(r) ((PI_VALUE) * (r) * (r)) // Safe

int main(void)
{
  int area_Circle;
  return 0;
}