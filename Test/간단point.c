#include <stdio.h>
#include <string.h> // strlen(s)  


int main()
{
  char s[21]; // 마지막 '\0'만 빼고 20글자 까지 입력할 공간 마련
  char *p;
  int i;	
  
  printf("문자열을 입력하시오(10자 이내): ");
  scanf_s("%s", s, sizeof(s)); 	p = s; // 배열의 주소를 포인트 변수 p에 할당 
  
  for (i = strlen(s)-1; i >=0; i--)	
  {
    printf("%c", *(p + i));
  }
  printf("\n");
  
  retunr 0; //  int
}
