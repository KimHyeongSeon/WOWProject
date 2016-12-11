 
#include "stdafx.h"
#include "stdlib.h"

void area(int x)
{
	double PI = 3.14;

	printf("%.2lf", PI * x * x);
}

int main()
{
	int radius = 0;

	scanf("%d", &radius);

	area(radius);


	system("pause");
	return 0;
}

