#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int arr[6][6] = {};
	int i = 0;
	int j = 0;
	int m = 0;
	int n = 0;

	arr[5][0] = 1;

	for (i = 4; i >= 0; i--)
	{
		for (j = 0; j <= 5 - i; j++)
		{
			arr[i][j] = arr[i + 1][j] + arr[i + 1][j - 1];
		}
	}





	for (m = 0; m < 6; m++)
	{
		for (n = 0; n < 6 - m; n++)
		{
			printf("%d ", arr[m][n]);
		}
		printf("\n");
	}


	system("pause");
	return 0;
}
