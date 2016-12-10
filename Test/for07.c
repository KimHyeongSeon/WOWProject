#include "stdafx.h"
#include "stdlib.h"



void main()
{
	int i, j, k;
	for (i = 1; i <= 9; i += 3)
	{
		for (j = 1; j <= 9; j++)
		{
			for (k = 0; k <= 2; k++)
				printf("%d * %d = %2d ", i+k, j, (i+k)*j);
			printf("\n");
		}
		printf("\n");
	}
}
