#include "stdafx.h"
#include "stdlib.h"

int main()
{
	double x, y;

	scanf("%lf%lf", &x, &y);

	if (x >= 4.0 && y >= 4.0)
	{
		printf("A");
	}
	else if (x >= 3.0 && y >= 3.0)
	{
		printf("B");
	}
	else
	{
		printf("C");
	}



	system("pause");
	return 0;
}
