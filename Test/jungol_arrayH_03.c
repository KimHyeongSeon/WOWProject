#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int arr[10] = {};
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("홀수 번째 합 : %d\n", arr[0] + arr[2] + arr[4] + arr[6] + arr[8]);
	printf("짝수 번째 합 : %d\n", arr[1] + arr[3] + arr[5] + arr[7] + arr[9]);






	system("pause");
	return 0;
}
