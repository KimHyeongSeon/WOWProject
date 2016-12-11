#include "stdafx.h"
#include "stdlib.h"
#include "math.h"



int main()
{
	int num[5] = {};
	int i = 0;
	int sum = 0;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &num[i]);
		num[i] = abs(num[i]);
		sum += num[i];
	}

	printf("%d", sum);





	system("pause");
	return 0;
}
