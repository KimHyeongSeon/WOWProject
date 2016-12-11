 
#include "stdafx.h"
#include "stdlib.h"

int max(int x, int y, int z)
{
	int max = 0;

	if (x > y && x > z)
	{
		max = x;
	}
	else if (y > x && y > z)
	{
		max = y;
	}
	else if (z > x && z > y)
	{
		max = z;
	}
	printf("%d", max);

	return 0;
}

int main()
{
	int num[3] = {};

	scanf("%d", &num[0]);
	scanf("%d", &num[1]);
	scanf("%d", &num[2]);

	max(num[0], num[1], num[2]);




	system("pause");
	return 0;
}
