#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int typeN = 0;
	int size = 0;
	int i, j = 0;

	scanf("%d %d", &size, &typeN);

	if (size % 2 == 0 || size < 0 || size > 100 || typeN < 0 || typeN > 4)
	{
		printf("INPUT ERROR!");
	}
	
	else if (typeN == 1)
	{
		for (i = 0; i < size / 2 + 1; i++)
		{
			for (j = 0; j < i + 1; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (i = 0; i < size / 2; i++)
		{
			for (j = 0; j < size / 2 - i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}

	else if (typeN == 2)
	{
		for (i = 0; i < size / 2 + 1; i++)
		{
			for (j = 0; j < size / 2 - i; j++)
			{
				printf(" ");
			}
			for (j = 0; j < i + 1; j++) {
				printf("*");
			}
			printf("\n");
		}
		for (i = 0; i < size / 2; i++)
		{
			for (j = 0; j < i + 1; j++)
			{
				printf(" ");
			}
			for (j = 0; j < size / 2 - i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
		
	else if (typeN == 3)
	{
		for (i = 0; i < size / 2 + 1; i++)
		{
			for (j = 0; j < i; j++)
			{
				printf(" ");
			}
			for (j = 0; j < size - i * 2; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (i = 0; i < size / 2; i++)
		{
			for (j = 0; j < size / 2 - 1 - i; j++)
			{
				printf(" ");
			}
			for (j = 0; j < 1 + (i + 1) * 2; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}

	else if (typeN == 4)
	{
		for (i = 0; i < size / 2 + 1; i++)
		{
			for (j = 0; j < i; j++)
			{
				printf(" ");
			}
			for (j = 0; j < size / 2 + 1 - i; j++)
			{
				printf("*");
			}
			printf("\n");
		}

		for (i = 0; i < size / 2; i++)
		{
			for (j = 0; j < size / 2; j++)
			{
				printf(" ");
			}
			for (j = 0; j < 2 + i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		


	}

	






	system("pause");
	return 0;
}
