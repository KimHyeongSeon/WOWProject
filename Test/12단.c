#include "stdafx.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
  int a, b;  
  for(a=2; a<13; a++) 
  { 
    for(b=1; b<13; b++)   
      printf("%dX%d=%d\n", a, b, a*b);  
      printf("\n");  
  }  
  system("pause");
  return 0;
}
