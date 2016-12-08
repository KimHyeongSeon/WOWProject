#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	int square = 0;
	int num = 0;

	scanf("%d%d", &square, &num);

	if (num == 1)
	{
		for (i = 0; i < square; i++)
		{
			for (j = 0; j < square; j++)
			{
				printf("%d ", i + 1);
			}
			printf("\n");
		}
	}

	else if (num == 2)
	{
		for (i = 0; i < square; i++)
		{
			if (i % 2 == 0)
			{
				for (j = 0; j < square; j++)
				{
					printf("%d ", j + 1);
				}
				printf("\n");
			}
			else
			{
				for (k = square; k > 0; k--)
				{
					printf("%d ", k);
				}
				printf("\n");
			}
		}
	}

	else if (num == 3)
	{
		for (i = 0; i < square; i++)
		{
			for (j = 0; j < square; j++)
			{
				printf("%d ", (i + 1) * (j + 1));
			}
			printf("\n");
		}
	}




	system("pause");
	return 0;
}
