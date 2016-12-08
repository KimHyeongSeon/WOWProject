#include "stdafx.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i,j,x;

	scanf("%d",&x);

	for (i=0;i<x;i++)
	{
		for (j=0;j<0+i;j++)
		{
			printf(" ");
		}
		for(j=0;j<x-i;j++)
		{
			printf("*");
		}
		for(j=0;j<x-1-i;j++)
		{
			printf("*");
		}
		printf("\n");
	}



	system ("pause");
	return 0;
}

