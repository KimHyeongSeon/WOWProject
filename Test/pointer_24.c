#include <stdio.h>    

int main()
{
  int num;
  int *p=(int*)(0);
  
  scanf_s("%d", &num);
  
  p = &num;
  
  printf("%p %d", p, *p);
  
  return 0;
}
