#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int minsuHeight;
	int minsuWeight;
	int giyoungHeight;
	int giyoungWeight;

	printf("민수의 키와 몸무게 입력 ");
	scanf("%d%d", &minsuHeight, &minsuWeight);
	printf("기영이의 키와 몸무게 입력 ");
	scanf("%d%d", &giyoungHeight, &giyoungWeight);

	if (minsuHeight > giyoungHeight && minsuWeight > giyoungWeight)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}



	system("pause");
	return 0;
}
