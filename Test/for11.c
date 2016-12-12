5번

for문
#include <stdio.h>
int main(void){
int a, b=0, c=0;

	for(a=1 ; a<=100; a++){
		if(a%2 ==0)
		b += a;
else
	c += a;
}
printf("짝수의 합 : %d", b);
printf("홀수의 합 : %d", c);


return 0;

}


while문 
#include <stdio.h>
int main(void){
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
