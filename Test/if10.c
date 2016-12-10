  #include "stdafx.h"
#include "stdlib.h"



void main()
{
	int x, y, z;
	printf("정수 3개를 입력하시오.\n");
	scanf("%d %d %d", &x, &y, &z);
	if (x > y)
	{
		if (y > z)
			printf("최솟값은 %d 입니다.\n", z);
		if (y < z)
			printf("최솟값은 %d 입니다.\n", y);
	}
	else
	{
		if (x < z)
			printf("최솟값은 %d 입니다.\n", x);
		if (x > z)
			printf("최솟값은 %d 입니다.\n", x);
	}
}
