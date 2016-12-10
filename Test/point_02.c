#include "stdio.h"
#include "stdlib.h"

int main(void)
{
  int x;
  int *p;
  
  p=&x;
  *p=10;
  
  printf("*p=%d\n",*p);
  printf("x=%d\n",x);
  
  printf("p=%p\n",p);
  printf("&x=%p\n",&x);
  
  printf("&p=%p\n", &p);
  
  system("pause");
  return 0;
}
