#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int num = 0;
	int i = 0;
	int j = 0;

	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}




	system("pause");
	return 0;
}
