 

#include "stdafx.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i;
	int j=1;
	int sum=0;

	printf("정수를 입력하시오 : ");
	scanf("%d",&i);

	while(j<=i)
	{
		sum = j + sum;
		j++;

	}

	printf("%d",sum);


	system("pause");
	return 0;
}

