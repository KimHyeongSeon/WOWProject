
#include "stdlib.h"
#include "stdafx.h"

void doWhile5(void)
{
  	int i = 1, j = 1;
	do
	{
		j = 1;
		do
		{
			printf("%d * %d = %d\n", i, j, i*j);
			j++;
		}
		while (j <= 9);
		
		printf("\n");
		i++;
	} 
	while (i <= 9);
}
