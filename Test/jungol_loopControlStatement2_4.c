#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int num = 0;
	int i = 0;
	int sum = 0;

	scanf("%d", &num);

	for (i = num; i <= 100; i++)
	{
		sum += i;
	}
	printf("%d", sum);

	system("pause");
	return 0;
}
