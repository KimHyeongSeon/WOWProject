#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int height;
	int weight;

	scanf("%d%d", &height, &weight);

	printf("비만수치는 %d입니다.\n", weight + 100 - height);
	
	if (weight + 100 - height > 0)
	{
		printf("당신은 비만이군요.");
	}





	system("pause");
	return 0;
}
