#include "stdafx.h"
#include "stdlib.h"
#define SUM(x, y) = x + y
#define MINUS(x, y) = x - y

int sum(int x, int y)
{
	printf("(%d + %d) ^ 3 = %d\n", x, y, (x + y) * (x + y) * (x + y));

	return 0;
}

int minus(int x, int y)
{
	printf("(%d - %d) ^ 2 = %d\n", x, y, (x - y) * (x - y));
	
	return 0;
}


int main()
{
	int a = 0;
	int b = 0;
	int plus = 0;
	int mius = 0;
	
	scanf("%d%d", &a, &b);
	

	mius = minus(a, b);
	plus = sum(a , b);

	        



	system("pause");
	return 0;
}
