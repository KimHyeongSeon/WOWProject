#include "stdafx.h"
#include "stdlib.h"



int main()
{
	int i, s;
	printf("자연수를 입력하시오.\n");
	scanf("%d", &s);
	if (s < 0)
	{
		printf("잘못입력하셨습니다.\n");
		return 0;
	}
	else if (s == 1)
	{
		printf("1은 소수가 아닙니다.\n");
		return 0;
	}
	for (i = 2; i < s; i++)
	{
		if (s%i == 0)
		{
			printf("%d 는 소수가 아닙니다.\n",s);
			return 0;
		}
		
	}
	printf("%d 는 소수입니다.\n",s);
	return 0;
}
