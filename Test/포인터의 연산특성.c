#include "stdlib.h"
#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int arr[3]={11, 22, 33};
	int * ptr=arr;
	printf("%d %d %d \n", *ptr, *(ptr+1), *(ptr+2));

	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr--;
	printf("%d ", *ptr); ptr--;
	printf("%d ", *ptr); printf("\n");

	system("pause");
	return 0;
}
