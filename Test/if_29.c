#include "stdafx.h"
#include "stdlib.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int a, b, c;
	printf("국어,수학,영어의 점수를 입력하세요.\n");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b&&a > c)
		printf("가장 높은 점수를 받은과목은 국어 이며 %d점 입니다.\n", a);
	else if (b > c&&b > a)
		printf("가장 높은 점수를 받은과목은 수학 이며 %d점 입니다.\n", b);
	else
		printf("가장 높은 점수를 받은과목은 영어 이며 %d점 입니다.\n", c);

	system("pause");
	return 0;
}
