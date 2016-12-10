#include "stdafx.h"
#include "stdlib.h"



void main()
{
int key, i, j, k, c = 0;
	printf("수를 한개 입력하세요.\n");
	scanf("%d", &i);

	printf("1.소수판별 2.약수의 개수\n");
	scanf("%d", &key);
	if (key != 1 && key != 2)
	{
		printf("잘못입력하셨습니다.\n");
		return;
	}
	switch (key)
	{
	case 1:
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				printf("소수가 아닙니다.\n");
				return;
			}
		}
		printf("%d 는 소수입니다.\n", i);
	case 2:
		for (k = 2; k <= i; k++)
		{
			for (j = 2; j < k; j++)
			{
				if (k%j == 0)
				{
					break;
				}
			}
			if (j == k)
				c++;
		}
		printf("약수의 개수는 %d개 입니다.\n", c);
	}
