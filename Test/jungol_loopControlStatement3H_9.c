#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int num = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int m = 0;
	int p = 0;
	int inputNum = 1;

	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			printf("# ");
		}
		printf("\n");
	}

	for (k = 0; k < num - 1; k++)
	{
		for (m = 0; m < k + 1; m++)
		{
			printf("  ");
		}
		for (p = 0; p < num - 1 - k; p++)
		{
			printf("# ");
		}
		printf("\n");
	}


	system("pause");
	return 0;
}
