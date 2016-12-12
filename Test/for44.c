
#include <stdio.h>
int main(void)
{
  int d,f,i=1, j=0, k=0;
  while(i<=100){
    if(i%2 ==0)
      j +=i;
    else
      k +=i;
    i++;
  }
  printf("짝수의 합 %d",j);
  printf("홀수의 합 %d",k);

  scanf("%d",&d);
  scanf("%d",&f);
  return 0;

}
