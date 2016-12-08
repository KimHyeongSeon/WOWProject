#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int ani = 0;
	int leg = 0;
	int dCount = 0;
	int cCount = 0;

	while (1)
	{
		scanf("%d%d", &ani, &leg);
		dCount = (leg - (ani * 2)) / 2;
		cCount = ((4 * ani) - leg) / 2;

		if (ani == 0 && leg == 0)
		{
			break;
		}

		if (ani > 1000 || leg > 4000)
		{
			printf("INPUT ERROR!\n");
		}
		else if (dCount < 0 || cCount < 0)
		{
			printf("0\n");
		}
		else 
		{				
			printf("%d %d\n", dCount, cCount);		
		}

	}





	system("pause");
	return 0;
}
