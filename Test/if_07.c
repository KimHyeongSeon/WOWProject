 
#include "stdafx.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	char grade;

	printf("성적은??? ");
	scanf("%c",&grade);

	if(grade == 'A')
		printf("매우잘함");
	else if(grade == 'B')
		printf("잘함");
	else if(grade == 'C')
		printf("보통임");
	else if(grade == 'D')
		printf("노력필요");
	else if(grade == 'F')
		printf("낙제");
	else
		printf("잘못입력");


	system("pause");
	return 0;
}

