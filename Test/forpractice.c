#include "stdafx.h"
#include "stdlib.h"


int GetFactorial(int num)
{ 
  int i;
  int fact=1; 
  for(i=1;i<=num;i++) 
    fact*=i; 
  return fact;
}

int GetSum(int num)
{
  int i;
  int sum=0;
  for(i=1;i<=num;i++)
    sum+=i; 
  return sum;
}


int _tmain(int argc, _TCHAR* argv[])
{
  int result1, result2; 
  
  result1=GetFactorial(10);  
  printf("10팩토리얼=%d\n", result1);
  result2=GetSum(10);
  printf("1~10의 합계=%d\n", result2);  
  
  system("pause");
  return 0;
}
