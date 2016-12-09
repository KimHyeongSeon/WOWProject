#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int i = 1;
	int x;
	int sum = 0;

	scanf("%d", &x);

	while (i <= x)
	{
		sum = sum + i;
		i++;
	}

	printf("%d", sum);
	



	system("pause");
	return 0;
}
