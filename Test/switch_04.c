#include "stdafx.h"
#include "stdlib.h"

void main()
{
	int key, i, j, result=0;
		
	printf("첫번째 정수를 입력하세요.\n");
	scanf("%d", &i);
	printf("두번째 정수를 입력하세요.\n");
	scanf("%d", &j);
	printf("1.두수사이의 합 2.두수 사이의 곱\n");
	scanf("%d", &key);
	
	if (key != 1 && key != 2)
	{
		printf("잘못입력하셨습니다.\n");
		return;
	}
	switch (key)
	{
		case 1:
			for (; i < j; i++)
				result += i;
			printf("두수사이의 합은 %d 입니다.\n", result);
			break;
		case 2:
			result = 1;
			for (; i < j; i++)
				result = result * i;
			printf("두수사이의 곱은 %d 입니다.\n", result);
			break;
	}
}

