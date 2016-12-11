#include "stdafx.h"
#include "stdlib.h"

void sum(int x)
{
	int i = 0;
	int sum = 0;

	for (i = 1; i <= x; i++)
	{
		sum += i;
	}
	printf("%d", sum);
}

int main()
{
	int num = 0;

	scanf("%d", &num);

	sum(num);




	system("pause");
	return 0;
}
