#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int num = 0;
	int i = 0;
	int sum = 0;
	int count = 0;

	scanf("%d", &num);

	while (i < num)
	{
		i++;
		if (i % 2 == 1)
		{
			sum = sum + i;
			count++;
		}

		if (sum >= num)
		{
			break;
		}
	}

	printf("%d %d", count, sum);






	system("pause");
	return 0;
}
