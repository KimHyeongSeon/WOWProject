#include "stdafx.h"
#include "stdlib.h"
#include "math.h"

int printN(int x)
{
	if (x <= 0)
	{
		return 1;
	}

	return (printN(x - 1) * printN(x - 2)) % 100;
}

int main()
{
	int num = 0;

	scanf("%d", &num);

	printf("%d", printN(num));

	system("pause");
	return 0;
}

