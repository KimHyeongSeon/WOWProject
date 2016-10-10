#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int height = 0;
	int i, j = 0;

	printf("크기를 입력하세요.");
	scanf("%d", &height);

	if (height % 2 == 0 || height < 0 || height > 100)
	{
		printf("INPUT ERROR!");
		return 0;
	}
	for (i = 0; i < height / 2 + 1; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 1 + i * 2; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < height / 2; i++)
	{
		for (j = 0; j < height / 2 - 1 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < height -2 - i * 2; j++)
		{
			printf("*");
		}
		printf("\n");
	}



	system ("pause");
	return 0;
}
