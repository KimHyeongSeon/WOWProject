#include "stdio.h"

int main()
{ 
   char ch1[10];
   char ch2[20];
   
   char *p;
   ch1[0] = '1';
   ch1[1] = '2';
   ch2[0] = 'a';
   ch2[1] = 'b'; 
   
   p = ch1;
   printf("ch1 p[0] = %c\n", p[0]);
   printf("ch1 p[1] = %c\n", p[1]);
   
   p = ch2;
   printf("ch2 p[0] = %c"\n, p[0]);
   printf("ch2 p[1] = %c\n", p[1]);
   
   return 0;
}
