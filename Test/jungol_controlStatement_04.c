#include "stdafx.h"
#include "stdlib.h"

int main()
{
	double weight;

	scanf("%lf", &weight);

	if (weight <= 50.8)
	{
		printf("플라이급");
	}
	else if (weight > 50.8 && weight <= 61.23)
	{
		printf("라이트급");
	}
	else if (weight > 61.23 && weight <= 72.45)
	{
		printf("미들급");
	}
	else if (weight > 72.45 && weight <= 88.45)
	{
		printf("크루저급");
	}
	else
	{
		printf("헤비급");
	}


	system("pause");
	return 0;
}
