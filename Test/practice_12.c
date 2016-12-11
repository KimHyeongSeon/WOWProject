#include <stdio.h>    

int main()
{
  int a[5];
  int *p = a;
  int i; 
  
  scanf_s("%d %d %d %d %d", (p + 0), (p + 1), (p + 2), (p + 3), (p + 4));  for (i = 0; i < 5; i+=2)  printf("%d ", p[i]); return 0;}
