#include "stdio.h"

void getsum(int x, int y, int *p1,int *p2);

void main()
{    
  int a,b;
 
  printf("a,b를 입력");
  scnaf("%d%d",&a,&b);
  
  getsum(a,b,&a,&b);
  
  printf("두정수의 합 :%d\n",a);
  printf("두정수의 차 :%d\n",b);
}

void getsum(int x, int y, int *p1,int *p2)
{
  *p1=x+y;
  
  if(x>=y)
    *p2=x-y;
  else*p2=y-x;}
