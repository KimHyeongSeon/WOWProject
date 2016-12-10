#include "stdafx.h"

int main()
{
	int i, j;
	for (i = 0; i < 9; i++)
	{
		if (i < 5)
		{
			for (j = 0; j < 5 - i; j++)
			{
				printf("*");
			}
			
			printf("\n");
		}
		else
		{
			for (j = 0; j <= 4; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}

	return 0;
}

