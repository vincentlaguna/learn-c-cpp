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
  uint8_t addrMode;
}Packet_t;

int main(void)
{
  uint32_t packetValue;
  printf("Enter 32-bit Packet Value: ");
  scanf("%u", &packetValue);
  
  Packet_t packet;
  
  return 0;
}