#include <stdio.h>
//#define AREA_OF_CIRCLE(r) PI_VALUE * r * r // -> Not safe!
#define PI_VALUE (3.1415f)
#define AREA_OF_CIRCLE(x) ((PI_VALUE)*(x)*(x)) // Safe
#define AREA_CIRCLE
#define AREA_TRIANGLE


int main(void)
{
  float area_circle; 
  area_circle = AREA_OF_CIRCLE(1+1);
  printf("(ex.) Area of circle -> %f\n", area_circle);
  
  //#undef AREA_CIRCLE // -> will override previous #define AREA_CIRCLE
  #ifdef AREA_CIRCLE
    float radius = 0;
    printf("\nYou have now entered the circle area calculation program\n");
    printf("Enter the radius: ");
    scanf("%f", &radius);
    area_circle = AREA_OF_CIRCLE(radius);
    printf("Area of circle -> %f\n", area_circle);
  #endif
  
  #ifdef AREA_TRIANGLE
    float base, height;
    printf("\nYou have now entered the triangle area calculation program\n");
    printf("Enter base and height: ");
    scanf("%f%f", &base, &height);
    printf("Area of triangle -> %f\n", (0.5 * base * height));
  #endif
  
  return 0;
}