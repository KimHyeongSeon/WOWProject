#include "stdio.h"

int main()
{
   int i =10, j = 20, *a;
   a = &i;
   
   printf("%p, %p\n",&i,&a);
   printf("%p\n\n", *a);
   a = %j;
   
   printf("%p, %p\n", &j,&a);
   printf("%d\n",*a);
   
   return 0;
}
