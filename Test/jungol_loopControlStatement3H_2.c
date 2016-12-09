#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int num = 0;
	int i = 0;

	scanf("%d", &num);

	for (i = 1; i < 100; i++)
	{
		if (i % num == 0)
		{
			printf("%d ", i);
		}

		if (i % num == 0 && i % 10 == 0)
		{
			break;
		}
	}



	system("pause");
	return 0;
}
