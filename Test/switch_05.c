#include "stdafx.h"
#include "stdlib.h"



void main()
{
int key, i, j, k, l;
	printf("첫번째 정수를 입력하세요.\n");
	scanf("%d", &i);
	printf("두번째 정수를 입력하세요.\n");
	scanf("%d", &j);
	if (i < 0 || j < 0)
	{
		printf("잘못입력하셨습니다.\n");
		return;
	}
	if (i>j)
	{
		l = i;
		i = j;
		j = l;
	}
	printf("1.두수사이의 단 2.두수사이의 수의 개수\n");
	scanf("%d", &key);
	if (key != 1 && key != 2)
	{
		printf("잘못입력하셨습니다.\n");
		return;
	}
	switch (key)
	{
	case 1:
		for (; i <= j; i += 3)
		{
			for (l = 1; l <= 9; l++)
			{
				for (k = 0; k <= 2; k++)
				{ 
					if (i + k > j)
						break;
					printf("%2d * %2d = %2d ", i + k, l, (i + k)*l);
				}
					
				printf("\n");
			}
			printf("\n");
		}
	case 2:
		l = j - i;
		printf("두수사이의 수들의 개수는 %d 입니다.\n", l);
	}
}

