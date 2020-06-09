/*
*
* blinky.c
*
*/

#include <stdio.h>
#include <bcm2835.h>

#define LED RPI_GPIO_P1_07

int main(int argc, char **argv)
{
  if(!bcm2835 init()) return 1;
  bcm2835 gpio_fsel(LED, BCM2835_GPIO_FSEL OUTP);
  
  unsigned int delay = 1000;
  while(1)
  {
    bcm2835_gpio_set(LED);
    bcm2835_delay(delay);
    bcm2835_gpio_clr(LED);
    bcm2835_delay(delay);
  }
}