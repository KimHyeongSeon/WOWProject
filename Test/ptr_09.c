

#include "stdafx.h"
#include "stdlib.h"



int _tmain(int argc, _TCHAR* argv[])
{
	int i;
	int rea[10];
	int *ptr = rea;
	int sol = 0;
	int cou = 0;
	int *str = &sol;
	int *ctr = &cou;

	for (i=0; i<10; i++)
	{
		scanf("%d",(ptr+i));
	}

	for(i = 0;i<10;i++)
	{
		if(*(ptr+i)%2 == 0)
		{
			(*ctr)++;
		}
		else
		{
			(*str)++;
		}
	}
		
	printf("홀수 : %d개\n",*str);
	printf("짝수 : %d개",*ctr);

	system ("pause");
	return 0;
}
