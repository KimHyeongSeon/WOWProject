
#include "stdafx.h"
#include "stdlib.h"

int main()
{
	double arr[6] = { 85.6, 79.5, 83.1, 80.0, 78.2, 75.0 };
	int classA, classB;

	scanf("%d%d", &classA, &classB);
	printf("%.1lf", arr[classA - 1] + arr[classB - 1]);

	system("pause");
	return 0;
}
