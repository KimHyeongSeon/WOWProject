
#include <stdio.h>

int main(void)
{	
	int a, b=0, c=0;

	for(a=1 ; a<=100; a++)
	{
		if(a%2 ==0)
		{
			b += a;
		}
		else	
		{
			c += a;
		}
	}
	printf("짝수의 합 : %d", b);
	printf("홀수의 합 : %d", c);

	return 0;
}
