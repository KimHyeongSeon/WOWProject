#include<stdio.h>

void strcpy(char *px, char *py);
main()
{
	char a[] = "test data";
	char b[] = "a and b";
	strcpy(a, b);
	printf("%s\n%s\n",a,b);
}
void strcpy(char *px, char *py)
{
	int d;
	d=0;
	while((*(px+d) =*(py+d)) !='\0')
		d++;
}
