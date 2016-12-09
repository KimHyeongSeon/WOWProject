#include "stdlib.h"
#include "stdafx.h"

void PrintHello(void)
{
  printf("Hello World\n");
}

void PrintLine(void)
{
  int i; 
  
  for(i=0;i<20;i++)  
  {
      printf("-");
  }
  printf("\n");
}


int _tmain(int argc, _TCHAR* argv[])
{
  PrintLine();  
  PrintHello(); 
  PrintLine();
  
  system("pause");
  return 0;
}

