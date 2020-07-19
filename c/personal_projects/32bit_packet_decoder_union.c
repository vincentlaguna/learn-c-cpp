/*******************************************************************************
*                                                                              *
*                           32-bit Packet Decoder                              *
* Format:                                                                      *
*                                                                              *
* <ADDR_MODE>|<SHORT_ADDR>|<LONG_ADDR>|<SENSOR>|<BAT>|<PAYLOAD>|<STATUS>|<CRC> *
*      1            2           8         3       3       12       1       2   *
*                                                                              *
********************************************************************************/
// Second working iteration optimized using bit-field

#include <stdio.h>
#include <stdint.h>

union Packet
{
  uint32_t packetValue;
  
  struct
  {
    uint32_t crc        :2;
    uint32_t status     :1;
    uint32_t payload    :12;
    uint32_t bat        :3;
    uint32_t sensor     :3;
    uint32_t longAddr   :8;
    uint32_t shortAddr  :2;
    uint32_t addrMode   :1;
  }packetFields;
};

int main(void)
{
  union Packet packet;
  printf("Enter 32-bit Packet Value: ");
  scanf("%x", &packet.packetValue);
  
  printf("crc       : [ %#x ]\n", packet.packetFields.crc);
  printf("status    : [ %#x ]\n", packet.packetFields.status);
  printf("payload   : [ %#x ]\n", packet.packetFields.payload);
  printf("bat       : [ %#x ]\n", packet.packetFields.bat);
  printf("sensor    : [ %#x ]\n", packet.packetFields.sensor);
  printf("longAddr  : [ %#x ]\n", packet.packetFields.longAddr);
  printf("shortAddr : [ %#x ]\n", packet.packetFields.shortAddr);
  printf("addrMode  : [ %#x ]\n", packet.packetFields.addrMode);
  
  printf("Size of structure is -> %ld\n", sizeof(packet));
  
  while(getchar() != '\n')
  getchar();
  
  return 0;
}