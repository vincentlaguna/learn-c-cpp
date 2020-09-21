#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
// Function Prototypes
short socketCreate(void);
int bindCreatedSocket(int hsocket);
// Main Function
int main(int argc, char *argv[])
{
  
  return(0);
}
// Function Definitions
short socketCreate(void)
{
  short hsocket;
  printf(">>> Created the Socket\n");
  hsocket = socket(AF_INET, SOCK_STREAM, 0);
  return hsocket;
}

int bindCreatedSocket(int hsocket)
{
  int iRetval = -1;
  int clientPort = 12345;
  
  struct sockaddr_in remote = {0};
  // Internet address family
  remote.sin_family = AF_INET;
  // Any incoming interface
  remote.sin_addr.s_addr = htonl(INADDR_ANY);
  remote.sin_port = htons(clientPort); // Local Port
  
  iRetval = bind(hsocket, (struct sockaddr *)&remote, sizeof(remote));
  return iRetval;
}