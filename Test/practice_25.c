#include <stdio.h>

int main()
{ 
  int input; 
  int *p;
  p = &input; 
  
  scanf("%d", &input); 
  printf("%d...%d", *p / 10, *p % 10);
  
  return 0;}
