#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int i, j, result;
	
	printf("자연수를 입력하시오.\n");
	scanf("%d", &j);
	if (j <= 0)
	{
		printf("잘못입력하셨습니다.\n");
		return 0;
	}
	result = 1;
	for (i = 1; i <= j; i++)
	{
		result = result*i;
	}
	printf("%d 팩토리얼은 %d 입니다.\n", j, result);
	return 0;
}
