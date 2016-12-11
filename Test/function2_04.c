#include "stdafx.h"
#include "stdlib.h"
#include "math.h"

void radius(double x)
{
	x = sqrt(x / 3.14);
	printf("%.2lf", x);
}

int main()
{
	double num = 0;

	scanf("%lf", &num);

	radius(num);





	system("pause");
	return 0;
}
