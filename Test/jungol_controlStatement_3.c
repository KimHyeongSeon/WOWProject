#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int age;

	scanf("%d", &age);


	if (age >= 20)
	{
		printf("당신은 성인입니다.");
	}
	else
	{
		printf("당신은 %d년 후에 성인이 됩니다.", 20 - age);
	}



	system("pause");
	return 0;
}
