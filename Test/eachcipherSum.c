#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int A = 0;
	int B = 0;
	int S = 0;
	int i = 0;
	int min = 0;
	int count = 0;

	scanf("%d%d%d", &A, &B, &S);

	for (i = B; i >= A; i--)
	{
		if ((i / 100) + ((i - 100) / 10) + (i % 10) == S)
		{
			count++;
			min = i;
		}
	}
	printf("%d\n%d", count, min);



	system("pause");
	return 0;
}
