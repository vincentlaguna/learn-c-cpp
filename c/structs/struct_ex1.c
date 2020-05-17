#include <stdio.h>

typedef struct
{
  float x;
  float y;
} Pixel;

typedef struct Pixel Pixel;
typedef unsigned char byte;

struct Color
{
  byte Red;
  byte Green;
  byte Blue;
};

int main(void)
{
  Pixel p = { 10.02f, 20.0f };
  Color c = { 255, 128 };
  
  float x = p.X;
  //c.Blue = 255;
}