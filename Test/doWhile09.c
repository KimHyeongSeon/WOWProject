#include "stdafx.h"
#include "stdlib.h"

void main()
{
    int i = 10, k, s;
    printf("10층짜리 역피라미드를 출력하는 프로그램입니다.\n");
    do
    {
      k = 1;
      for (s = 10; s > i; s--)
      {
        printf(" ");
      }
      do
      {
        printf("*");
        k++;
      }
      while (k < 2 * i);
      printf("\n");
      i--;
    } 
    while (i > 0);
}
