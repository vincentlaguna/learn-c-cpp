// Find out the number of electrons responsible for producing the given charge
// charge must be in scientific notation: #elec. = charge / elec. charge
// -1.602e-19
#include <stdio.h>

int main(void)
{
  double charge, chargeE;
  double electrons;
  printf("Enter the charge: ");
  scanf("%lf", &charge);
  printf("Enter the charge of an electron: ");
  scanf("%le", &chargeE);
  electrons = (charge / chargeE) * -1;
  printf("Total number of electrons = %le\n", electrons);
  printf("Total number of electrons = %lf\n", electrons);
}