#include "stdio.h"

int main()
{ 
  int i,*p;
  scanf("%d",&i);
  
  p=&i;
  printf("%#p %d",p,i);
  
  return 0;
}
