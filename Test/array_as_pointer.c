#include "stdlib.h"
#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int arr[5]={10, 20, 30, 40, 50};
	int i;

	for(i=0;i<5;i++)
	{
		printf("&arr[%d] = %p, ", i, &arr[i]);
		printf("arr+%d=%p\n", i, arr+i);
	}
	for(i=0;i<5;i++)
	{
		printf("arr[%d]=%d, ", i, arr[i]);
		printf("*(arr+%d)=%d\n", i, *(arr+i));
	}
	system("pause");
	return 0;
}
