#include "stdafx.h"
#include "stdlib.h"
#include "math.h"

int recursiveFunction(int x)
{
	if (x < 1)
	{
		return 0;
	}
	printf("재귀함수\n");

	return recursiveFunction(x - 1);
}


int main()
{
	int N = 0;

	scanf("%d", &N);

	recursiveFunction(N);




	system("pause");
	return 0;
}
