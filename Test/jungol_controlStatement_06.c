#include "stdafx.h"
#include "stdlib.h"

int main()
{
	char sex;
	int age;

	scanf("%c", &sex);
	scanf("%d", &age);

	if (sex == 'M' && age >= 18)
	{
		printf("MAN");
	}
	else if (sex == 'M' && age <= 18)
	{
		printf("BOY");
	}
	else if (sex == 'F' && age >= 18)
	{
		printf("WOMAN");
	}
	else if (sex == 'F' && age <= 18)
	{
		printf("GIRL");
	}



	system("pause");
	return 0;
}
