#include "stdafx.h"
#include "stdlib.h"

int count = 0;

int division(int x)
{

	if (x <= 1)
	{

		printf("%d", count);
		return 0;
	}
		
	if (x % 2 == 0)
	{
		count++;
		return division(x / 2);
			
	}
	else
	{
		count++;
		return division(x / 3);
	}
	
}

int main()
{
	int N = 0;

	scanf("%d", &N);

	division(N);


	system("pause");
	return 0;
}
