#include "stdafx.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i,j,x;
	int a='A';

	scanf("%d",&x);

	for(i=0;i<x;i++)
	{
		for(j=0;j<x-i;j++)
		{
			printf("%c",a);
			a++;
		}
		printf("\n");
	}


	system ("pause");
	return 0;
}



