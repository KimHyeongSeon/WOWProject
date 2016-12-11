include "stdio.h"

int main()
{
   int x[10] = {45,77,89,38,29,58,93,84,73,66};
   int sum = 0,i,*x1;
   
   x1 = &x[0];
   
   for(i = 0; i<10; i++)
   {
      sum += *x1; 
   } 
   
   printf("sum = %d\n",sum);
   
   return 0;
}
