#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int a = 0;
	int b = 0;
	int i = 0;

	scanf("%d%d", &a, &b);

	if (a < b)
	{
		for (i = a; i <= b; i++)
		{
			printf("%d ", a);
			a++;
		}
	}
	else
	{
		for (i = b; i <= a; i++)
		{
			printf("%d ", b);
			b++;
		}
	}


	zz
	system("pause");
	return 0;
}
