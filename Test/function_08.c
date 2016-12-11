#include "stdafx.h"
#include "stdlib.h"

void multiplicationTable(int x, int y)
{
	int i = 0;
	int j = 0;

	if (x > y)
	{
		for (i = y; i <= x; i++)
		{
			printf("== %d단 ==\n", i);
			for (j = 1; j < 10; j++)
			{
				printf("%d * %d = %2d\n", i, j, i * j);
			}
			printf("\n");
		}
	}
	else
	{
		for (i = x; i <= y; i++)
		{
			printf("== %d단 ==\n", i);
			for (j = 1; j < 10; j++)
			{
				printf("%d * %d = %2d\n", i, j, i * j);
			}

			printf("\n");
		}
	}
}

int main()
{
	int x = 0;
	int y = 0;

	scanf("%d%d", &x, &y);

	multiplicationTable(x, y);




	system("pause");
	return 0;
}
