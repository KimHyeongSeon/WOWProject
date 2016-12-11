#include <stdio.h>
int main()
{
  int x; 
  int *p; 
  p = &x;
  
  scanf_s("%d", &x);
  printf("%#p %d", x, x);
  
  return 0;}
