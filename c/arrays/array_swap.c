#include <stdio.h>
#include <stdint.h>

void wait_for_user_input(void);
void display_array(uint32_t *pArray1, uint32_t nitem);

int main(void)
{
  uint32_t nItem1; 
  uint32_t nItem2;
  printf("[Array swapping program____________########]\n");
  printf("\nEnter the elements of array-1 and array-2: ");
  scanf("%d %d", &nItem1, &nItem2);
  
  if((nItem1 < 0) || (nItem2 < 0))
  {
    printf("The number of elements cannot be negative.\n");
    wait_for_user_input();
    return 0;
  }
  
  uint32_t array1[nItem1];
  uint32_t array2[nItem2];
  
  for(uint32_t i = 0; i < nItem1; i++)
  {
    printf("Enter %d element of array 1: ", i);
    scanf("%d", &array1[i]);
  }
  
  for(uint32_t i = 0; i < nItem2; i++)
  {
    printf("Enter %d element of array 2: ", i);
    scanf("%d", &array2[i]);
  }
  printf("Contents of array before swap -> \n");
  display_array(array1, nItem1)
  return 0;
}

void display_array(int32_t *pArray1, uint32_t nitem)
{
  for(uint32_t i = 0; i < nitem; i++)
  {
    printf("%d ", *(pArray1 + i));
    
  }
}

void wait_for_user_input(void)
{
  
}