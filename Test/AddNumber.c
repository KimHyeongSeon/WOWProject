#include "stdio.h"
#include "stdlib.h"
int _tmain(int argc, _TCHAR* argv[])
{
  int a, b;
  int c;
  
  printf("두가지 정수를 입력하세요. : ");
  scanf("%d %d", &a, &b);
  
  for(c=0; a<=b; a++)
  {
    c=c+a; 
  }
  
  printf("총합 : %d\n",c);
  
    
  system("pause"); 
  return 0;
}
