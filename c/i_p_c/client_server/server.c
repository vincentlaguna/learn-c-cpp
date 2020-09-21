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
  int socket_desc = 0, sock = 0, clientLen = 0;
  struct sockaddr_in client;
  char client_message[200] = {0};
  char message[100] = {0};
  // Create Socket
  socket_desc = socketCreate();
  
  if(socket_desc == -1)
  {
    printf("Could not create socket...\n");
    return 1;
  }
  printf("<<< Socket Created >>>\n");
  // Bind
  if(bindCreatedSocket(socket_desc) < 0)
  {
    perror(">>> Bind Failed...\n");
    return 1;
  }
  printf("<<< Bind Done >>>\n");
  // Listen
  listen(socket_desc, 3);
  
  printf(">>> Waiting for incoming connections...\n");
  clientLen = sizeof(struct sockaddr_in);
  // Accept connection from an incoming client
  sock = accept(socket_desc, (struct sockaddr *)&client, (socklen_t*)&clientLen);
  if(sock < 0)
  {
    perror(">>> Accept Failed.\n");
    return 1;
  }
  printf("<<< Connection Accepted >>>\n");
  memset(client_message, '\0', sizeof client_message);
  memset(message, '\0', sizeof message);
  // Receive a reply from the client
  if(recv(sock, client_message, 200, 0) < 0)
  {
    printf(">>> Recieve Failed.\n");
  }
  printf("Received from Client: %s\n", client_message);
  
  int i = atoi(client_message);
  i--;
  sprintf(message, "%d", i);
  close(sock);
  printf(">>> Waiting for inconming connections...\n");
  // Accept connection from an incoming client
  sock = accept(socket_desc, (struct sockaddr *)&client, (socklen_t*)&clientLen);
  
  if(sock < 0)
  {
    perror(">>> Accept Failed.\n");
    return 1;
  }
  printf("<<< Connection Accepted >>>\n");
  // Send some data
  if(send(sock, message, strlen(message), 0) < 0)
  {
    printf(">>> Send Failed.\n");
    return 1;
  }
  close(sock);
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