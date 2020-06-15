#include <stdio.h>

struct Date
{
  int day;
  int month;
  int year;
};

struct Car // Declaring the structure
{
  char name[50];
  char model[50];
  float price;
  struct Date mfdDate; // Nested strucutre
  int mileage;
};

struct Car varA[5]; // Declaring structure-type variables

int main(void)
{ 
  int i;
  
  for(i = 0; i < 5; i++)
  {
    printf("Enter the name of the car -> ");
    gets(varA[i].name);
    printf("Enter the model of the car -> ");
    gets(varA[i].model);
    printf("Enter the price of the car -> ");
    scanf("%f", &varA[i].price);
    printf("Enter the Mfg date of the car: \n");
    printf("Enter the day -> ");
    scanf("%d", &varA[i].mfdDate.day);
    printf("Enter the month -> ");
    scanf("%d", &varA[i].mfdDate.month);
    printf("Enter the year -> ");
    scanf("%d", &varA[i].mfdDate.year);
    printf("Enter the mileage of the car -> ");
    scanf("%d", &varA[i].mileage);
    fflush(stdin);
    break;
    printf("\n");
  }
  printf("The details you have entered are: \n");
  
  for(i = 0; i < 5; i++)
  {
    printf("The name of the car -> %s\n", varA[i].name);
    printf("The model of the car -> %s\n", varA[i].model);
    printf("The price of the car -> %f\n", varA[i].price);
    printf("The Mfg date of the car -> %d/%d/%d\n", varA[i].mfdDate.day, varA[i].mfdDate.month, varA[i].mfdDate.year);
    printf("The mileage of the car -> %d\n", varA[i].mileage);
  }
  return 0;
}