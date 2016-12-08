
#include "stdafx.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	int sum = 0;
	int count = 0;

	scanf("%d",&n);

	for(int i=1 ;sum<n; i=i+2)
	{
		count++;
		sum = i+sum;
	}
	printf("%d %d",count, sum);


system("pause");
return 0;
}
