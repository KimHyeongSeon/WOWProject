#include<stdio.h> 

int main()
{
   int a=10;
   int *p=NULL;
   int **p2=NULL;
   
   p=&a;
   p2=&p;
   
   printf("%x %x %x \n", &a, &p, &p2);
   printf("%x %x %x \n", &a, p, p2);
   printf("%d %d %x %d \n", *&a, *p, *p2, **p2);
   
   return 0;
}
