// numberRectangle.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	int height = 0;
	int width = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int num = 1;


	scanf("%d%d", &height, &width);

	for (i = 0; i < height; i++)
	{
		if (i % 2 == 0)
		{
			for (j = 1 + (width * i); j <= (i+1) * width; j++)
			{
				printf("%d ", j );
			}
		}
		if (i % 2 == 1)
		{
			for (k = (i + 1) * width; k > i*width; k--)
			{
				printf("%d ", k);
			}
		}
		printf("\n");
	}



	system("pause");
    return 0;
}

