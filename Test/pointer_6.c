#include <stdio.h>

int main(void)
{ 
   int data = 100;
   char ch = 'A';
   int *ptrint = &data;
   char *ptrchar = &ch;
   
   printf("간접 참조 출력 : %d %c\n", *ptrint, *ptrchar);
   
   *ptrint = 200;
   *ptrchar = 'B';
   
   printf("직접 참조 출력 : %d %c\n", data, ch);
   
   return 0;
}
