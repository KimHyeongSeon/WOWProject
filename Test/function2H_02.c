#include "stdafx.h"
#include "stdlib.h"
#include "math.h"



int main()
{
	double x = 0.0;
	double y = 0.0;
	int exist = 0;


	scanf("%lf%lf", &x, &y);

	x = sqrt(x);
	y = sqrt(y);

	if (x > y)
	{
		y = ceil(y);
		x = floor(x);
		printf("%d", (int)(x - y + 1));
	}
	else
	{
		y = floor(y);
		x = ceil(x);
		printf("%d", (int)(y - x + 1));
	}



	system("pause");
	return 0;
}
