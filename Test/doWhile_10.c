#include "stdlib.h"
#include "stdafx.h"

void main(void)
{
	int i, j = 2, k, f=0;
	printf("1보다 큰 자연수를 입력하세요.\n");
	scanf("%d", &i);
	printf("자연수이하의 소수는 ");
	do
	{
		f = 0;
		k = 2;
		do
		{
			if (j%k == 0)
			{
				f++;
				break;
			}
			k++;
		}
		while (k<j);
		
		if (f == 0)
		{
			printf("%d ", j);
		}
		j++;
	}
	while (j<i);
	
	printf("입니다.\n");
}
