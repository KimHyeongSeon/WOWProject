#include "stdafx.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int a,sum;

	printf("정수를 입력하시오 : ");
	scanf("%d",&a);

	sum=0;
	while(a<=100)
	{
		sum = a + sum;
		a++;
	}

	printf("%d",sum);
	
	system("pause");
	return 0;
}
