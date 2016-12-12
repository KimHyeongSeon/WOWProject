#include "stdafx.h"
#include "stdlib.h"
#include "time.h"
#include "conio.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int i=0, num1=0, num2=0, num3=0, one, two, thr, str=0, ball=0;

	printf("[[numberbaseball]]\n\n");
	printf("3 number.\n");
	printf("EX)1 2 3");
	printf("---------------------game start---------------------\n");

	srand((int)time(NULL));

	replay:
	if(num1==num2||num2==num3||num1==num3)
	{
		num1=(rand()%10);
		num2=(rand()%10);
		num3=(rand()%10);
		goto replay;
	}

gameplay:
	i+=1;
	str=0;
	ball=0;

whatthe:
	printf("3 number : ");
	scanf("%d %d %d", &one, &two, &thr);
	if(one>=10||two>=10||thr>=10)
	{
		printf("number \n");
		goto whatthe;
	}

	if(one==num1)
		str+=1;
	if(two==num2)
		str+=1;
	if(thr==num3)
		str+=1;

	if(one==num2)
		ball+=1;
	if(one==num3)
		ball+=1;
	if(two==num1)
		ball+=1;
	if(two==num3)
		ball+=1;
	if(thr==num1)
		ball+=1;
	if(thr==num2)
		ball+=1;

	if(str==0&&ball==0)
	{
		printf("%d : Out\n\n", i);
		goto gameplay;
	}
	if(str==3)
	{
		printf("Homerun\n\n");
		goto end;
	}
	else
	{
		printf("%d : %d Strike, %d Ball \n\n", i, str, ball);
		goto gameplay;
	}
end:
	
	while(!kbhit());
	fflush(stdin);

	return 0;
}

