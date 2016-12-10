#include "stdafx.h"
#include "stdlib.h"



void main()
{
	int key,i,j;
	printf("1.100이하의 수 입력받아 그수까지 출력\n2.자연수를 입력받아 자리수를 출력\n");
	scanf("%d", &key);
	if (key != 1 && key != 2)
	{
		printf("잘못입력하셨습니다.\n");
		return;
	}
	switch (key)
	{
	case 1:
		printf("100이하의 수를 입력하세요.\n");
		scanf("%d", &i);
		for (j = 1; j <= i; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
		break;
	case 2:
		printf("자연수를 입력하시오.\n");
		scanf("%d", &i);
		for (j = 1; j < i; j = j * 10)
		{
			if (j <= i && i <= 10 * j)
			{
				printf("%d은 %d자리수입니다.\n", i, j);
				return;
			}
		}
	}
}
