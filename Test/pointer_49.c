#include <stdio.h>

void swap(int * q,int * p)
{   
  int temp = *p;    *p = *q;    *q = temp;}int main(){    int a = 10, b = 2, x = 3, y = 5;    printf("a,b,x,y: %d,%d,%d,%d\n", a, b, x, y);    swap(&x, &y);    swap(&a, &b);    printf("a,b,x,y: %d,%d,%d,%d\n", a, b, x, y);} 
