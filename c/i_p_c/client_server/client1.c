#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
// Function Prototypes
short socketCreate(void);
int socketConnect(int hsocket);
int socketSend(int hsocket, char *Rqst, short lenRqst);
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
    remote.sin_port = htons(ServerPort);
    iRetval = connect(hsocket, (struct sockaddr *)&remote, sizeof(struct sockaddr));
    return iRetval;    
}
// Send the data to the server and set the timeout of 20 seconds
int socketSend(int hsocket, char *Rqst, short lenRqst)
{
    int shortRetVal = -1;
    struct timeval tv;
    tv.tv_sec = 20; // 20 second timeout
    tv.tv_usec = 0;
    
    if(setsockopt(hsocket, SOL_SOCKET, SNDTIMEO, (char *)&tv, sizeof))
    {
        printf(">>> Time Out.\n");
        return -1;
    }
    shortRetVal = send(hsocket, Rqst, lenRqst, 0);
}