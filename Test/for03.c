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
	for (p = 1; p <= h; p++)
	{
		for (i = h; i > p; i--)
			printf(" ");
		for (i = 1; i <= 2*p-1; i++)
			printf("*");
		printf("\n");
	}
}
