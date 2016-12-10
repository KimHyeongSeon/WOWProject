#include "stdafx.h"
#include "stdlib.h"



void main()

{
	int i=1, k;
	printf("자연수를 입력하세요.\n");
	scanf("%d", &k);
	if (k <= 1)
	{
		printf("잘못입력하셨습니다.\n");
		return;
	}
	while (i <= k)
	{
		printf("%d ", i*i);
		i++;
	}
	printf("\n");
}
