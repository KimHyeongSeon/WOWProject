#include "stdafx.h"
#include "stdlib.h"
#include "math.h"
#define PI = 3.141592
#define AREA(radius) 3.141592 * radius * radius


int main()
{
	double radius = 0.0;
	double area = 0.0;

	printf("원의 반지름 : ");
	scanf("%lf", &radius);

	area = AREA(radius);
	printf("원의 넓이 = %.3lf", area);



	system("pause");
	return 0;
}
