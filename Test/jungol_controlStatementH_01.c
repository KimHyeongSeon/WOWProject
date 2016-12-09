#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int x;
	int y;

	scanf("%d%d", &x, &y);

	if (x > y)
	{
		printf("%d", x - y);
	}
	else
	{
		printf("%d", y - x);
	}




	system("pause");
	return 0;
}
