#include <stdio.h>  

int main()
{
  int num1, num2; int *p1, *p2; p1 = &num1; p2 = &num2; scanf_s("%d %d", p1, p2); printf("%d + %d = %d\n", *p1, *p2, *p1 + *p2); printf("%d - %d = %d\n", *p1, *p2, *p1 - *p2); printf("%d * %d = %d\n", *p1, *p2, *p1 * *p2); printf("%d / %d = %d\n", *p1, *p2, *p1 / *p2); return 0;}
