/*******************************************************************************
*                                                                              *
*                           32-bit Packet Decoder                              *
* Format:                                                                      *
*                                                                              *
* <ADDR_MODE>|<SHORT_ADDR>|<LONG_ADDR>|<SENSOR>|<BAT>|<PAYLOAD>|<STATUS>|<CRC> *
*      1            2           8         3       3       12       1       2   *
*                                                                              *
********************************************************************************/

#include <stdio.h>
#include <stdint.h>

typedef struct
{
  uint8_t crc;
  uint8_t status;
  uint16_t payload;
  uint8_t bat;
  uint8_t sensor;
  uint8_t longAddr;
  uint8_t shortAddr;
  uint8_t addrMode;
}Packet_t;

int main(void)
{
  uint32_t packetValue;
  printf("Enter 32-bit Packet Value: ");
  scanf("%u", &packetValue);
  
  Packet_t packet;
  
  packet.crc        = (uint8_t)(packetValue & 0x3);
  packet.status     = (uint8_t)((packetValue >> 2) & 0x1);
  packet.payload    = (uint16_t)((packetValue >> 3) & 0xFFF);
  packet.bat        = (uint8_t)((packetValue >> 15) & 0x7); 
  packet.sensor     = (uint8_t)((packetValue >> 18) & 07);
  packet.longAddr   = (uint8_t)((packetValue >> 21) & 0xFF);
  packet.shortAddr  = (uint8_t)((packetValue >> 29) & 0x3);
  packet.addrMode   = (uint8_t)((packetValue >> 31) & 0x3);
  
  printf("crc       : [%x] %u\n", packet.crc);
  printf("status    : [%x]\n", packet.status);
  printf("payload   : [%x]\n", packet.payload);
  printf("bat       : [%x]\n", packet.bat);
  printf("sensor    : [%x]\n", packet.sensor);
  printf("longAddr  : [%x]\n", packet.longAddr);
  printf("shortAddr : [%x]\n", packet.shortAddr);
  printf("addrMode  : [%x]\n", packet.addrMode);
  
  return 0;
}