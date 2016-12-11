#include <stdio.h>       

int main()
{
  double a[5];
  double *p = a;
  int i; 
  
  scanf_s("%lf %lf %lf %lf %lf", (p + 0), (p + 1), (p + 2), (p + 3), (p + 4)); for (i = 0; i < 5; i++)  printf("%.1lf ", p[i]); return 0;}
