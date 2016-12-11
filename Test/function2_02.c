#include "stdafx.h"
#include "stdlib.h"

void exist(int month, int day)
{
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		if (day > 0 && day <= 31)
		{
			printf("OK!");
		}
		else 
		{
			printf("BAD!");
		}
	}
	if (month == 2)
	{
		if (day > 0 && day <= 28)
		{
			printf("OK!");
		}
		else
		{
			printf("BAD!");
		}
	}
	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (day > 0 && day <= 30)
		{
			printf("OK!");
		}
		else
		{
			printf("BAD!");
		}
	}
}

int main()
{
	int month = 0;
	int day = 0;

	scanf("%d %d", &month, &day);

	exist(month, day);


	system("pause");
	return 0;
}
