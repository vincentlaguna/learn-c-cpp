#include <stdio.h>
#include <stdlib.h>

struct rectangle
{
  float height;
  float width;
}

int main(void)
{
  struct rectangle r;
  
  createRectangle(&r);
  getRectangleArea(&r);
  changeRectangleArea(&r);
  getRectangleArea(&r);
  
  return(0);
}