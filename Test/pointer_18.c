#include <stdio.h>     

int main()
{
   char str[] = "abcdefghij";
   char *p = NULL;
   int i;
   p = str + 5;
  
   for (i = 0; i < 5; i++, p++) 
   {  
      *p = '1' + i; 
   } 
   
   printf("str = %s\n", str);
   
   return 0;
}
