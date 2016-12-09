#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int num;

	scanf("%d", &num);

	if (num > 0)
	{
		printf("plus");
	}
	else if (num < 0)
	{
		printf("minus");
	}
	else
	{
		printf("zero");
	}


	system("pause");
	return 0;
}
