#include "stdafx.h"
#include "stdlib.h"

int calculation(int x, char y, int z)
{
	if (y == '+')
	{
		printf("%d %c %d = %d", x, y, z, x + z);
	}
	else if (y == '-')
	{
		printf("%d %c %d = %d", x, y, z, x - z);
	}
	else if (y == '*')
	{
		printf("%d %c %d = %d", x, y, z, x * z);
	}
	else if (y == '/')
	{
		printf("%d %c %d = %d", x, y, z, x / z);
	}
	else
	{
		printf("%d %c %d = %d", x, y, z, 0);
	}

	return 0;
}

int main()
{
	int x = 0;
	int y = 0;
	char oper = ' ';

	scanf("%d %c %d", &x, &oper, &y);

	calculation(x, oper, y);



	system("pause");
	return 0;
}
