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
    
    uint8_t *ptr;
    ptr = (uint8_t*)&data; // struct DataSet*
    uint32_t totalSize = sizeof(DataSet_t);
    
    printf("Memory Address          Content \n");
    printf("================================\n");
    
    for(uint32_t i = 0; i < totalSize; i++)
    {
        printf("%p %13X\n", ptr, *ptr);
        ptr++;
    }
    
    printf("Total memory consumed by this struct variable -> [%lu]\n", sizeof(DataSet_t));
    
    return 0;
}