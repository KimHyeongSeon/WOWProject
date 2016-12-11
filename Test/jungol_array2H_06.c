#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int arr[5][6] = { {0, 1, 0 ,1, 0, 1} };
	int i = 0; 
	int j = 0;
	int m = 0;
	int n = 0;

	for (i = 1; i < 5; i++)
	{
		for (j = 1; j < 6; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j + 1];
		}
	}

	for (m = 0; m < 5; m++)
	{
		for (n = 1; n < 6; n++)
		{
			printf("%d ", arr[m][n]);
		}
		printf("\n");
	}



	system("pause");
	return 0;
}
