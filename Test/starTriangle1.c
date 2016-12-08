#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int typeN = 0;
	int size = 0;
	int i, j = 0;

	scanf("%d %d", &size, &typeN);


	if (size <= 0 || size > 100 || typeN < 1 || typeN > 3)
	{
		printf("INPUT ERROR!");
	}

	else if (typeN == 1) 
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j <= i + 1; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}

	else if (typeN == 2)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				printf("*");
			}
			printf("\n");
		}
	}

	else if (typeN == 3)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i - 1; j > 0; j--)
			{
				printf(" ");
			}
			for (j = 0; j < i * 2 + 1; j++)
			{
				printf("*");
			}
			printf("\n");
		}

	}








	system("pause");
	return 0;
}
