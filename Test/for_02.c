#include "stdafx.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int a[10];
	int i;
	int n3,n5;
	n3=0, n5=0;

	printf("10개의 정수를 입력하시오 : \n");
	
	for ( i=0; i<10; i++)
	scanf("%d",&a[i]);

	for ( i=0;i<10;i++)
	{
		if(a[i]%3==0)
			++n3;
		if(a[i]%5==0)
			++n5;
	}

	printf("3의 배수 : %d개\n",n3);
	printf("5의 배수 : %d개",n5);
	
	system("pause");
	return 0;
}


