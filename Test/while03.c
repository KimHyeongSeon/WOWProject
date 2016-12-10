#include "stdafx.h"
#include "stdlib.h"



void main()

{
	int h, p, i;
	printf("높이를 입력하세요.\n");
	scanf("%d", &h);
	if (h <= 0)
	{
		printf("잘못입력하셨습니다.\n");
		return;
	}
	p = 1;
	while (p <= h)
	{
		i = 1;
		while (i <= h - p)
		{
			printf(" ");
			i++;
		}
		i = 1;
		while (i <= p)
		{
			printf("*");
			i++;
		}
		printf("\n");
		p++;
	}
	p = h;
	while (p > 0)
	{
		i = p;
		while (i <= h)
		{
			printf(" ");
			i++;
		}
		i = 1;
		while (i < p)
		{
			printf("*");
			i++;
		}
		p--;
		printf("\n");
	}
}
