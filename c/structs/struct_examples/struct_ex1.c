#include <stdio.h>
#include <stdint.h>

struct DataSet
{
    char data1;
    int data2;
    char data3;
    short data4;    
};

int main(void)
{   
    struct DataSet data;
    
    data.data1  = 0x11;
    data.data2  = 0xFFFFEEEE;
    data.data3  = 0x22;
    data.data4  = 0xABCD;
    
    uint8_t *ptr;
    ptr = (uint8_t*)&data; // struct DataSet*
    uint32_t totalSize = sizeof(struct DataSet);
    
    printf("Memory Address          Content \n");
    printf("================================\n");
    
    for(uint32_t i = 0; i < totalSize; i++)
    {
        printf("%p %13X\n", ptr, *ptr);
        ptr++;
    }
    
    return 0;
}