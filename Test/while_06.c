#include "stdafx.h"
#include "stdlib.h"



void main()

{
	int h, p, i;
	printf("높이를 입력하시오.\n");
	scanf("%d", &h);
	if (h <= 0)
	{
		printf("잘못입력하셨습니다.\n");
		return;
	}
	p = h;
	while (p > 0)
	{
		i = 1;
		while (i <= p)
		{
			printf("*");
			i++;
		}
		printf("\n");
		p--;
	}
}
