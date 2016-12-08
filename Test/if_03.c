 

#include "stdafx.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
 int age;

 printf("현제나이는???");
 scanf("%d",&age);

 if(20<=age)
 {
  printf("성인입니다");
 }
 else
 {
  printf("당신은 %d년 후에 성인이 됩니다.",20-age);
 }

 

 

 system ("pause");
 return 0;
}
