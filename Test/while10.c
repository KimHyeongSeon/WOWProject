#include "stdafx.h"
#include "stdlib.h"



void main()

{
	int in[11];
	int i = 1, t=0, f=0;
	printf("자연수를 10개 입력하세요.");
	while (i <= 10)
	{
		printf("%d번째 : ",i);
		scanf("%d", &in[i]);
		i++;
	}
	i = 1;
	while (i <= 10)
	{
		if (in[i] % 3 == 0)
			t++;
		if (in[i] % 5 == 0)
			f++;
		i++;
	}
	printf("3의 배수는 %d개입니다.\n", t);
	printf("5의 배수는 %d개입니다.\n", f);
}
