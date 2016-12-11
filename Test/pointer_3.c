#include <stdio.h>

int main(void)
{
   int input; 
   
   printf("정수 입력:");
   scanf("%d", &input);
   
   printf("입력값 :%d\n", input);
   printf("주소값 : %u(십진수), %p(16진수)\n", &input, &input); 
   printf("주소값 : %u(십진수), %#p(16진수)\n", &input, &input);
   printf("주소값 크기: %d\n", sizeof(&input)); 
   
   return 0;
}
