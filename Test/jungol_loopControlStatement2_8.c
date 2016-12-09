#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int i, j;

	for (i = 2; i < 5; i++)
	{
		for (j = 1; j < 6; j++)
		{
			printf("%d * %d =%3d   ", i, j, i*j);
		}
		printf("\n");
	}





	system("pause");
	return 0;
}
