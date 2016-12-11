#include "stdafx.h"
#include "stdlib.h"
#include "math.h"

int printFunction(int x)
{
	if (x < 1)
	{
		return 0;
	}

	printf("%d ", x);

	return printFunction(x - 1);
}

int main()
{
	int N = 0;

	scanf("%d", &N);
	
	printFunction(N);

	system("pause");
	return 0;
}
