
#include "stdafx.h"
#include "stdlib.h"



int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	int i;
	int min;
	int max;
	int *p,*np = &n,*ma = &max,*mi = &min;
	
	scanf("%d",np);
	p = (int *)malloc(sizeof(int) * n);
	
	for (i = 0; i<n; i++)
	{
	scanf("%d",(p+i));
	}

	*(mi) = *(ma) = *(p);

	for (i = 0; i<n; i++)
	{
		if(*(mi)>*(p+i))
		{
			*(mi) = *(p+i);
		}
		if(*(ma)<*(p+i))
		{
			*(ma) = *(p+i);
		}
	}
	printf("최대값: %d\n최소값: %d\n",*(ma),*(mi));

	free(p);

	system ("pause");
	return 0;
}

