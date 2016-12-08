#include "stdafx.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i ,j;

	for(i=2;i<7;i++)
	{
		for(j=i;j<i+5;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
