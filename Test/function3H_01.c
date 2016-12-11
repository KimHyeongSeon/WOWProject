#include "stdafx.h"
#include "stdlib.h"
#include "math.h"



int main()
{
	int arr[100] = {};
	int num = 0;
	int i = 0;
	int j = 0;

	scanf("%d", &num);

	arr[0] = num;
	while (1)
	{
		if (num <= 1)
		{
			break;
		}
		i++;
		arr[i] = num / 2;
		num = num / 2;
		
	}

	for (j = i; j >= 0; j--)
	{
		printf("%d ", arr[j]);
	}




	system("pause");
	return 0;
}

