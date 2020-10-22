#include <stdio.h>
#include <stdlib.h>

struct rectangle
{
  float height;
  float width;
}

void createRectangle(struct rectangle *pR, float h, float w);
float getRectangleArea(struct rectangle *pR);
void changeRectangleArea(struct rectangle *pR, float h, float w);

int main(void)
{
  struct rectangle r;
  
  // createRectangle(&r, 10.50, 20.75);
  // getRectangleArea(&r);
  // changeRectangleArea(&r, 10, 50);
  // getRectangleArea(&r);
  
  return(0);
}

void createRectangle(struct rectangle *pR, float h, float w)
{
  
}

float getRectangleArea(struct rectangle *pR)
{
  
}

void changeRectangleArea(struct rectangle *pR, float h, float w)
{
  
}