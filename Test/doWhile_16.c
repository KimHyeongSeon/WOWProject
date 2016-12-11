
#include "stdafx.h"
#include "stdlib.h"

void GetSumProduct(int a, int b, int sum, int product);

int _tmain(int argc, _TCHAR* argv[])
{
	int i = 0;
	int sum = 0;

	do
	{
		printf("10보다 큰 정수를 입력하라 ");
		scanf("%d", &i);
		sum += i;

	} while (i > 10);
	{
		printf("%d", sum);
	}




	system("pause");
	return 0;
}

