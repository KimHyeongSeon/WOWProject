#include "stdafx.h"
#include "stdlib.h"
#include "math.h"

int sum(int x)
{
	int arr[9] = {};
	int i = 0;
	int sum = 0;

	for (i = 0; i < 9; i++)
	{
		arr[i] = x % 10;
		x /= 10;
		arr[i] = (int)pow(arr[i], 2);
		sum += arr[i];
	}
	printf("%d", sum);

	return 0;
}


int main()
{
	int num = 0;
	scanf("%d", &num);

	sum(num);



	system("pause");
	return 0;
}
