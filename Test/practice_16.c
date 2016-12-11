#include "stdio.h" 

int main()
{
  int j1=3, j2 =27;
  int * jint[2] = {&j1,&j2};
  char * jchar[] = {"it's","jdpb"};
  
  printf("%d%d\n",*jint[0],*jint[1]);
  printf("%s %s\n",jchar[0],jchar[1]);
  
  return 0;}
