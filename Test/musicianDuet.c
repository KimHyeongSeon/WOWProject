#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int n = 0;
	int num[10] = {};
	int i = 0;
	int j = 1;
	int k = 0;
	int cnt = 0;
	int GCD = 0; //최대공약수
	int LCM = 0; //최소공배수

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}

	while (1)
	{
		j++;

		for (k = 0; k < n; k++)
		{
			if (num[k] % j == 0)
			{
				cnt++;
				if (cnt == n)
				{
					GCD = j;
					cnt = 0;
				}
			}
			else
			{
				break;
			}
		}

		cnt = 0;
		for (k = 0; k < n; k++)
		{
			if (j % num[k] == 0)
			{
				cnt++;
				if (cnt == n)
				{
					LCM = j;

					printf("%d  %d", GCD, LCM);
					return 0;
				}
			}
		}
	}







	system("pause");
	return 0;
}
