#include "stdlib.h"
#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	char ch;
	char *pc = &ch;

	int n;
	int *pi=&n;

	double d;
	double *pd=&d;

	int arr[3];
	int i;

	for(i=0;i<3;i++)
		printf("pc+%p=%p\n", i, pc+i);
	for(i=0;i<3;i++)
		printf("pi+%p=%p\n", i, pi+i);
	for(i=0;i<3;i++)
		printf("pd+%p=%p\n", i, pd+i);
	for(i=0;i<3;i++)
		printf("&arr[%d]-&arr[0]=%d\n", i, &arr[i]-&arr[0]);

	system("pause");
	return 0;
}
