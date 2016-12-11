#include <stdio.h>

int main(int argc, const char * argv[])
{   int *p;    int *q;    p = (int *) 0x1004;    q = (int *) 0x1000;    printf("p : %x\nq : %x\n",p,q);    printf("p-q : %x\n",p-q);    printf("(unsigned int)p+(unsigned int)q : %x\n",(unsigned int)p +(unsigned int)q);    return 0;}
