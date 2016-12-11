#include "stdafx.h"
#include "stdlib.h"
#include "math.h"

int function(int x) 
{
	if (x <= 1)
	{
		return 1;
	}

	return function(x / 2) + function(x - 1);
}

int main()
{
	int N = 0;
	int arr[50] = {};
	int i = 0;

	scanf("%d", &N);

	printf("%d", function(N));


	system("pause");
	return 0;
}
