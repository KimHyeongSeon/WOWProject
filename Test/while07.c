#include "stdafx.h"
#include "stdlib.h"



void main()

{
	int i,j;
	printf("50이하의 자연수를 입력하세요.\n");
	scanf("%d", &i);
	j = 1;
	while (j <= i && i <= 50)
	{
		if (j% 2 == 0)
			printf("%d ",j);
		j++;
	}
	printf("\n");
}
