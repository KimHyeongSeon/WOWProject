#include "stdafx.h"
#include "stdlib.h"



void main()

{
	int i = 2, j, f=0, k;
	printf("자연수를 입력하세요.\n");
	scanf("%d", &k);
	if (k <= 1)
	{
		printf("잘못입력하셨습니다.\n");
		return;
	}
	printf("%d 이하의 소수는 ",k);
	if (i == 2)
	{
		printf("2 ");
		f = 1;
		i++;
	}
	while (i <= k)
	{
		j = 2;
		while (j < i)
		{
			f = 0;
			if (i%j == 0)
			{
				f = 1;
				j++;
				break;
			}
			j++;
		}
		if (f == 0)
		{
			printf("%d ",j);
		}
		i++;
	}
	printf("입니다.\n");
}
