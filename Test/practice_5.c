#include<stdio.h>

int main(void)
{
  int i, j;
  int *pi;
  i = 10;
  j = i;
  j = j + 1;
  
  printf("i=%d,j=%d\n", i, j);
  
  i = 5;
  pi = &i; 
  *pi = *pi + 1;
  
  printf("i=%d,*pi=%d\n", i, *pi);
  
  return 0;}
