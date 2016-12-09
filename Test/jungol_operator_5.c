#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int x, y;

	scanf("%d %d", &x, &y);

	if (x == y)
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}
	if (x != y)
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}

	system("pause");
	return 0;
}
