#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int num = 0;
	int i = 0;
	int score = 0;
	int sum = 0;
	int count = 0;

	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		scanf("%d", &score);
		sum += score;
		count++;
	}
	
	printf("평균 : %.1lf\n", (double)sum / count);

	if (sum / count >= 80)
	{
		printf("합격");
	}
	else
	{
		printf("불합격");
	}




	system("pause");
	return 0;
}
