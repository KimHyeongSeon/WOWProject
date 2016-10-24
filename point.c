#include "stdafx.h"
#include "stdlib.h"

int _tmain(int argc, _TCHAR* argv[])
{
int i;
char *input[4]={NULL};

input[0]=(char*)malloc(sizeof(char)*10);
input[1]=(char*)malloc(sizeof(char)*10);
input[2]=(char*)malloc(sizeof(char)*10);
input[3]=(char*)malloc(sizeof(char)*10);

input[0]="선문";
input[1]="백석";
input[2]="호서";
input[3]="순천";

for(i=0;i<4;i++);

printf("%s\n",input[i]);
return 0;
}
