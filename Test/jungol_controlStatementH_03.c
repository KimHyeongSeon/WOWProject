 
#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int year;

	scanf("%d", &year);

	if (year % 4 == 0)
	{
		if (year % 4 == 0 && year % 100 == 0)
		{
			if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0)
			{
				printf("윤년");
				return 0;
			}
			printf("평년");
			return 0;
		}
		printf("윤년");
		return 0;
	}
	else
	{
		printf("평년");
	}



	system("pause");
	return 0;
}
