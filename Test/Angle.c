#include "stdlib.h"
#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{ 
  int i=0, j=0; 
  
  while(i<5)
  { 
    while(j<1) 
    { 
      printf("0");
      j++; 
    } 
    j=0;
    printf("*\n"); 
    i++ 
  }  
    system("pause");
    return 0;
}
