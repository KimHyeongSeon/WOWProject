#include "stdafx.h"
#include "stdlib.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int i, j;

	for (i = 1; i <= 11; i++)
	{
		for (j = 2; j <= 6; j++)
		{
			printf("%2d*%2d=%3d ", j, i, j*i);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	for (i = 1; i <= 11; i++)
	{
		for (j = 7; j <= 11; j++)
		{
			printf("%2d*%2d=%3d ", j, i, j*i);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
