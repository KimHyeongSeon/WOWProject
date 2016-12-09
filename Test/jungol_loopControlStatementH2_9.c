#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int num = 0;
	int i = 0;
	int j = 0;

	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= num; j++)
		{
			printf("(%d, %d) ", i, j);
		}
		printf("\n");
	}



	system("pause");
	return 0;
}
