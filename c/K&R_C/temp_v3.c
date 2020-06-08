#include <stdio.h>

#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */

int main()
{
  /* print Farenheit-Celsius table */
  
  printf("***** Farenheit to Celsius Table *****\n\n");
  
    int fahr;
    
  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d %6.1f\n", fahr, (5.0 / 9) * (fahr - 32));
}