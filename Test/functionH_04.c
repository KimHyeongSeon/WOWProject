#include "stdafx.h"
#include "stdlib.h"

void square(int x, int y)
{
	if (x > y)
	{
		printf("%d", (x * x) - (y * y));
	}
	else
	{
		printf("%d", (y * y) - (x * x));
	}
}


int main()
{
	int x = 0;
	int y = 0;

	scanf("%d%d", &x, &y);

	square(x, y);


	system("pause");
	return 0;
}
