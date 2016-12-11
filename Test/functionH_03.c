#include "stdafx.h"
#include "stdlib.h"

void rectangle(int x)
{
	int i = 0;
	int j = 0;

	for (i = 1; i <= x; i++)
	{
		for (j = 1; j <= x; j++)
		{
			printf("%d ", i * j);
		}
		printf("\n");
	}
}

int main()
{
	int num = 0;

	scanf("%d", &num);

	rectangle(num);





	system("pause");
	return 0;
}
