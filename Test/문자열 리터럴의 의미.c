#include "stdlib.h"
#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	char *p="abcde";

	printf("p=%s\n", p);
	printf("p=%p\n", p);
	printf("p=%p\n", "abcde");

	p[0]='A';
	strcpy(p, "hello");

	system("pause");
	return 0;
}
