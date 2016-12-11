#include<stdio.h>

int main(void)
{
  int a = 50;
  int* b;
  b = &a;
  *b += 60;
  
  printf("%d\n", a); return 0;}
