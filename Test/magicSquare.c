#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int num = 0;
	int i, j = 0;
	int k = 1;
	int arr[100][100] = {};

	scanf("%d", &num);



	arr[i][num / 2 - 1] = k;

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
		{
			if (i < 0)
			{
				arr[num - 1][j] = k++;


				if (j < 0)
				{
					arr[i - 1][num - 1] = k++;
				}
			}

			if (j < 0)
			{
				arr[i - 1][num - 1] = k++;
			}
		}
	}






	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}



	system("pause");
	return 0;
}
