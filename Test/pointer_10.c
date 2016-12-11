#include "stdio.h"

int main()
{
   int num=10,num2=20;
   int *ptr=&num,*ptr2=&num2;
   
   *ptr+=10;
   *ptr2-=10;
   *ptr=num2;
   *ptr2=num;
   
   printf("%d \n",*ptr);
   printf("%d \n",*ptr2);
   
   return 0;
}
