#include "stdafx.h"
#include "stdlib.h"
#include "math.h"

int print(int a)
{
	if (a <= 0)
	{
		return 0;
	}
	print(a - 2);
	printf("%d ", a);

	return	0;
}

int main()
{
	int N = 0;

	scanf("%d", &N);

	print(N);

	system("pause");
	return 0;
}

