#include "stdafx.h"
#include "stdlib.h"



void main()
{
	int i, j, sum;
	printf("자연수 2개를 입력하시오.\n");
	scanf("%d %d", &i, &j);
	if (i <= 0 || j <= 0)
	{
		printf("잘못입력하셨습니다.\n");
		return 0;
	}
	if (i >= j)
	{
		sum = i;
		i = j;
		j = sum;
	}
	sum = 0;
	for (; i <= j; i++)
		sum += i;
	printf("두 수와 두 수 사이에 존재하는 수들의 합은 %d 입니다.\n", sum);

}
