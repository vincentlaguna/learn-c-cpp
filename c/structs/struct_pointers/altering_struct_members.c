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

int main(void)
{   
    
    data.data1  = 0x11;
    data.data2  = 0xFFFFEEEE;
    data.data3  = 0x22;
    data.data4  = 0xABCD;
    
    printf("data.data1 = %d\n", data.data1);
    
    DataSet_t *pData;
    pData = &data;
    
    pData->data1 = 0x55;
    
    return 0;
}