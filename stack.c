#include "stdafx.h"
#include "stdlib.h"
#include "string.h"
int _tmain(int argc, _TCHAR* argv[])
{
char *array[4];
int a;
char stack=4;

*array=&stack;

*array=(char*)malloc(sizeof(char));
stack=(char)malloc(stack*sizeof(char));
array[0]="선문";
array[1]="서울";
array[2]="고려";
array[3]="연세";

for(a=0;a<4;a++)
{
printf("%s\n".array[a]);
}
system("pause");
return 0;
}
