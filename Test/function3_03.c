#include "stdafx.h"
#include "stdlib.h"
#include "math.h"

int sum(int x)
{
	if (x <= 1)
	{
		return 1;
	}

	return x + sum(x - 1);
}

int main()
{
	int N = 0;
	
	scanf("%d", &N);

	printf("%d", sum(N));


	system("pause");
	return 0;
}
