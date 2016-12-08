#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int start = 0;
	int end = 0;
	int temp = 0;
	int i = 0;
	int j = 0;

	while (1)
	{
		scanf("%d%d", &start, &end);
		if (start < 2 || start > 9 || end < 2 || end > 9)
		{
			printf("INPUT ERROR!\n");
		}
		else
		{
			for (j = 1; j < 10; j++)
			{
				if (start < end)
				{
					for (i = start; i <= end; i++)
					{
						printf("%d * %d = %2d   ", i, j, i*j);
					}
				}
				if (end <= start)
				{
					for (i = start; i >= end; i--)
					{
						printf("%d * %d = %2d   ", i, j, i*j);
					}
				}
				printf("\n");
			}
			return 0;
		}
	}

	return 0;
}
