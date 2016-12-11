#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int arr[4][3] = {};
	int sum[4] = {};
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	for (i = 0; i < 4; i++)
	{
		printf("%d반? ", i + 1);
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
			sum[i] += arr[i][j];
		}
	}

	for (k = 0; k < 4; k++)
	{
		printf("%d반 : %d개\n", k + 1, sum[k]);	
	}






	system("pause");
	return 0;
}
