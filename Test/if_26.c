#include "stdafx.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{

	int score;


	printf("당신의 시험점수를 입력하세요.\n");
	scanf_s("%d", &score);


	if (score<0 || score>100)
	{
		printf("잘못 입력하셨습니다.\n");
	}
	else
	{

		if (score >= 90)
			printf("%d점은 A입니다.\n", score);
		else if (score >= 80)
			printf("%d점은 B입니다.\n", score);
		else if (score >= 70)
			printf("%d점은 C입니다.\n", score);
		else if (score >= 60)
			printf("%d점은 D입니다.\n", score);
		else
			printf("%d점은 F입니다.\n", score);
	}

	system("pause");
	return 0;
}
