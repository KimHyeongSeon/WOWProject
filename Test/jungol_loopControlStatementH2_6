#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int x = 0;
	int y = 0;
	int i = 0;
	int sum = 0;
	int count = 0;

	scanf("%d%d", &x, &y);

	if (x > y)
	{
		for (i = y; i <= x; i++)
		{
			if (i % 3 == 0 || i % 5 == 0)
			{
				sum += i;
				count++;
			}
		}
	}
	if (x <= y)
	{
		for (i = x; i <= y; i++)
		{
			if (i % 3 == 0 || i % 5 == 0)
			{
				sum += i;
				count++;
			}
		}
	}
	printf("합계 : %d\n평균 : %.1lf", sum, (double)sum / count);




	system("pause");
	return 0;
}
