#include "stdio.h"
#include "stdlib.h"

int main()

int i,j,n;

for(i=0;j<=n-2;j++)
{
  for(i=j+1;i<=n-1;i++)
  {
    if(a[j]<a[i])
    {
      temp=a[j];
      a[j]=a[i];
      a[i]=temp;
      }
    }
    
   system("pause");
   return 0;
 }
