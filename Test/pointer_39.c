#include<stdio.h>

int main(void)
{
  int a = 35;
  int b = 60;
  
  int *ptr1 = &a;
  int *ptr2 = &b;
  
  printf("ptr1+ptr2=%d\n", *ptr1 + *ptr2); return 0;}
