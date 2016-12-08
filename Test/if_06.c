 
#include "stdafx.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	char S,M,F;
	int age;

	printf("성별은??? 남자일 경우 M 여자일 경우 F :\n");
	scanf("%c",&S);

	printf("나이는???\n");
	scanf("%d",&age);

	if (S=='M')
	{
		if(age>=18)
		{
			printf("MAN");
		}
		else
		{
			printf("BOY");
		}
	}

	if (S=='F')
	{
		if(age>=18)
		{
			printf("WOMAN");
		}
		else
		{
			printf("GIRL");
		}
	}


	system("pause");
	return 0;
}

