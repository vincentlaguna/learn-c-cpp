#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
// Function Prototypes
short socketCreate(void);
int socketConnect(int hsocket);
int socketReceive(int hsocket, char *Rsp, short RvcSize);
// Main Driver Program
int main(int argc, char *argv[])
{
    int hsocket = 0, read_size = 0;
    char server_reply[200] = {0};
    // Create Socket
    hsocket = socketCreate();
    
    if(hsocket == -1)
    {
        printf(">>> Could not create socket.\n");
        return 1;
    }
    printf("<<< Socket Created >>>\n");
    // Connect to Remote Server
    if(socketConnect(hsocket) < 0)
    {
        perror(">>> Connection Failed.\n");
        return 1;
    }
    printf("<<< Successfully Connected with Server >>>\n");
    // Received the data from the server
    read_size = socketReceive(hsocket, server_reply, 200);
    printf(">>> Server Response: %s: read_size %d\n\n", server_reply, read_size);
    close(hsocket);
    
    return(0);
}
// Create a socket for server connection
short socketCreate(void)
{
    short hsocket;
    printf("<<< Create the Socket >>>\n");
    hsocket = socket(AF_INET, SOCK_STREAM, 0);
    return hsocket;
}
// Try to connect with server
int socketConnect(int hsocket)
{
    int iRetval = -1;
    int serverPort = 12345;
    struct sockaddr_in remote = {0};
    remote.sin_addr.s_addr = inet_addr("127.0.0.1"); // Local Host
    remote.sin_family = AF_INET;
    remote.sin_port = htons(serverPort);
    iRetval = connect(hsocket, (struct sockaddr *)&remote, sizeof(struct sockaddr_in));
    return iRetval;    
}
// Receive the data from the server
int socketReceive(int hsocket, char *Rsp, short RvcSize)
{
  int shortRetVal = -1;
  struct timeval tv;
  tv.tv_sec = 20; // 20 Second Time-Out
  tv.tv_usec = 0;
  
  if(setsockopt(hsocket, SOL_SOCKET, SO_RCVTIMEO, (char *)&tv, sizeof(tv)) < 0)
  {
    printf(">>> Time Out.\n");
    return -1;
  }
  shortRetVal = recv(hsocket, Rsp, RvcSize, 0);
  printf(">>> Response %s\n", Rsp);
  return shortRetVal;
}