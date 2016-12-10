#include "stdio.h"
#include "stdlib.h"

int main(void)
{
  int arr[5]={10,20,30,40,50};
  int i;
  
  for(i=0;i<5;i++)
  {
    printf("&arr[%d]=%p,",i,&arr[i]);
    printf("*(arr+%d)=%d\n",i,*(arr+i));
  }
  system("pause");
  return 0;
}
