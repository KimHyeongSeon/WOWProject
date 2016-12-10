#include "stdafx.h"
#include "stdlib.h"



void main()

{
	int i, j, k;
	printf("시작하는단과 끝단을 입력하시오.");
	scanf("%d %d", &i, &j);
	if (i <= 0 || j <= 0)
	{
		printf("잘못입력하셨습니다.\n");
		return;
	}
	if (i > j)
	{
		k = i;
		i = j;
		j = k;
	}
	while (i <= j)
	{
		k = 1;
		while (k <= 9)
		{
			printf("%d * %d = %2d\n", i, k, i*k);
			k++;
		}
		printf("\n");
		i++;
	}
}
