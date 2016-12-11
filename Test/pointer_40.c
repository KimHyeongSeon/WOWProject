#include<stdio.h>

int main(void)
{
  int a = 1; int* b; b = &a; printf("a의 값은 %d 입니다.\n", a); printf("a의 주소값은 %p입니다.\n", &a); printf("포인터형 변수 b의 주소값은 %p입니다.\n", b); return 0;}
