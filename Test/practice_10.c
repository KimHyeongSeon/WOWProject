#include <stdio.h>                int main(){ int num; int *p; p = &num; scanf_s("%d", p); printf("%d...%d", *p / 10, *p % 10); return 0;}
