#include "stdafx.h"
#include "stdlib.h"
#include "math.h"

void updown(double arr[3])
{
	int i = 0;
	int j = 0;
	double temp = 0.0;

	for (i = 0; i < 3; i++)
	{
		for (j = i; j < 3; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}


	printf("%.lf %.lf %.lf", ceil(arr[0]), floor(arr[2]), arr[1]);
}


int main()
{
	double num[3] = {};
	int i = 0;

	for (i = 0; i < 3; i++)
	{
		scanf("%lf", &num[i]);
	}

	updown(num);

	system("pause");
	return 0;
}
