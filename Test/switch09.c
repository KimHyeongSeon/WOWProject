#include "stdafx.h"
#include "stdlib.h"



void main()

{
	int key, i, h, k, s;
	printf("높이를 입력하세요.\n");
	scanf("%d", &h);
	printf("1.하노이타워 2.피라미드\n");
	scanf("%d", &key);
	if (key != 1 && key != 2)
	{
		printf("잘못입력하셨습니다.\n");
		return;
	}
	switch (key)
	{
	case 1:
		for (i = 1; i <= h; i++)
		{
			for (k = 1; k <= i; k++)
				printf("*");
			printf("\n");	
		}
		break;
	case 2:
		for (i = 1; i <= h; i++)
		{
			for (s = h; s > i; s--)
				printf(" ");
			for (k = 1; k <= 2 * i - 1; k++)
				printf("*");
			printf("\n");
		}
	
	}
}
