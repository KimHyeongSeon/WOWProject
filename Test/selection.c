#include "stdio.h"
#include "stdlib.h"

int main()
{
  int a[7],i,j,temp;
  for(i=0;i<7;i++)
  {
  scanf("%d",a[i]);
  }
  for(i=0;i<6;i++)
  {
    for(j=1+1;j<7;j++)
    {
      if(a[i]>a[j])
      {
        tmp=a[i];
        a[i]=a[j];
        a[j]=tmp;
       }
     }
    }
    for(i=0;i<7;i++)
    {
      printf("%d",a[i]);
     }
     system("pause");
     return 0;
  }
