#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int a;
	int count = 0;
	int sum = 0;

	while (1)
	{
		scanf("%d", &a);
		sum = sum + a;
		count++;
		if (a >= 100)
		{
			printf("%d\n%.1lf", sum, (double)sum/count);
			break;
		}
	}



	system("pause");
	return 0;
}
