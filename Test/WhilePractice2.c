#include "stdio.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
  int num=0; 
  while(num<5) 
  {
    printf("Hello world!%d\n", num);  
    num++; 
  }
  system("pause"); 
  return 0;
}
