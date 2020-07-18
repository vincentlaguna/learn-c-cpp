#include <stdio.h>
#include <stdint.h>

typedef struct
{
    char data1;
    int data2;
    char data3;
    short data4;
}DataSet_t; 
// __attribute__((packed)); // Notice the size go from 12 bytes to 4 with "packed"
// DataSet_t = convention for "typedefs", for enums: DataSet_e
DataSet_t data;

void displayMemberElements(DataSet_t *pData);

int main(void)
{   
    
    data.data1  = 0x11;
    data.data2  = 0xFFFFEEEE;
    data.data3  = 0x22;
    data.data4  = 0xABCD;
    
    printf("data.data1 = %X\n", data.data1);
    
    DataSet_t *pData;
    pData = &data;
    
    pData->data1 = 0x55;
    
    printf("After structure member has been modified -> %X\n", data.data1);
    
    displayMemberElements(&data);
    
    return 0;
}

void displayMemberElements(DataSet_t *pData) // Pass by reference
{
    printf("data1 -> %X\n", pData->data1);
    printf("data2 -> %X\n", pData->data2);
    printf("data3 -> %X\n", pData->data3);
    printf("data4 -> %X\n", pData->data4);
}