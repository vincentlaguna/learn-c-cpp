// Convert a Fahrenheit temperature to Celsius (using pre-processor defines)
#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
  float fahrenheit;
  float celsius;
  
  printf("Enter Fahrenheit temperature: ");
  scanf("%f", &fahrenheit);
  
  celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
  printf("Celsius equivalent is -> %.1f\n", celsius);
  
  return 0;
}