#include "stdlib.h"
#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int arr[5]={10, 20, 30, 40, 50};
	int *p=&arr[0];
	int i;

	for(i=0;i<5;i++, p++)
		printf("%d\n", *p);
	system("pause");
	return 0;
}
