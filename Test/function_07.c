#include "stdafx.h"
#include "stdlib.h"

void calculation(int x, int y)
{
	if (x > y)
	{
		x = x / 2;
		y = y * 2;
	}
	else
	{
		y = y / 2;
		x = x * 2;
	}
	printf("%d %d", x, y);
}

int main()
{
	int a = 0;
	int b = 0;

	scanf("%d%d", &a, &b);

	calculation(a, b);


	system("pause");
	return 0;
}
