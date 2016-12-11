#include "stdafx.h"
#include "stdlib.h"

int main()
{
	double arr[6] = {};
	int i = 0;

	for (i = 0; i < 6; i++)
	{
		scanf("%lf", &arr[i]);
	}

	printf("%.1lf", (arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5]) / 6);



	system("pause");
	return 0;
}
