#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int N = 0;
	int sum = 0;

	scanf("%d", &N);

	while(N > 0)
	{
		sum = sum + N % 10;
		N = N / 10;
	}
	printf("%d\n", sum);


	while (N > 0)
	{
		N = sum;
		sum = 0;
		sum = sum + N % 10;
		N = N / 10;
	}
	printf("%d\n", sum);


	system("pause");
	return 0;
}
