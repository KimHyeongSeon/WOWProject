#include "stdafx.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i,j,k;
	int a;

	scanf("%d",&a);
	
	for(i=1; i<=a;i++)
	{
		for(k=1;k<=i-1;k++)
		{
			printf(" ");
		}
		for(j=a;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}
