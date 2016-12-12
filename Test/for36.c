#include<stdio.h>

main(){
	char ch[] = "computer";
	char *pt;
	pt=ch;
	for(;*pt != '\0';pt++){
		printf("%s\n",pt);
	}
	return 0;
}
