#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int num = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int inputNum = 1;

	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < i; j++)
		{ 
			printf("  ");
		}
		for (k = 0; k < num - i; k++)
		{
			printf("%d ", inputNum);
			inputNum++;
		}
		printf("\n");
	}


	system("pause");
	return 0;
}
