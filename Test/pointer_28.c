#include "stdio.h"

void Num1(int *p)
{ 
  printf("홀수 출력 :");
  
  for (int i = 0; i < 10; i++)
    if (p[i] % 2 != 0)  
      printf("%d", p[i]);
}

void Num2(int *p)
{
  printf("짝수 출력 :");
  for (int i = 0; i < 10; i++)
    if (p[i] % 2 == 0) 
      printf("%d", p[i]);
}

int main(void)
{ 
  int arr[10];
  int input;
  
  printf("총 10개의 숫자 입력\n");
  
  for (int i = 0; i < 10; i++)
  { 
    printf("?:");
    scanf("%d", &input);
    arr[i] = input;
  }
  
  Num1(arr);
  printf("\n");
  Num2(arr); 
  printf("\n");

  return 0;
}
