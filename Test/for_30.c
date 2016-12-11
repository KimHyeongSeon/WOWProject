#include "stdafx.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i, j;

	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
			printf("%d * %d = %d\n", i, j, j*i);
	}



	system("pause");
	return 0;
}
