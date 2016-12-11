#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int arr[100] = {};
	int i = 0;
	int j = 0;
	int k = 0;
	int count[10] = { 0 };

	for (i = 0; i < 100; i++)
	{
		scanf("%d", &arr[i]);

		if (arr[i] == 0)
		{
			break;
		}

		count[arr[i] / 10]++;
	}


	for (k = 0; k < 10; k++)
	{

		if (count[k] > 0)
		{
			printf("%d : %d개\n", k, count[k]);
		}
	}
		
	



	system("pause");
	return 0;
}
