#include <stdio.h>

void test1(char *p)
{   
printf("test1 *p = %c\n", *p);    *p = '1';}void test2(char *p){    printf("test2 *p = %c\n", *p);    *p = 'a';}int main(int argc, char*argv[]){    char ch1 = 'z';    char *p;        p = &ch1;        printf("*p = %c\n",*p);        test1(p);    printf("ch1 = %c\n",ch1);    test2(p);    printf("ch1 = %c\n",ch1);    }
