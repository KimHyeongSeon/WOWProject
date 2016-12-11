#include "stdafx.h"
#include "stdlib.h"
#include "math.h"

void intOperator(int x, int y)
{
	if ( abs(x) > abs(y) )
	{
		printf("%d\n", x);
	}
	else
	{
		printf("%d\n", y);
	}
}

void doubleOperator(double a, double b)
{
	if (fabs(a) < fabs(b))
	{
		printf("%.2lf\n", a);
	}
	else
	{
		printf("%.2lf\n", b);
	}
}


int main()
{
	int x = 0;
	int y = 0;
	double a = 0;
	double b = 0;

	scanf("%d%d", &x, &y);
	scanf("%lf%lf", &a, &b);

	intOperator(x, y);
	doubleOperator(a, b);




	system("pause");
	return 0;
}
