#include <stdio.h>

int main() 
{
  double num[5]; 
  int i; 
  double *p;
  p = &num;
  
  for (i = 0; i <= 4; i++)
  {
    scanf("%lf", &num[i]);
  }
  
  for (i = 0; i <= 4; i++)
  {
    printf("%.1lf ", p[i]); 
  }
  
  return 0;}
