 
#include "stdafx.h"
#include "stdlib.h"

int rectangle(int x)
{
	int i = 0;
	int j = 0;
	int num = 1;
		
	for (j = 0; j < x; j++)
	{
		for (i = 0; i < x; i++)
		{
			printf("%d ", num);
			num++;
		}
		printf("\n");
	}

	return 0;
}


int main()
{
	int num = 0;

	scanf("%d", &num);

	rectangle(num);






	system("pause");
	return 0;
}
