#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int x, y, z;

	scanf("%d%d%d", &x, &y, &z);

	if (y > x && z > x)
	{
		printf("%d", x);
	}
	else if (x > y && z > y)
	{
		printf("%d", y);
	}
	else if (x > z && y > z)
	{		
		printf("%d", z);		
	}



	system("pause");
	return 0;
}
