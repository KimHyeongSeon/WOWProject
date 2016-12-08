//server
#define _CRT_SECURE_NO_WARNINGS
#include<winsock.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h> 

int main()
{    
  SOCKET listen_s, s;   
  WSADATA wsaData;  
  SOCKADDR_IN saddr, from;   
  
  char szBuf[1024];    
  char myIdBuf[100];  
  char targetIdBuf[100]; 
  int fromlen, nRcv;    
  
  u_short uport;    
  printf("Id: ");   
  gets(myIdBuf); 
  printf("Port: ");  
  gets(szBuf);   
  uport = atoi(szBuf);  
  
  if (WSAStartup(MAKEWORD(1, 1), &wsaData))
  {        
    printf("Error\n");     
    WSACleanup();    
    return -1;   
  }    
  listen_s = socket(AF_INET, SOCK_STREAM, 0); 
  if (listen_s < 0)
  {    
    printf("Socket Create Error\n");  
    WSACleanup();      
    return -2;  
  }  
  else
  {     
    printf("Socket Create\n");   
  }     memset(&saddr, 0, sizeof(SOCKADDR_IN));
  
  saddr.sin_family = AF_INET; 
  saddr.sin_port = htons(uport);
  saddr.sin_addr.s_addr = INADDR_ANY;   
  if (bind(listen_s, (struct sockaddr *)&saddr, sizeof(saddr)) == SOCKET_ERROR)
  {  
    printf("bind Error\n");   
    closesocket(listen_s);    
    WSACleanup();      
    return -3;  
  }   
  else
  {   
    printf("bind \n");   
  }   
  if (listen(listen_s, 0) == SOCKET_ERROR)
  {       
    printf("listen Error\n");    
    closesocket(listen_s);      
    
    WSACleanup();      
    return -4;  
  }  
  else
  {
    printf("listen \naccept ready\n");    
  }
  fromlen = (int)sizeof(from);   
  s = accept(listen_s, (SOCKADDR *)&from, &fromlen); 
  if (s == INVALID_SOCKET)
  { 
    printf("accept error\n");    
    closesocket(listen_s);      
    WSACleanup();    
    return -5;   
  }
  else
  {
    printf("Connect\n", inet_ntoa(from.sin_addr));    
    printf("accept \nChat start\n\n"); 
  }
  closesocket(listen_s);  
  nRcv = recv(s, targetIdBuf, sizeof(targetIdBuf)-1, 0);  
  targetIdBuf[nRcv] = '\0'; 
  send(s, myIdBuf, (int)strlen(myIdBuf), 0);    
  printf("Help Message: -help\n\nChat Target: %s\n\n", targetIdBuf);  
  for (;;)
  { 
    printf("Wait...\n");   
    nRcv = recv(s, szBuf, sizeof(szBuf)-1, 0);     
    if (nRcv == SOCKET_ERROR)
    {       
      printf("recv Error\n");   
      break;     
    }       
    szBuf[nRcv] = '\0';  
    if (strcmp(szBuf, "c_end") == 0)
    {           
      printf("Client Exit\n");     
      break;     
    }        
    printf("%s: %s \n", targetIdBuf, szBuf); 
    for (;;)
    {     
      printf("Send Message: ");   
      gets(szBuf);        
      if (strcmp(szBuf, "-clear") == 0)
      {           
        
       system("cls");        
      }    
      else if (strcmp(szBuf, "-help") == 0)
      {
        printf("\nChat Stop: s_end\nView Clear: -clear\n\n");    
      }
      else
      {
        break;    
      } 
    }  
    if (strcmp(szBuf, "s_end") == 0)
    {
      send(s, szBuf, (int)strlen(szBuf), 0);   
      break;  
    }    
    send(s, szBuf, (int)strlen(szBuf), 0); 
  }
  closesocket(s);  
  WSACleanup(); 
  printf("Exit\n");   
  _getch();    
  
  return 0;
}

//Client
#define _CRT_SECURE_NO_WARNINGS
#include<WinSock2.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h> 
int main()
{
  SOCKET s;    
  WSADATA wsaData; 
  SOCKADDR_IN saddr; 
  
  char szBuf[1024]; 
  char szServer[1024];   
  char myIdBuf[100];   
  char targetIdBuf[100]; 
  HOSTENT *lpHost; 
  unsigned int addr;
  int nRcv;  
  u_short uport;
  
  printf("Id: "); 
  gets(myIdBuf);    
  printf("Port: ");   
  gets(szBuf);    
  uport = atoi(szBuf);   
  printf("Server IP Address: ");  
  gets(szServer);    
  if (WSAStartup(MAKEWORD(1, 1), &wsaData))
  {      
    printf("WSAStartup Error\n");   
    WSACleanup();      
    _getch();      
    return -1;   
  }    
  s = socket(AF_INET, SOCK_STREAM, 0); 
  if (s < 0)
  {    
    printf("Socket Open Error\n"); 
    _getch();  
    return -2;  
  }    
  lpHost = gethostbyname(szServer);  
  if (lpHost == NULL)
  {     
    addr = inet_addr(szServer);   
    lpHost = gethostbyaddr((char *)&addr, 4, AF_INET); 
  }    
  if (lpHost == NULL)
  {    
    printf("Server Find Error\n");
    closesocket(s);  
    WSACleanup();      
    _getch();  
    return -3;  
  }   
  memset(&saddr, 0, sizeof(SOCKADDR_IN));
  saddr.sin_family = lpHost->h_addrtype;  
  saddr.sin_port = htons(uport);   
  saddr.sin_addr.s_addr = *((u_long *)lpHost->h_addr);   
  if (connect(s, (SOCKADDR *)&saddr, sizeof(saddr)) == SOCKET_ERROR)
  {      
    printf("Connect Error\n");    
    closesocket(s);       
    WSACleanup();       
    return -4; 
  }   
  else
  {
    printf("Connect\n");       
    printf("Chat start\n\n");    
  }        
  send(s, myIdBuf, (int)strlen(myIdBuf), 0);  
  nRcv = recv(s, targetIdBuf, sizeof(targetIdBuf)-1, 0); 
  targetIdBuf[nRcv] = '\0';
  printf("Help Message: -help\n\nChat Target: %s\n\n", targetIdBuf);
  for (;;)
  {
    for (;;)
    {
      printf("Send Message: ");    
      gets(szBuf);     
      if (strcmp(szBuf, "-clear") == 0)
      {
        system("cls");
      } 
      else if (strcmp(szBuf, "-help") == 0)
      {
        printf("\nChat Stop: c_end\nView Clear: -clear\n\n");    
      }
      else
      {  
        break;     
      }
    }
    if (strcmp(szBuf, "c_end") == 0)
    {
      send(s, szBuf, (int)strlen(szBuf), 0);         
      break;  
    }   
    send(s, szBuf, (int)strlen(szBuf), 0);
    printf("Wait...\n");  
    nRcv = recv(s, szBuf, sizeof(szBuf)-1, 0);     
    if (nRcv == SOCKET_ERROR)
    {
      printf("recv Error\n");       
      break;    
    }
    szBuf[nRcv] = '\0';     
    if (strcmp(szBuf, "s_end") == 0)
    {
      printf("Server Exit\n"); 
      break;     
    }
    printf("%s: %s \n", targetIdBuf,szBuf);    
  }
  closesocket(s);
  WSACleanup(); 
  printf("Exit\n"); 
  _getch(); 
  return 0;
}









