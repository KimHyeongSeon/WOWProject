#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int x, y, z;

	scanf("%d%d%d", &x, &y, &z);

	if (x > y && x > z)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}

	if (x == y && y == z)
	{
		printf(" 1");
	}
	else
	{
		printf(" 0");
	}


	system("pause");
	return 0;
}
