#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int num = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int m = 0;

	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (k = 0; k < num - i; k++)
		{
			printf("*");
		}
		for (l = 0; l < num -1 - i; l++)
		{
			printf("*");
		}
		for (m = 0; m < i + 1; m++)
		{
			printf(" ");
		}

		printf("\n");
	}






	system("pause");
	return 0;
}
