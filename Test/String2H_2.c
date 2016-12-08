#include "stdafx.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	char str[5][10] = { {"flower"}, {"rose"}, {"lily"}, {"daffodil"}, {"azalea"} };
	int i = 0;
	char compare = ' ';
	int count = 0;

	scanf("%c", &compare);

	for (i = 0; i < 5; i++)
	{
		if (str[i][1] == compare || str[i][2] == compare)			
		{
			printf("%s\n", str[i]);
			count++;
		}
	}

	printf("%d", count);








	system("pause");
	return 0;
}
