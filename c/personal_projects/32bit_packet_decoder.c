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
  crc;
  status;
  payload;
  bat;
  sensor;
  longAddr;
  addrMode;
}Packet_t;

int main(void)
{
  return 0;
}