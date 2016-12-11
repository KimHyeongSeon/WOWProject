
#include "stdafx.h"
#include "stdlib.h"

void GetSumProduct(int a, int b, int sum, int product);

int _tmain(int argc, _TCHAR* argv[])
{

	int i, j;
	i = 0;
	do
	{
		j = 0;
		do
		{
			printf("%d\t", j);
			j++;

		} while (j<i + 1);
		printf("\n");
		i++;
	} while (i<10);





	system("pause");
	return 0;
}
